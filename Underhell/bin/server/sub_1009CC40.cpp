int __thiscall sub_1009CC40(_DWORD *this, __int16 a2)
{
  __int16 v2; // si
  int result; // eax
  int v5; // edx
  __int16 *v6; // ecx
  __int16 *v7; // eax
  int v8; // edx
  __int16 *v9; // ecx
  __int16 v10; // cx
  __int16 *v11; // ecx

  v2 = a2;
  if ( sub_1009A830(this, a2)[1] == -1 )
  {
    v7 = sub_1009A830(this, a2);
    v8 = dword_10693CF4;
    while ( 1 )
    {
      result = (unsigned __int16)v7[2];
      if ( (v8 & 1) == 0 )
      {
        word_10693CEC = -1;
        v8 |= 1u;
        word_10693CEE = -1;
        word_10693CF0 = -1;
        dword_10693CF4 = v8;
        word_10693CF2 = 1;
      }
      if ( v2 == -1 )
        v9 = &word_10693CEC;
      else
        v9 = (__int16 *)(this[1] + 60 * v2);
      v10 = v9[2];
      if ( (v8 & 1) == 0 )
      {
        word_10693CEC = -1;
        v8 |= 1u;
        word_10693CEE = -1;
        word_10693CF0 = -1;
        dword_10693CF4 = v8;
        word_10693CF2 = 1;
      }
      v11 = v10 == -1 ? &word_10693CEC : (__int16 *)(this[1] + 60 * v10);
      if ( v11[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v8 & 1) == 0 )
      {
        word_10693CEC = -1;
        v8 |= 1u;
        word_10693CEE = -1;
        word_10693CF0 = -1;
        dword_10693CF4 = v8;
        word_10693CF2 = 1;
      }
      v7 = (__int16 *)(this[1] + 60 * (__int16)result);
    }
  }
  else
  {
    result = (unsigned __int16)sub_1009A830(this, a2)[1];
    v5 = dword_10693CF4;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        word_10693CEC = -1;
        v5 |= 1u;
        word_10693CEE = -1;
        word_10693CF0 = -1;
        dword_10693CF4 = v5;
        word_10693CF2 = 1;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_10693CEC : (__int16 *)(this[1] + 60 * (__int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        word_10693CEC = -1;
        v5 |= 1u;
        word_10693CEE = -1;
        word_10693CF0 = -1;
        dword_10693CF4 = v5;
        word_10693CF2 = 1;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_10693CEC;
      else
        result = *(unsigned __int16 *)(this[1] + 60 * (__int16)result);
    }
  }
  return result;
}
