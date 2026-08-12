int __thiscall sub_1004BF30(_DWORD *this)
{
  int v1; // esi

  v1 = this[1];
  if ( (*(_DWORD *)(v1 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  return v1 + 580;
}
