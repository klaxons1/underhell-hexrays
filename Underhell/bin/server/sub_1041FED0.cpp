int __thiscall sub_1041FED0(_DWORD *this, unsigned __int16 a2)
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
  if ( sub_1041F220(this, a2)[1] == -1 )
  {
    v7 = sub_1041F220(this, a2);
    v8 = dword_106F1874;
    while ( 1 )
    {
      result = (unsigned __int16)v7[2];
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_106F1874 = v8;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( v2 == 0xFFFF )
        v9 = &word_106F186C;
      else
        v9 = (__int16 *)(this[1] + 12 * v2);
      v10 = v9[2];
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_106F1874 = v8;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v11 = v10 == 0xFFFF ? &word_106F186C : (__int16 *)(this[1] + 12 * v10);
      if ( v11[1] != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v8 & 1) == 0 )
      {
        v8 |= 1u;
        dword_106F1874 = v8;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v7 = (__int16 *)(this[1] + 12 * (unsigned __int16)result);
    }
  }
  else
  {
    result = (unsigned __int16)sub_1041F220(this, a2)[1];
    v5 = dword_106F1874;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106F1874 = v5;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v6 = (_WORD)result == 0xFFFF ? &word_106F186C : (__int16 *)(this[1] + 12 * (unsigned __int16)result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106F1874 = v5;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)word_106F186C;
      else
        result = *(unsigned __int16 *)(this[1] + 12 * (unsigned __int16)result);
    }
  }
  return result;
}
