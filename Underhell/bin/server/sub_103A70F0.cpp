void __thiscall sub_103A70F0(int **this)
{
  int *v2; // eax
  int *v3; // ecx

  v2 = this[979];
  if ( v2 != (int *)-1 )
  {
    v3 = &off_1061BE18[4 * ((unsigned int)this[979] & 0xFFF) + 1];
    if ( v3[1] == (unsigned int)v2 >> 12 )
    {
      if ( *v3 )
        sub_103A6AF0(this);
    }
  }
  sub_1032C760(this);
}
