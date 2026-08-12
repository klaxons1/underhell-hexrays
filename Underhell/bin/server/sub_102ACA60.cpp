char __thiscall sub_102ACA60(_DWORD *this, char a2)
{
  int v2; // eax

  v2 = this[228];
  if ( !v2 )
    return 0;
  if ( (this[62] & 0x800) == 0 && !this[240] )
    return sub_10186050((int)this, a2);
  if ( v2 > 0 && this[227] >= v2 || this[257] && !this[256] )
    return 0;
  return (dword_1069042C & 1) != 1;
}
