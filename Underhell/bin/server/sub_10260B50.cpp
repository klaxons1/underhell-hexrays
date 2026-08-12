char __cdecl sub_10260B50(int a1, int a2)
{
  float v3[3]; // [esp+8h] [ebp-18h] BYREF
  float v4[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !a1 || !a2 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4[0] = *(float *)(a2 + 580) - *(float *)(a1 + 580);
  v4[1] = *(float *)(a2 + 584) - *(float *)(a1 + 584);
  v4[2] = *(float *)(a2 + 588) - *(float *)(a1 + 588);
  off_10689714();
  sub_10422540(v4, v3);
  sub_100E11A0(a1, v3);
  sub_100E0EA0(a1, v3);
  return 1;
}
