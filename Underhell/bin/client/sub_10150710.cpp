_DWORD *__cdecl sub_10150710(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100DDA40(16);
  if ( !v2 )
    return 0;
  v2[1] = &IClientNetworkable::`vftable';
  v3 = v2 + 1;
  *v2 = &C_BaseTempEntity::`vftable';
  v2[1] = &C_BaseTempEntity::`vftable';
  v2[2] = dword_1043CC68;
  dword_1043CC68 = (int)v2;
  v2[3] = 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v2 + 44))(v2, a1, a2);
  return v3;
}
