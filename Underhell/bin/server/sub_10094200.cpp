_BYTE *__thiscall sub_10094200(_BYTE *this, int a2, _BYTE *a3, _BYTE *a4)
{
  _BYTE *result; // eax
  char v6; // bl
  int v7; // esi
  int v8; // eax

  result = a3;
  v6 = this[16];
  *a3 = -1;
  *a4 = 0;
  while ( v6 != -1 )
  {
    *a3 = v6;
    v7 = 12 * v6;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 4) )
    {
      *a4 = 1;
      if ( (dword_10693990 & 1) == 0 )
      {
        dword_10693990 |= 1u;
        dword_1069398C = 0x1FFFFFF;
      }
      v8 = *((_DWORD *)this + 1);
      v6 = *(_BYTE *)(v8 + 12 * v6);
      result = (_BYTE *)(v7 + v8);
    }
    else
    {
      *a4 = 0;
      if ( (dword_10693990 & 1) == 0 )
      {
        dword_10693990 |= 1u;
        dword_1069398C = 0x1FFFFFF;
      }
      result = (_BYTE *)(v7 + *((_DWORD *)this + 1));
      v6 = result[1];
    }
  }
  return result;
}
