int __cdecl sub_100DC0B0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // eax

  if ( !a2 || !(unsigned __int8)sub_102064A0(a2 + 136) )
    return 0;
  v4 = sub_102064B0(a2 + 136);
  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  a4[v4 >> 5] |= 1 << (v4 & 0x1F);
  return a3;
}
