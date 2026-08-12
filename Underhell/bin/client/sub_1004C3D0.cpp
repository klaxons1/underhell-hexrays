char *__cdecl sub_1004C3D0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x5E0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *v3 = &C_EnvProjectedTexture::`vftable';
  v3[1] = &C_EnvProjectedTexture::`vftable';
  v3[2] = &C_EnvProjectedTexture::`vftable';
  v3[3] = &C_EnvProjectedTexture::`vftable';
  v3[299] = -1;
  *((_WORD *)v3 + 596) = -1;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return (char *)(v3 + 2);
}
