unsigned __int16 *__thiscall sub_1041F460(_WORD *this, int a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 *result; // eax
  unsigned __int16 v6; // di
  int v7; // esi
  int v8; // eax

  result = a3;
  v6 = this[8];
  *a3 = -1;
  *a4 = 0;
  while ( v6 != 0xFFFF )
  {
    *a3 = v6;
    v7 = 12 * v6;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 8) )
    {
      *a4 = 1;
      if ( (dword_106F1874 & 1) == 0 )
      {
        dword_106F1874 |= 1u;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v8 = *((_DWORD *)this + 1);
      v6 = *(_WORD *)(v8 + 12 * v6);
      result = (unsigned __int16 *)(v7 + v8);
    }
    else
    {
      *a4 = 0;
      if ( (dword_106F1874 & 1) == 0 )
      {
        dword_106F1874 |= 1u;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      result = (unsigned __int16 *)(v7 + *((_DWORD *)this + 1));
      v6 = result[1];
    }
  }
  return result;
}
