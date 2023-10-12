#pragma once

#include <string>

/*
* CLASS    : SimpleProtocol
* PURPOSE  : This class stores information about the 
*			 file being transferred for the protocol  
*/
static struct SimpleProtocol
{
	std::string filename;
	long filesize = -1;
	int index = -1;
	long length = -1;
	char* checksum;
};

