int __thiscall sub_101E6760(_DWORD *this, float a2, float a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  double v7; // st7

  v4 = 0;
  if ( (int)this[29] <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = this[26];
    v6 = *(_DWORD *)(v5 + 4 * v4);
    if ( v6 )
    {
      v7 = sub_10103A90((float *)*(_DWORD *)(v5 + 4 * v4));
      if ( a3 >= v7 && v7 >= a2 )
        break;
    }
    if ( ++v4 >= this[29] )
      return 0;
  }
  return v6;
}
