int __cdecl sub_101A8BD0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, float a11)
{
  char *v11; // eax
  int v12; // esi

  v11 = (char *)sub_10034900(0x7B0u);
  v12 = (int)v11;
  if ( !v11 )
    return 0;
  sub_1002F0F0(v11);
  *(_DWORD *)v12 = &C_AntlionGib::`vftable';
  *(_DWORD *)(v12 + 4) = &C_AntlionGib::`vftable';
  *(_DWORD *)(v12 + 8) = &C_AntlionGib::`vftable';
  *(_DWORD *)(v12 + 12) = &C_AntlionGib::`vftable';
  if ( !sub_10056770(
          (__int16 *)v12,
          a1,
          *(float *)&a2,
          a3,
          a4,
          *(float *)&a5,
          *(float *)&a6,
          *(float *)&a7,
          a8,
          a9,
          a10,
          a11) )
    return 0;
  sub_101A8B20(&dword_1044CB30, v12);
  return v12;
}
