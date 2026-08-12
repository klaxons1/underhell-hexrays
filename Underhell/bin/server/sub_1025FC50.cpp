int sub_1025FC50()
{
  _DWORD *v1; // eax
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
  {
    Warning("UTIL_GetListenServerHost() called from a dedicated server or single-player game.\n");
    return 0;
  }
  else if ( *(int *)(dword_106B31C8 + 20) >= 1
         && (v1 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1)) != 0
         && (*v1 & 2) == 0
         && (v2 = v1[3]) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  }
  else
  {
    return 0;
  }
}
