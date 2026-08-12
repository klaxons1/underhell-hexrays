bool __thiscall sub_100B32C0(_DWORD *this, int a2, float a3, float *a4)
{
  int v5; // esi

  v5 = this[1];
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  return sub_100B2A60(this, v5 + 580, a2, a3, 240.0, 5, a4);
}
