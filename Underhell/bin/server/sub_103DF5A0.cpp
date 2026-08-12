void __thiscall sub_103DF5A0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax

  sub_100E20F0(this);
  v2 = this[452];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[452] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (this[452] & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (this[452] & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        this[452] = -1;
      }
    }
  }
}
