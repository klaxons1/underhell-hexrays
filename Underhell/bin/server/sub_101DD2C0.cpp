int __thiscall sub_101DD2C0(int this)
{
  float v2; // ecx
  double v3; // st7
  int result; // eax
  float v5[8]; // [esp+4h] [ebp-20h] BYREF

  if ( *(_DWORD *)(this + 212) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 212);
    v5[0] = *(float *)(this + 580);
    v5[1] = *(float *)(this + 584);
    v5[7] = v2;
    v3 = *(float *)(this + 588);
    v5[6] = 0.0;
    v5[2] = v3;
    v5[3] = 0.0;
    v5[4] = 0.0;
    v5[5] = 0.0;
    sub_101B9CA0(v5);
    return sub_1025FAC0(this);
  }
  return result;
}
