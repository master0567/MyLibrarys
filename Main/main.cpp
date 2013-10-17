#include"main.h"

#include"boost\filesystem.hpp"
#include<iostream>

int main(int argv,char** argc){

	try{
		pro::Dir dir;
		dir = pro::Dir();
		dir.cd("main");
		std::cout<<dir.pwd()<<std::endl;
	}catch(const pro::DirException& e){
		e.showError();
	}
}