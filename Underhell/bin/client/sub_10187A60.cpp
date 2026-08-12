void __thiscall sub_10187A60(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  _DWORD *i; // eax

  v3 = this[1444];
  v4 = 0;
  if ( v3 > 0 )
  {
    for ( i = (_DWORD *)this[1441]; *i != a2; i += 24 )
    {
      if ( ++v4 >= v3 )
        return;
    }
    if ( v3 - v4 - 1 > 0 )
      memcpy((void *)(this[1441] + 96 * v4), (const void *)(this[1441] + 96 * v4 + 96), 96 * (v3 - v4 - 1));
    --this[1444];
  }
}
