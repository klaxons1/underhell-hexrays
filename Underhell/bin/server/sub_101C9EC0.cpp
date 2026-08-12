int __thiscall sub_101C9EC0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // esi

  v2 = this[200];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = this[201];
  if ( v5 == -1 || off_1061BE18[4 * (this[201] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (this[201] & 0xFFF) + 1];
  if ( v4 )
  {
    if ( !v6 )
      return sub_100E20F0(this);
    sub_101DAB00(v4, v6);
  }
  if ( v6 )
    sub_100EBE30(v6, this[204]);
  return sub_100E20F0(this);
}
