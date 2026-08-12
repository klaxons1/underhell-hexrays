void __thiscall sub_103FB690(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = this[373];
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        if ( v2[1] == v3 )
          v4 = *v2;
        else
          v4 = 0;
        sub_102428B0(v4, 0.001, 0.0);
      }
    }
  }
}
