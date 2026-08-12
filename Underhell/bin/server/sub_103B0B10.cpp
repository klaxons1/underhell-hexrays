char __thiscall sub_103B0B10(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = this[652];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[652] & 0xFFF) + 1];
    v2 >>= 12;
    if ( v3[1] == v2 )
    {
      if ( *v3 )
      {
        LOBYTE(v2) = sub_100697A0(this, 2, 1);
        if ( (_BYTE)v2
          || (LOBYTE(v2) = sub_100697A0(this, 10, 1), (_BYTE)v2)
          || (LOBYTE(v2) = sub_100697A0(this, 16, 1), (_BYTE)v2)
          || (LOBYTE(v2) = sub_100697A0(this, 97, 1), (_BYTE)v2) )
        {
          this[974] = "null";
          this[652] = -1;
        }
      }
    }
  }
  return v2;
}
