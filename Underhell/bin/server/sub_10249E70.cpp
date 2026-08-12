void __thiscall sub_10249E70(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  _DWORD *i; // eax

  v3 = this[203];
  v4 = 0;
  if ( v3 > 0 )
  {
    for ( i = (_DWORD *)this[200]; *i != a2; ++i )
    {
      if ( ++v4 >= v3 )
        return;
    }
    if ( v3 - v4 - 1 > 0 )
      memcpy((void *)(this[200] + 4 * v4), (const void *)(this[200] + 4 * v4 + 4), 4 * (v3 - v4 - 1));
    --this[203];
  }
}
