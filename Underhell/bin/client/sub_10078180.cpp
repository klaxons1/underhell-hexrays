int __thiscall sub_10078180(_DWORD *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int *v7; // eax
  int v8; // edx
  int *v9; // ecx
  int v10; // ecx
  int *v11; // ecx

  v2 = a2;
  if ( *((_WORD *)sub_100772B0(this, a2) + 1) == 0xFFFF )
  {
    v7 = sub_100772B0(this, a2);
    v8 = dword_10413850;
    while ( 1 )
    {
      result = *((unsigned __int16 *)v7 + 2);
      if ( (v8 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v8 |= 1u;
        dword_10413850 = v8;
      }
      if ( v2 == 0xFFFF )
        v9 = &dword_10413848;
      else
        v9 = (int *)(this[1] + 60 * v2);
      v10 = *((unsigned __int16 *)v9 + 2);
      if ( (v8 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v8 |= 1u;
        dword_10413850 = v8;
      }
      v11 = (_WORD)v10 == 0xFFFF ? &dword_10413848 : (int *)(this[1] + 60 * v10);
      if ( *((_WORD *)v11 + 1) != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v8 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v8 |= 1u;
        dword_10413850 = v8;
      }
      v7 = (int *)(this[1] + 60 * (unsigned __int16)result);
    }
  }
  else
  {
    result = *((unsigned __int16 *)sub_100772B0(this, a2) + 1);
    v5 = dword_10413850;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v5 |= 1u;
        dword_10413850 = v5;
      }
      v6 = (_WORD)result == 0xFFFF ? &dword_10413848 : (int *)(this[1] + 60 * (unsigned __int16)result);
      if ( *(_WORD *)v6 == 0xFFFF )
        break;
      if ( (v5 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v5 |= 1u;
        dword_10413850 = v5;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)dword_10413848;
      else
        result = *(unsigned __int16 *)(this[1] + 60 * (unsigned __int16)result);
    }
  }
  return result;
}
