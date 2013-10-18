#include"main.h"

#include"boost\filesystem.hpp"
#include<iostream>

int main(int argv,char** argc){

	try{
		pro::Dir dir;
		dir = pro::Dir();
		std::cout<<dir.pwd()<<std::endl;
		vector<string> names;
		names=dir.getDirectoryFileNames();
		for(unsig i=0;i<names.size();i++){
			if(dir.isDirectory(names[i])) continue;
			std::cout<<pro::Dir::getFileName(names[i])<<" : "<<std::flush;
			std::cout<<dir.getSize(names[i])<<"Byte"<<" : "<<std::flush;
			std::cout<<dir.getLastWriteTime(names[i])<<std::endl;
		}
	}catch(const pro::DirException& e){
		e.showError();
	}
}