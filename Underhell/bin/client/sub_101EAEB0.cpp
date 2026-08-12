unsigned __int16 *__thiscall sub_101EAEB0(_WORD *this, int a2, unsigned __int16 *a3, _BYTE *a4)
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
      if ( (dword_10458E0C & 1) == 0 )
      {
        dword_10458E0C |= 1u;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      v8 = *((_DWORD *)this + 1);
      v6 = *(_WORD *)(v8 + 12 * v6);
      result = (unsigned __int16 *)(v7 + v8);
    }
    else
    {
      *a4 = 0;
      if ( (dword_10458E0C & 1) == 0 )
      {
        dword_10458E0C |= 1u;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      result = (unsigned __int16 *)(v7 + *((_DWORD *)this + 1));
      v6 = result[1];
    }
  }
  return result;
}
