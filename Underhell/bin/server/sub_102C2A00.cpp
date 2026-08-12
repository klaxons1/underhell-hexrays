int __thiscall sub_102C2A00(_DWORD *this, unsigned __int16 a2)
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
  if ( sub_102C0A40(this, a2) == -1 )
  {
    LOWORD(result) = sub_102C0970(this, a2);
    v7 = dword_106DE040;
    for ( result = (unsigned __int16)result; ; result = *(unsigned __int16 *)(this[1]
                                                                            + 392 * (unsigned __int16)result
                                                                            + 4) )
    {
      if ( (v7 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v7 |= 1u;
        dword_106DE040 = v7;
      }
      if ( v2 == 0xFFFF )
        v8 = &dword_106DE038;
      else
        v8 = (int *)(this[1] + 392 * v2);
      v9 = *((unsigned __int16 *)v8 + 2);
      if ( (v7 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v7 |= 1u;
        dword_106DE040 = v7;
      }
      v10 = (_WORD)v9 == 0xFFFF ? &dword_106DE038 : (int *)(this[1] + 392 * v9);
      if ( *((_WORD *)v10 + 1) != v2 )
        break;
      v2 = result;
      if ( (_WORD)result == 0xFFFF )
        break;
      if ( (v7 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v7 |= 1u;
        dword_106DE040 = v7;
      }
    }
  }
  else
  {
    LOWORD(result) = sub_102C0A40(this, a2);
    v4 = dword_106DE040;
    result = (unsigned __int16)result;
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 |= 1u;
        dword_106DE040 = v4;
      }
      v6 = (_WORD)result == 0xFFFF ? &dword_106DE038 : (int *)(this[1] + 392 * (unsigned __int16)result);
      if ( *(_WORD *)v6 == 0xFFFF )
        break;
      if ( (v4 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 |= 1u;
        dword_106DE040 = v4;
      }
      if ( (_WORD)result == 0xFFFF )
        result = (unsigned __int16)dword_106DE038;
      else
        result = *(unsigned __int16 *)(this[1] + 392 * (unsigned __int16)result);
    }
  }
  return result;
}
