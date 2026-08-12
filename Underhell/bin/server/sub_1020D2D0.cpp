char __thiscall sub_1020D2D0(void *this, float *a2, float *a3)
{
  int v3; // esi

  v3 = sub_1020D1E0(this);
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  *a2 = *(float *)(v3 + 580);
  a2[1] = *(float *)(v3 + 584);
  a2[2] = *(float *)(v3 + 588);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  *a3 = *(float *)(v3 + 704);
  a3[1] = *(float *)(v3 + 708);
  a3[2] = *(float *)(v3 + 712);
  return 1;
}
