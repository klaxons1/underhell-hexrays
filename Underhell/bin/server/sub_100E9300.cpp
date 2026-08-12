char __thiscall sub_100E9300(_DWORD *this)
{
  int v2; // edx
  int v3; // eax
  int *i; // ecx

  if ( (int)this[47] > 0 )
    return 1;
  v2 = this[39];
  v3 = 0;
  if ( v2 > 0 )
  {
    for ( i = (int *)(this[36] + 8); *i <= 0; i += 4 )
    {
      if ( ++v3 >= v2 )
        return 0;
    }
    return 1;
  }
  return 0;
}
