int __stdcall sub_101FBFB0(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // esi

  v1 = a1;
  if ( (a1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v2 = *(_DWORD *)(v1 + 12)) != 0
    && (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2)) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1612))(v3) )
  {
    return v3 + 4492;
  }
  else
  {
    return 0;
  }
}
