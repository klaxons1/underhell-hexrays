BOOL __thiscall sub_102FB470(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  double v4; // st7
  double v5; // st6
  double v6; // st5

  if ( !sub_10050FC0(this) )
    return 0;
  v2 = sub_10050FC0(this);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  v3 = this[1];
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v4 = *(float *)(v3 + 580) - *(float *)(v2 + 580);
  v5 = *(float *)(v3 + 584) - *(float *)(v2 + 584);
  v6 = *(float *)(v3 + 588) - *(float *)(v2 + 588);
  return v6 * v6 + v5 * v5 + v4 * v4 > 122500.0;
}
