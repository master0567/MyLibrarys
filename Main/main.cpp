#include"main.h"

#include"boost\filesystem.hpp"
#include<iostream>

int main(int argv,char** argc){

	try{
		pro::Dir dir;
		dir = pro::Dir();
		//dir.cd("..");
		std::cout<<dir.pwd()<<std::endl;
		std::cout<<dir.getFileName()<<std::endl;
		std::cout<<dir.pwd()<<std::endl;
		std::cout<<dir.getRemoveFileName()<<std::endl;
		std::cout<<dir.pwd()<<std::endl;
		vector<string> names;
		names=dir.getDirectoryFileNames();
		std::cout<<names.size()<<std::endl;
		for(unsigned int i=0;i<names.size();i++){
			//if(dir.isDirectory(names[i])) continue;
			std::cout<<names[i] << " : " << std::flush;
			std::cout<<dir.getSize(names[i])<<"Byte"<<" : "<<std::flush;
			std::cout<<dir.getLastWriteTime(names[i])<<std::endl;
		}
	}catch(const pro::DirException& e){
		e.showError();
	}
}