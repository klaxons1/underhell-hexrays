int __cdecl sub_1013D530(
        float *a1,
        float *a2,
        int a3,
        char ArgList,
        int a5,
        char a6,
        float a7,
        char a8,
        char a9,
        int a10)
{
  int v10; // eax

  v10 = 1064;
  if ( !a6 )
    v10 = 1065;
  if ( a8 )
    v10 |= 0x2000u;
  if ( a9 )
    v10 |= 0x40u;
  return sub_1013D350(a1, a2, a3, ArgList, a5, v10, a7, 0, a10, 0, 0);
}
