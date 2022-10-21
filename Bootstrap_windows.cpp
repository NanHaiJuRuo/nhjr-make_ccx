#include <windows.h>
#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;
string ExePath() {
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    string::size_type pos = string( buffer ).find_last_of( "\\/" );
    string ret = string( buffer ).substr( 0, pos);
    return ret.substr( 0, ret.find_last_of( "\\/" ));
}

int main() {
    string file = "python "+ ExePath() +"/make_ccx.py";
    char str[file.length()];
    strcpy(str,file.c_str());
    system(str);
}