#include"main.h"

#include"boost\filesystem.hpp"
#include<iostream>

int main(int argv,char** argc){
	boost::filesystem::path path;
	std::cout<<path.c_str()<<std::endl;

	pro::Dir dir;
	dir = pro::Dir();
	std::cout<<dir.pwd()<<std::endl;

	pro::Timer timer;
	timer.start();
	timer.getNow();
}