void __thiscall sub_1003BDA0(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  _DWORD *i; // eax

  v4 = 0;
  if ( (int)this[8] > 0 )
  {
    v5 = this[5];
    for ( i = (_DWORD *)(v5 + 4); *i != a2; i += 3 )
    {
      if ( ++v4 >= this[8] )
        return;
    }
    if ( (*(_BYTE *)(v5 + 12 * v4) & 8) == 0 )
      --this[10];
    if ( this[8] - v4 - 1 > 0 )
      memcpy((void *)(12 * v4 + v5), (const void *)(12 * v4 + v5 + 12), 12 * (this[8] - v4 - 1));
    --this[8];
  }
}
