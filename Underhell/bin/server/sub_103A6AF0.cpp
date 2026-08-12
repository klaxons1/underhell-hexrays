void __thiscall sub_103A6AF0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx

  v2 = this[979];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        this[979] = -1;
        v6 = this[980];
        if ( v6 == -1 || off_1061BE18[4 * (this[980] & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (this[980] & 0xFFF) + 1];
        sub_1025FAC0(v7);
        this[980] = -1;
      }
    }
  }
}
