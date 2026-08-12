int __thiscall sub_1006E020(_DWORD *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  int v4; // edx
  int result; // eax
  int *v6; // ecx
  int v7; // edx
  int *v8; // ecx
  int v9; // ecx
  int *v10; // ecx

  v2 = a2;
  if ( sub_1006D890(this, a2) == -1 )
  {
    LOWORD(result) = sub_1006D7C0(this, a2);
    v7 = dword_10692FB0;
    for ( result = (unsigned __int16)result; ; result = *(unsigned __int16 *)(this[1] + 12 * (unsigned __int16)result + 4) )
    {
      if ( (v7 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v7 |= 1u;
        dword_10692FB0 = v7;
      }
      if ( v2 == 0xFFFF )
        v8 = &dword_10692FA8;
      else
        v8 = (int *)(this[1] + 12 * v2);
      v9 = *((unsigned __int16 *)v8 + 2);
      if ( (v7 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v7 |= 1u;
        dword_10692FB0 = v7;
      }
      v10 = (_WORD)v9 == 0xFFFF ? &dword_10692FA8 : (int *)(this[1] + 12 * v9);
      if ( *((_WORD *)v10 + 1) != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v7 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v7 |= 1u;
        dword_10692FB0 = v7;
      }
    }
  }
  else
  {
    LOWORD(result) = sub_1006D890(this, a2);
    v4 = dword_10692FB0;
    result = (unsigned __int16)result;
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      v6 = (_WORD)result == 0xFFFF ? &dword_10692FA8 : (int *)(this[1] + 12 * (unsigned __int16)result);
      if ( *(_WORD *)v6 == 0xFFFF )
        break;
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)dword_10692FA8;
      else
        result = *(unsigned __int16 *)(this[1] + 12 * (unsigned __int16)result);
    }
  }
  return result;
}
