// HelloLua.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#pragma comment (lib,"Lua.lib")

#include "lua.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	lua_State* lua_state = luaL_newstate(); 
	luaL_openlibs(lua_state);
	luaL_dofile(lua_state,"hellolua.lua");
	lua_close(lua_state);
	getchar();
	return 0;
}

