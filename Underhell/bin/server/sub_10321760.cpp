char __thiscall sub_10321760(int *this, int a2, int a3)
{
  int v5; // eax
  int v6; // esi
  const char *v7; // eax

  if ( a2 == this[3] )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    return sub_10265590(this, a2, a3);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v6 = v5;
  if ( !v5 )
    return sub_10265590(this, a2, a3);
  v7 = *(const char **)(v5 + 92);
  if ( !v7 )
    v7 = String;
  if ( v7 == "func_brush" || !_stricmp(v7, "func_brush") )
  {
    if ( *(_BYTE *)(v6 + 816) )
      return *(_DWORD *)(v6 + 812) == *(_DWORD *)(this[4] + 92);
    if ( *(_DWORD *)(v6 + 812) != *(_DWORD *)(this[4] + 92) )
      return 0;
  }
  return (sub_100E8AC0((_DWORD *)v6)
       || !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24)))
      && sub_10265590(this, a2, a3);
}
