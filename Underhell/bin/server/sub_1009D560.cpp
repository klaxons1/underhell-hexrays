__int16 __thiscall sub_1009D560(_WORD *this, int a2)
{
  __int16 v3; // bx
  int v4; // esi

  v3 = this[8];
  if ( v3 == -1 )
    return -1;
  do
  {
    v4 = 16 * v3;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, *((_DWORD *)this + 1) + v4 + 8) )
    {
      if ( (dword_10693D18 & 1) == 0 )
      {
        dword_10693D18 |= 1u;
        word_10693D10 = -1;
        word_10693D12 = -1;
        word_10693D14 = -1;
        word_10693D16 = 1;
      }
      v3 = *(_WORD *)(*((_DWORD *)this + 1) + 16 * v3);
    }
    else
    {
      if ( !(*(unsigned __int8 (__cdecl **)(int, int))this)(*((_DWORD *)this + 1) + v4 + 8, a2) )
        return v3;
      if ( (dword_10693D18 & 1) == 0 )
      {
        dword_10693D18 |= 1u;
        word_10693D10 = -1;
        word_10693D12 = -1;
        word_10693D14 = -1;
        word_10693D16 = 1;
      }
      v3 = *(_WORD *)(v4 + *((_DWORD *)this + 1) + 2);
    }
  }
  while ( v3 != -1 );
  return v3;
}
