void __thiscall sub_1012D480(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *i; // edx

  if ( (*(_BYTE *)(a2 + 255) & 1) != 0 )
  {
    v2 = this[4];
    v3 = 0;
    if ( v2 > 0 )
    {
      for ( i = (_DWORD *)this[1]; *i != a2; ++i )
      {
        if ( ++v3 >= v2 )
          return;
      }
      if ( v3 >= 0 && v3 < v2 )
      {
        *(_DWORD *)(this[1] + 4 * v3) = *(_DWORD *)(this[1] + 4 * v2 - 4);
        --this[4];
      }
    }
  }
}
