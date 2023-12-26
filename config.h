#ifndef CONFIG_H
#define CONFIG_H

#define MAP_WIDTH 1250      //宽
#define MAP_HEIGHT 750     //高
#define MAP_TITILE "城市旅游购物交通咨询模拟"  //标题
#define MAP_BACKGROUND ":/myImage/myImage/citybackground.jpg"
#define InquireButton_BackGround ":/myImage/myImage/Inquiry.png"
#define RefreshButton_BackGround ":/myImage/myImage/refresh.png"
#define MoneyButton_BackGround ":/myImage/myImage/money.png"
#define TimeButton_BackGround ":/myImage/myImage/time.png"
#define ReturnButton_BackGround ":/myImage/myImage/return.png"
#define BUTTON_WIDTH 150
#define BUTTON_HEIGHT 75
#define err(Msg) (std::cout << "[" << __LINE__ << "]" << Msg << " err" << std::endl);

#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<utility>
#include<QString>

#endif // CONFIG_H
