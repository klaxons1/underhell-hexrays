int __thiscall sub_101EB990(_DWORD *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  int result; // eax
  int v5; // edx
  __int16 *v6; // ecx
  __int16 *v7; // eax
  int v8; // edx
  __int16 *v9; // ecx
  unsigned __int16 v10; // cx
  __int16 *v11; // ecx

  v2 = a2;
  if ( sub_101EAC70(this, a2)[1] == -1 )
  {
    v7 = sub_101EAC70(this, a2);
    v8 = dword_10458E0C;
    while ( 1 )
    {
      result = (unsigned __int16)v7[2];
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_10458E0C = v8;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      if ( v2 == 0xFFFF )
        v9 = &word_10458E04;
      else
        v9 = (__int16 *)(this[1] + 12 * v2);
      v10 = v9[2];
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_10458E0C = v8;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      v11 = v10 == 0xFFFF ? &word_10458E04 : (__int16 *)(this[1] + 12 * v10);
      if ( v11[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_10458E0C = v8;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      v7 = (__int16 *)(this[1] + 12 * (unsigned __int16)result);
    }
  }
  else
  {
    result = (unsigned __int16)sub_101EAC70(this, a2)[1];
    v5 = dword_10458E0C;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10458E0C = v5;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_10458E04 : (__int16 *)(this[1] + 12 * (unsigned __int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10458E0C = v5;
        word_10458E04 = -1;
        word_10458E06 = -1;
        word_10458E08 = -1;
        word_10458E0A = 1;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_10458E04;
      else
        result = *(unsigned __int16 *)(this[1] + 12 * (unsigned __int16)result);
    }
  }
  return result;
}
