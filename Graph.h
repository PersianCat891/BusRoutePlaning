#ifndef GRAPH_H
#define GRAPH_H
#include "config.h"
#include "Place.h"
#include "Path.h"
class Graph{
public:
    int len;
    std::vector<Places*> places;
    std::vector<std::vector<Path>> graph;
public:
    Graph();
    Graph(int _len, std::vector<Places*> _places);
    void addPlaces(QString _name, QString _info);
    //void addPlaces(json Json);
    void addPath(uint32_t _busIndex
                , uint32_t _start
                , uint32_t _end
                , uint32_t _time
                , uint32_t _cost);
   // void addPath(json Josn);
    void printPlaces();
    void PrintPath();
    // 此处采用Dijkstra算法
    // vector[0].first:总花费时间 vector[0].second:起始站
    // vector[i].first:乘坐公交 vector[i].second:下一站
    std::vector<std::pair<uint32_t, uint32_t>> minTime(int _start, int _end);
    // 此处采用Dijkstra算法
    // vector[0].first:总花费车费 vector[0].second:起始站
    // vector[i].first:乘坐公交 vector[i].second:下一站
    std::vector<std::pair<uint32_t, uint32_t>> minCost(int _start, int _end);
    QString findMinTime(int _start, int _end);
};

#endif // GRAPH_H
