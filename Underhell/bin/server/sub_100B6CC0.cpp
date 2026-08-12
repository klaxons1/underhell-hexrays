int __thiscall sub_100B6CC0(int this, float a2, float a3, float a4)
{
  int v5; // ecx
  int result; // eax

  *(float *)(this + 3704) = a2;
  *(float *)(this + 3696) = a3;
  *(float *)(this + 3700) = a4;
  *(_DWORD *)(this + 3644) = -1;
  *(_DWORD *)(this + 3648) = -1;
  *(_DWORD *)(this + 3652) = -1;
  *(_DWORD *)(this + 3656) = -1;
  v5 = *(_DWORD *)(this + 252);
  *(_BYTE *)(this + 3695) = 0;
  result = dword_106B31C8;
  *(float *)(this + 3688) = *(float *)(dword_106B31C8 + 12);
  *(_WORD *)(this + 3692) = 0;
  *(_BYTE *)(this + 3694) = 0;
  *(float *)(this + 3748) = 0.0;
  *(_BYTE *)(this + 3732) = 1;
  if ( (v5 & 0x800) != 0 )
    result = sub_100DAE60(this);
  *(float *)(this + 3620) = *(float *)(this + 580);
  *(float *)(this + 3624) = *(float *)(this + 584);
  *(float *)(this + 3628) = *(float *)(this + 588);
  *(float *)(this + 3720) = *(float *)(this + 3620);
  *(float *)(this + 3724) = *(float *)(this + 3624);
  *(float *)(this + 3728) = *(float *)(this + 3628);
  *(float *)(this + 3708) = *(float *)(this + 3720);
  *(float *)(this + 3712) = *(float *)(this + 3724);
  *(float *)(this + 3716) = *(float *)(this + 3728);
  *(_DWORD *)(this + 3776) = 0;
  *(_BYTE *)(this + 3733) = 1;
  *(float *)(this + 3736) = 1.0e10;
  *(float *)(this + 3740) = 0.0;
  return result;
}
