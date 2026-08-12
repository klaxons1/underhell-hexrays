bool __thiscall sub_102A8CB0(int *this)
{
  int v2; // esi
  int v3; // esi
  bool result; // al
  float v5; // [esp+4h] [ebp-1Ch]
  float v6; // [esp+14h] [ebp-Ch]
  float v7; // [esp+18h] [ebp-8h]
  float v8; // [esp+1Ch] [ebp-4h]

  v2 = this[1];
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  v8 = *(float *)(v2 + 588);
  v6 = *(float *)(v2 + 580);
  v7 = *(float *)(v2 + 584);
  if ( this[10] == -1 || off_1061BE18[4 * (this[10] & 0xFFF) + 2] != (unsigned int)this[10] >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[10] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  result = 1;
  if ( fabs(v8 - *(float *)(v3 + 588)) <= 64.0 )
  {
    v5 = (v6 - *(float *)(v3 + 580)) * (v6 - *(float *)(v3 + 580))
       + (v7 - *(float *)(v3 + 584)) * (v7 - *(float *)(v3 + 584));
    if ( off_10689708(v5) <= 16.0 )
      return 0;
  }
  return result;
}
