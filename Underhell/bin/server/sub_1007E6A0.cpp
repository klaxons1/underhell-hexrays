int __thiscall sub_1007E6A0(_DWORD *this, int a2)
{
  int v2; // esi

  v2 = this[1];
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  sub_100A6560(a2, v2 + 580);
  return a2;
}
