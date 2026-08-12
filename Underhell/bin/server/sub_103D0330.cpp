int __thiscall sub_103D0330(_DWORD *this, float a2, float a3, float a4)
{
  unsigned int v4; // eax
  int v5; // esi

  v4 = this[7];
  if ( v4 == -1 || off_1061BE18[4 * (this[7] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[7] & 0xFFF) + 1];
  sub_103D0190(this - 958, a2, a3, a4);
  return v5;
}
