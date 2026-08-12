void __thiscall sub_102AA7E0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax

  v2 = this[2];
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
        this[2] = -1;
        v6 = this[3];
        if ( v6 == -1 || off_1061BE18[4 * (this[3] & 0xFFF) + 2] != v6 >> 12 )
        {
          sub_1025FAC0(0);
          this[3] = -1;
        }
        else
        {
          sub_1025FAC0(off_1061BE18[4 * (this[3] & 0xFFF) + 1]);
          this[3] = -1;
        }
      }
    }
  }
}
