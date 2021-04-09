#include<iostream>
#include<string>
#include<windows.h> 
using namespace std;
int main(){
	system("color 17");
	cout<<"欢迎来到LZY贪食蛇"<<endl;
	cout<<"输入地图代码开始游戏"<<endl;
	cout<<"地图1：小黑屋(1);地图2：游泳池(2);退出游戏(quit)"<<endl;
	string map;
	cin>>map;
	if(map=="1"){
		system("start maps/blackhouse.exe");
	}else if(map=="2"){
		system("start maps/pool.exe");
	}else if(map=="quit"){
		MessageBox(NULL,"退出游戏","提示",MB_OK);
		Sleep(1000);
		system("exit");
	}else{
		MessageBox(NULL,"没有此地图","提示",MB_OK);
		cout<<"输入地图代码开始游戏"<<endl;
		cin>>map;
		
	} 
	return 0;
}
