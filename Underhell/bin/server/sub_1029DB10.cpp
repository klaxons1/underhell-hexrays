BOOL __thiscall sub_1029DB10(int *this)
{
  int v2; // esi
  int v3; // esi
  float v5; // [esp+0h] [ebp-24h]
  float v6; // [esp+Ch] [ebp-18h]
  float v7; // [esp+10h] [ebp-14h]

  v2 = this[1];
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  v6 = *(float *)(v2 + 580);
  v7 = *(float *)(v2 + 584);
  if ( this[6] == -1 || off_1061BE18[4 * (this[6] & 0xFFF) + 2] != (unsigned int)this[6] >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[6] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v5 = (*(float *)(v3 + 580) - v6) * (*(float *)(v3 + 580) - v6)
     + (*(float *)(v3 + 584) - v7) * (*(float *)(v3 + 584) - v7);
  return off_10689708(v5) <= 12.0;
}
