unsigned int __cdecl sub_100E2B30(int a1, int *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned int result; // eax
  int v6; // esi
  _DWORD v7[7]; // [esp+8h] [ebp-1Ch] BYREF

  v2 = *(_DWORD *)(a1 + 252) >> 11;
  v7[0] = a1;
  if ( (v2 & 1) != 0 )
    sub_100DAE60(a1);
  v3 = *(_DWORD *)(a1 + 252);
  *(float *)&v7[1] = *(float *)(a1 + 580);
  *(float *)&v7[2] = *(float *)(a1 + 584);
  *(float *)&v7[3] = *(float *)(a1 + 588);
  if ( (v3 & 0x800) != 0 )
    sub_100DAE60(a1);
  v4 = a2[3];
  *(float *)&v7[4] = *(float *)(a1 + 704);
  *(float *)&v7[5] = *(float *)(a1 + 708);
  *(float *)&v7[6] = *(float *)(a1 + 712);
  result = sub_100DE100(a2, v4, v7);
  if ( *(_DWORD *)(a1 + 312) == -1
    || (result = (unsigned int)&off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != *(_DWORD *)(a1 + 312) >> 12) )
  {
    v6 = 0;
  }
  else
  {
    v6 = *(_DWORD *)result;
  }
  while ( v6 )
  {
    sub_100E2B30(v6, a2);
    result = *(_DWORD *)(v6 + 316);
    if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(v6 + 316) & 0xFFF) + 2] != result) )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(v6 + 316) & 0xFFF) + 1];
  }
  return result;
}
