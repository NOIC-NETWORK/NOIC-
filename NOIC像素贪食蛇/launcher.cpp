#include<iostream>
#include<string>
#include<windows.h> 
using namespace std;
int main(){
	system("color 17");
	cout<<"��ӭ����LZY̰ʳ��"<<endl;
	cout<<"�����ͼ���뿪ʼ��Ϸ"<<endl;
	cout<<"��ͼ1��С����(1);��ͼ2����Ӿ��(2);�˳���Ϸ(quit)"<<endl;
	string map;
	cin>>map;
	if(map=="1"){
		system("start maps/blackhouse.exe");
	}else if(map=="2"){
		system("start maps/pool.exe");
	}else if(map=="quit"){
		MessageBox(NULL,"�˳���Ϸ","��ʾ",MB_OK);
		Sleep(1000);
		system("exit");
	}else{
		MessageBox(NULL,"û�д˵�ͼ","��ʾ",MB_OK);
		cout<<"�����ͼ���뿪ʼ��Ϸ"<<endl;
		cin>>map;
		
	} 
	return 0;
}
