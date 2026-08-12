unsigned int __cdecl sub_1016AF10(int a1)
{
  unsigned int result; // eax
  float v2; // edx
  float v3; // eax
  int v4; // ecx
  float v5; // eax
  float v6; // ecx
  int v7; // edx
  float v8; // ecx
  float v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  float v12[3]; // [esp+4h] [ebp-24h] BYREF
  float v13[3]; // [esp+10h] [ebp-18h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-Ch] BYREF

  result = *(_DWORD *)(a1 + 308);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1] )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v2 = *(float *)(a1 + 584);
        v3 = *(float *)(a1 + 588);
        v14[0] = *(float *)(a1 + 580);
        v4 = *(_DWORD *)(a1 + 252) >> 11;
        v14[1] = v2;
        v14[2] = v3;
        if ( (v4 & 1) != 0 )
          sub_100DAE60(a1);
        v5 = *(float *)(a1 + 708);
        v6 = *(float *)(a1 + 712);
        v13[0] = *(float *)(a1 + 704);
        v7 = *(_DWORD *)(a1 + 252) >> 12;
        v13[1] = v5;
        v13[2] = v6;
        if ( (v7 & 1) != 0 )
          sub_100DAFD0(a1);
        v8 = *(float *)(a1 + 480);
        v9 = *(float *)(a1 + 484);
        v12[0] = *(float *)(a1 + 476);
        v10 = *(_DWORD *)(a1 + 308);
        v12[1] = v8;
        v12[2] = v9;
        if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = (_DWORD *)off_1061BE18[4 * (v10 & 0xFFF) + 1];
        sub_1016ADF0(v11, a1);
        sub_100E10C0(a1, v14);
        sub_100E11A0(a1, v13);
        sub_100DD790((float *)a1, v12);
        return sub_101C6CC0(a1);
      }
    }
  }
  return result;
}
