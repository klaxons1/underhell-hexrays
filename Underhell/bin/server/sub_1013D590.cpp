int __cdecl sub_1013D590(
        float *a1,
        float *a2,
        int a3,
        char ArgList,
        int a5,
        char a6,
        _DWORD *a7,
        int a8,
        float a9,
        char a10,
        char a11,
        int a12)
{
  int v12; // eax

  v12 = 1064;
  if ( !a6 )
    v12 = 1065;
  if ( a10 )
    v12 |= 0x2000u;
  if ( a11 )
    v12 |= 0x40u;
  return sub_1013D350(a1, a2, a3, ArgList, a5, v12, a9, 0, a12, a7, a8);
}
