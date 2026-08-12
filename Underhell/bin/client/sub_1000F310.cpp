char __thiscall sub_1000F310(int *this)
{
  int v2; // edx
  int v3; // eax
  int *i; // ecx

  if ( this[31] > 0 )
    return 1;
  v2 = this[52];
  v3 = 0;
  if ( v2 > 0 )
  {
    for ( i = (int *)(this[49] + 20); *i <= 0; i += 8 )
    {
      if ( ++v3 >= v2 )
        return 0;
    }
    return 1;
  }
  return 0;
}
