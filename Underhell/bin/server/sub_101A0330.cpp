char __thiscall sub_101A0330(float *this, int a2)
{
  float v4[3]; // [esp+8h] [ebp-18h] BYREF
  float v5[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v5[0] = *this - *(float *)(a2 + 580);
  v5[1] = this[1] - *(float *)(a2 + 584);
  v5[2] = this[2] - *(float *)(a2 + 588);
  sub_10422540(v5, v4);
  sub_100E11A0(a2, v4);
  sub_101E1CC0(v4, 0);
  return 1;
}
