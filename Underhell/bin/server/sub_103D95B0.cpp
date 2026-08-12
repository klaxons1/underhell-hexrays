int __userpurge sub_103D95B0@<eax>(int a1@<ecx>, double a2@<st0>, int a3)
{
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10[20]; // [esp+4h] [ebp-50h] BYREF

  if ( !*(_BYTE *)(a1 + 3645) )
    return 0;
  v5 = *(_DWORD *)(a3 + 40);
  if ( v5 == -1
    || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v5 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1] )
  {
    return 0;
  }
  sub_1001E4E0(v10, a3);
  v6 = *(_DWORD *)(a3 + 64);
  if ( v6
    || ((v7 = *(_DWORD *)(a3 + 40), v7 == -1) || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v7 >> 12
      ? (v8 = 0)
      : (v8 = off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1]),
        v8 != a1) )
  {
    if ( (v6 & 0x48) == 0 )
      return 0;
    if ( (v6 & 0x40) != 0 )
    {
      a2 = (double)*(int *)(a1 + 220);
      if ( a2 > *(float *)(a3 + 52) )
        return 0;
    }
    v9 = sub_100232D0((_DWORD *)a3);
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1004BCD0((float *)(a1 + 580), (float *)(v9 + 580));
    if ( a2 > 180.0 )
      return 0;
    if ( (*(_BYTE *)(a3 + 64) & 8) != 0 )
      *(float *)&v10[13] = (float)*(int *)(a1 + 220);
  }
  return sub_10035940((int *)a1, a3, (int)v10);
}
