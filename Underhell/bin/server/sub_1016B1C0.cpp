unsigned int __cdecl sub_1016B1C0(_DWORD *a1, _DWORD *a2)
{
  unsigned int result; // eax
  int v3; // esi
  float v4[3]; // [esp+8h] [ebp-24h] BYREF
  float v5[3]; // [esp+14h] [ebp-18h] BYREF
  float v6[3]; // [esp+20h] [ebp-Ch] BYREF

  result = a1[78];
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (a1[78] & 0xFFF) + 2] != result) )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (a1[78] & 0xFFF) + 1];
  if ( v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v6[0] = *(float *)(v3 + 580);
      v6[1] = *(float *)(v3 + 584);
      v6[2] = *(float *)(v3 + 588);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v5[0] = *(float *)(v3 + 704);
      v5[1] = *(float *)(v3 + 708);
      v5[2] = *(float *)(v3 + 712);
      if ( (*(_DWORD *)(v3 + 252) & 0x1000) != 0 )
        sub_100DAFD0(v3);
      v4[0] = *(float *)(v3 + 476);
      v4[1] = *(float *)(v3 + 480);
      v4[2] = *(float *)(v3 + 484);
      sub_1016ADF0(a1, v3);
      sub_1016B0D0(a2, (unsigned int *)v3);
      *(float *)(v3 + 580) = 3.4028235e38;
      *(float *)(v3 + 584) = 3.4028235e38;
      *(float *)(v3 + 588) = 3.4028235e38;
      *(float *)(v3 + 704) = 3.4028235e38;
      *(float *)(v3 + 708) = 3.4028235e38;
      *(float *)(v3 + 712) = 3.4028235e38;
      *(float *)(v3 + 476) = 3.4028235e38;
      *(float *)(v3 + 480) = 3.4028235e38;
      *(float *)(v3 + 484) = 3.4028235e38;
      sub_100E0D20(v3, v6);
      sub_100E0EA0(v3, v5);
      sub_100DD660(v3, v4);
      result = sub_100D8260(a1);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
