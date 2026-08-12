char __thiscall sub_1004C360(_DWORD *this, int a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // eax

  v2 = this[212];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[212] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (this[212] & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        v5 = off_1061BE18[4 * (this[212] & 0xFFF) + 2] == v4 ? *v3 : 0;
        if ( v5 != a2 )
          return 0;
      }
    }
  }
  this[212] = -1;
  return 1;
}
