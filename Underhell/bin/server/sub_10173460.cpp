_DWORD *__cdecl sub_10173460(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1256);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_10177830(v2);
    *v3 = &CItemFlashlight::`vftable';
    v3[280] = &CItemFlashlight::`vftable';
    v3[311] = -1;
    v3[308] = 0;
    v3[312] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
