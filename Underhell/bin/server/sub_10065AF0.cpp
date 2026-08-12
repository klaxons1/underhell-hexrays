int __thiscall sub_10065AF0(_WORD *this, int a2, _WORD *a3, _BYTE *a4)
{
  __int16 v5; // di
  int result; // eax
  int v7; // esi
  int v8; // eax

  v5 = this[8];
  result = -1;
  *a3 = -1;
  *a4 = 0;
  while ( v5 != -1 )
  {
    *a3 = v5;
    v7 = 80 * v5;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 8) )
    {
      *a4 = 1;
      if ( (dword_10692DD0 & 1) == 0 )
      {
        dword_10692DD0 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      v8 = *((_DWORD *)this + 1);
      v5 = *(_WORD *)(v8 + 80 * v5);
      result = v7 + v8;
    }
    else
    {
      *a4 = 0;
      if ( (dword_10692DD0 & 1) == 0 )
      {
        dword_10692DD0 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      result = v7 + *((_DWORD *)this + 1);
      v5 = *(_WORD *)(result + 2);
    }
  }
  return result;
}
