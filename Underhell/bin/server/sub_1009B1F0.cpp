int __thiscall sub_1009B1F0(_WORD *this, int a2, _WORD *a3, _BYTE *a4)
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
    v7 = 60 * v5;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 8) )
    {
      *a4 = 1;
      if ( (dword_10693D0C & 1) == 0 )
      {
        dword_10693D0C |= 1u;
        word_10693D04 = -1;
        word_10693D06 = -1;
        word_10693D08 = -1;
        word_10693D0A = 1;
      }
      v8 = *((_DWORD *)this + 1);
      v5 = *(_WORD *)(v8 + 60 * v5);
      result = v7 + v8;
    }
    else
    {
      *a4 = 0;
      if ( (dword_10693D0C & 1) == 0 )
      {
        dword_10693D0C |= 1u;
        word_10693D04 = -1;
        word_10693D06 = -1;
        word_10693D08 = -1;
        word_10693D0A = 1;
      }
      result = v7 + *((_DWORD *)this + 1);
      v5 = *(_WORD *)(result + 2);
    }
  }
  return result;
}
