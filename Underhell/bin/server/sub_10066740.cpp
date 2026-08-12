int __thiscall sub_10066740(_DWORD *this, __int16 a2)
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
  if ( sub_10065A80(this, a2) == -1 )
  {
    LOWORD(result) = sub_100659B0(this, a2);
    v7 = dword_10692DD0;
    for ( result = (unsigned __int16)result; ; result = *(unsigned __int16 *)(this[1] + 80 * (__int16)result + 4) )
    {
      if ( (v7 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v7 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v7;
        word_10692DCE = 1;
      }
      if ( v2 == -1 )
        v8 = &word_10692DC8;
      else
        v8 = (__int16 *)(this[1] + 80 * v2);
      v9 = v8[2];
      if ( (v7 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v7 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v7;
        word_10692DCE = 1;
      }
      v10 = v9 == -1 ? &word_10692DC8 : (__int16 *)(this[1] + 80 * v9);
      if ( v10[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v7 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v7 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v7;
        word_10692DCE = 1;
      }
    }
  }
  else
  {
    LOWORD(result) = sub_10065A80(this, a2);
    v4 = dword_10692DD0;
    result = (unsigned __int16)result;
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_10692DC8 : (__int16 *)(this[1] + 80 * (__int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_10692DC8;
      else
        result = *(unsigned __int16 *)(this[1] + 80 * (__int16)result);
    }
  }
  return result;
}
