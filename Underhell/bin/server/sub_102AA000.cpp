bool __thiscall sub_102AA000(int this, float *a2, char a3)
{
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( *(_BYTE *)(this + 812) )
    return 1;
  if ( (*(_DWORD *)(this + 248) & 2) == 0 || !a3 )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *a2 - *(float *)(this + 580);
  v7 = a2[1] - *(float *)(this + 584);
  v8 = a2[2] - *(float *)(this + 588);
  off_10689714();
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10422220(this + 704, v5);
  return v6 * v5[0] + v5[1] * v7 + v5[2] * v8 < 0.0;
}
