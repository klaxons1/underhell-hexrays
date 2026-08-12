int __thiscall sub_1009D7F0(_DWORD *this, __int16 a2)
{
  __int16 v2; // si
  int v4; // edx
  int result; // eax
  __int16 *v6; // ecx
  int v7; // edx
  __int16 *v8; // ecx
  __int16 v9; // cx
  __int16 *v10; // ecx

  v2 = a2;
  if ( sub_1009B3C0(this, a2) == -1 )
  {
    LOWORD(result) = sub_1009B300(this, a2);
    v7 = dword_10693D18;
    for ( result = (unsigned __int16)result; ; result = *(unsigned __int16 *)(this[1] + 16 * (__int16)result + 4) )
    {
      if ( (v7 & 1) == 0 )
      {
        word_10693D10 = -1;
        v7 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v7;
        word_10693D16 = 1;
      }
      if ( v2 == -1 )
        v8 = &word_10693D10;
      else
        v8 = (__int16 *)(this[1] + 16 * v2);
      v9 = v8[2];
      if ( (v7 & 1) == 0 )
      {
        word_10693D10 = -1;
        v7 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v7;
        word_10693D16 = 1;
      }
      v10 = v9 == -1 ? &word_10693D10 : (__int16 *)(this[1] + 16 * v9);
      if ( v10[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v7 & 1) == 0 )
      {
        word_10693D10 = -1;
        v7 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v7;
        word_10693D16 = 1;
      }
    }
  }
  else
  {
    LOWORD(result) = sub_1009B3C0(this, a2);
    v4 = dword_10693D18;
    result = (unsigned __int16)result;
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v4;
        word_10693D16 = 1;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_10693D10 : (__int16 *)(this[1] + 16 * (__int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v4;
        word_10693D16 = 1;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_10693D10;
      else
        result = *(unsigned __int16 *)(this[1] + 16 * (__int16)result);
    }
  }
  return result;
}
