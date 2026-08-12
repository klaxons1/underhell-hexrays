void __thiscall sub_10246370(_DWORD *this, int a2, __int16 a3, __int16 a4)
{
  int v5; // ebx
  int i; // edi
  int v7; // eax

  v5 = 0;
  if ( (int)this[61] > 0 )
  {
    for ( i = 0; ; i += 68 )
    {
      if ( sub_10237C80((_DWORD *)(i + this[58])) == a2 )
      {
        v7 = i + this[58];
        if ( *(_WORD *)(v7 + 6) == a3 && *(_WORD *)(v7 + 4) != a4 )
          break;
      }
      if ( ++v5 >= this[61] )
        return;
    }
    if ( this[61] - v5 - 1 > 0 )
      memcpy((void *)(this[58] + 68 * v5), (const void *)(this[58] + 68 * v5 + 68), 68 * (this[61] - v5 - 1));
    --this[61];
  }
}
