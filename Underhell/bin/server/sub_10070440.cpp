bool __thiscall sub_10070440(int this, int a2)
{
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  if ( 360.0 == *(float *)(this + 916) )
    return 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = *(float *)(a2 + 580) - *(float *)(this + 580);
  v5 = *(float *)(a2 + 584) - *(float *)(this + 584);
  v6 = *(float *)(a2 + 588) - *(float *)(this + 588);
  off_10689714();
  return *(float *)(this + 924) * v5 + *(float *)(this + 920) * v4 + *(float *)(this + 928) * v6 > *(float *)(this + 916);
}
