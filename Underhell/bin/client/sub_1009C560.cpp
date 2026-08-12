_DWORD *__cdecl sub_1009C560(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  void (__thiscall *v4)(_DWORD *, int, int); // eax

  v2 = sub_10034900(0x4B0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *v3 = &C_EnvDetailController::`vftable';
  v3[1] = &C_EnvDetailController::`vftable';
  v3[2] = &C_EnvDetailController::`vftable';
  v3[3] = &C_EnvDetailController::`vftable';
  v4 = *(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160);
  dword_1042D514 = (int)v3;
  v4(v3, a1, a2);
  return v3 + 2;
}
