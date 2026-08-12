unsigned int __stdcall sub_101F8D60(int a1, int a2, int a3, int a4)
{
  float *v5; // ecx
  int *v6; // ecx
  int v7; // ecx
  double v8; // st7
  unsigned int result; // eax
  int *v10; // ecx
  int v11; // ebx
  double v12; // st7
  _BYTE v13[48]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v14[48]; // [esp+3Ch] [ebp-30h] BYREF
  int v15; // [esp+80h] [ebp+14h]

  *(_BYTE *)a4 = *(_BYTE *)a4 & 0xFC | 1;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = (float *)sub_100F5E00((char *)a1);
  if ( *v5 != *(float *)(a1 + 580) || v5[1] != *(float *)(a1 + 584) || v5[2] != *(float *)(a1 + 588) )
    *(_BYTE *)a4 |= 2u;
  *(_DWORD *)(a4 + 8) = *(unsigned __int8 *)(a2 + 40);
  *(float *)(a4 + 12) = *(float *)(a2 + 12);
  *(float *)(a4 + 16) = *(float *)(a2 + 16);
  *(float *)(a4 + 20) = *(float *)(a2 + 20);
  if ( *(_DWORD *)(a1 + 308) != -1
    && (v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == *(_DWORD *)(a1 + 308) >> 12)
    && (v15 = *v6) != 0 )
  {
    sub_104227F0(a4 + 12);
    v7 = v15;
    if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v15);
      v7 = v15;
    }
    sub_10421E30(v7 + 500, v14, v13);
    sub_10421A90(v13, a4 + 24);
  }
  else
  {
    *(float *)(a4 + 24) = *(float *)(a4 + 12);
    *(float *)(a4 + 28) = *(float *)(a4 + 16);
    *(float *)(a4 + 32) = *(float *)(a4 + 20);
  }
  *(_DWORD *)(a4 + 36) = *(_DWORD *)(a2 + 36);
  if ( (*(_BYTE *)(a1 + 256) & 0x40) != 0 )
  {
    v8 = 0.0;
    *(float *)(a4 + 44) = 0.0;
    *(float *)(a4 + 48) = 0.0;
  }
  else
  {
    *(float *)(a4 + 44) = *(float *)(a2 + 24);
    *(float *)(a4 + 48) = *(float *)(a2 + 28);
    v8 = *(float *)(a2 + 32);
  }
  *(float *)(a4 + 52) = v8;
  *(float *)(a4 + 60) = *(float *)(a1 + 4132);
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a1 + 2296);
  *(float *)(a4 + 76) = *(float *)(a1 + 3248);
  *(float *)(a4 + 80) = *(float *)(a1 + 3252);
  *(float *)(a4 + 84) = *(float *)(a1 + 3256);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  *(float *)(a4 + 64) = *(float *)(a1 + 476);
  *(float *)(a4 + 68) = *(float *)(a1 + 480);
  *(float *)(a4 + 72) = *(float *)(a1 + 484);
  *(_DWORD *)(a4 + 4) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *(float *)(a4 + 152) = *(float *)(a1 + 580);
  *(float *)(a4 + 156) = *(float *)(a1 + 584);
  *(float *)(a4 + 160) = *(float *)(a1 + 588);
  result = *(_DWORD *)(a1 + 4268);
  if ( result != -1
    && (v10 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4268) & 0xFFF) + 1],
        result >>= 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 4268) & 0xFFF) + 2] == result)
    && *v10 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 4268) & 0xFFF) + 2] == result )
      v11 = *v10;
    else
      v11 = 0;
    result = *(_DWORD *)(v11 + 252) >> 11;
    if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
      result = sub_100DAE60(v11);
    *(float *)(a4 + 128) = *(float *)(v11 + 580);
    *(float *)(a4 + 132) = *(float *)(v11 + 584);
    v12 = *(float *)(v11 + 588);
  }
  else
  {
    *(float *)(a4 + 128) = *(float *)(a1 + 4272);
    *(float *)(a4 + 132) = *(float *)(a1 + 4276);
    v12 = *(float *)(a1 + 4280);
  }
  *(float *)(a4 + 136) = v12;
  *(float *)(a4 + 140) = *(float *)(a1 + 4284);
  *(float *)(a4 + 144) = *(float *)(a1 + 4288);
  *(float *)(a4 + 148) = *(float *)(a1 + 4292);
  return result;
}
