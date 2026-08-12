bool __stdcall sub_10285B80(int a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  bool v4; // bl

  if ( !a1 )
    return 0;
  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"CanBeDefaultButton");
  else
    v3 = 0;
  v4 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_1047CA70 + 184))(dword_1047CA70, a1, v3) )
    v4 = sub_1022A800(v3, "result", 0) == 1;
  sub_1022AF00(v3);
  return v4;
}
