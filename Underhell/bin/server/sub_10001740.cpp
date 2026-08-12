int __thiscall sub_10001740(_DWORD *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  int v4; // edx
  int result; // eax
  __int16 *v6; // ecx
  int v7; // edx
  __int16 *v8; // ecx
  int v9; // ecx
  __int16 *v10; // ecx

  v2 = a2;
  if ( sub_10001610(this, a2) == -1 )
  {
    LOWORD(result) = sub_100015B0(this, a2);
    v7 = dword_10690078;
    for ( result = (unsigned __int16)result; ; result = *(unsigned __int16 *)(this[1] + 16 * (unsigned __int16)result + 4) )
    {
      if ( (v7 & 1) == 0 )
      {
        word_10690070 = -1;
        word_10690072 = -1;
        dword_10690074 = 0x1FFFF;
        v7 |= 1u;
        dword_10690078 = v7;
      }
      if ( v2 == 0xFFFF )
        v8 = &word_10690070;
      else
        v8 = (__int16 *)(this[1] + 16 * v2);
      v9 = (unsigned __int16)v8[2];
      if ( (v7 & 1) == 0 )
      {
        word_10690070 = -1;
        word_10690072 = -1;
        dword_10690074 = 0x1FFFF;
        v7 |= 1u;
        dword_10690078 = v7;
      }
      v10 = (_WORD)v9 == 0xFFFF ? &word_10690070 : (__int16 *)(this[1] + 16 * v9);
      if ( v10[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v7 & 1) == 0 )
      {
        word_10690070 = -1;
        word_10690072 = -1;
        dword_10690074 = 0x1FFFF;
        v7 |= 1u;
        dword_10690078 = v7;
      }
    }
  }
  else
  {
    LOWORD(result) = sub_10001610(this, a2);
    v4 = dword_10690078;
    result = (unsigned __int16)result;
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
      {
        word_10690070 = -1;
        word_10690072 = -1;
        dword_10690074 = 0x1FFFF;
        v4 |= 1u;
        dword_10690078 = v4;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_10690070 : (__int16 *)(this[1] + 16 * (unsigned __int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        word_10690070 = -1;
        word_10690072 = -1;
        dword_10690074 = 0x1FFFF;
        v4 |= 1u;
        dword_10690078 = v4;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_10690070;
      else
        result = *(unsigned __int16 *)(this[1] + 16 * (unsigned __int16)result);
    }
  }
  return result;
}
