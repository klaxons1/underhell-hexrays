char __thiscall sub_10095400(_DWORD *this, char a2)
{
  int *v3; // eax
  char result; // al
  int v5; // edx
  int *v6; // ecx
  char v7; // bl
  unsigned __int8 v8; // [esp+10h] [ebp+8h]

  if ( (dword_10693990 & 1) == 0 )
  {
    dword_10693990 |= 1u;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( a2 == -1 )
    v3 = &dword_1069398C;
  else
    v3 = (int *)(this[1] + 12 * a2);
  if ( *((_BYTE *)v3 + 1) == 0xFF )
  {
    v7 = sub_10094480(this, a2);
    if ( sub_100944E0(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10693990 & 1) == 0 )
        {
          dword_10693990 |= 1u;
          dword_1069398C = 0x1FFFFFF;
        }
        v7 = *(_BYTE *)(this[1] + 12 * v7 + 2);
      }
      while ( sub_100944E0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_10094100(this, a2);
    v5 = dword_10693990;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10693990 = v5;
        dword_1069398C = 0x1FFFFFF;
      }
      v6 = result == -1 ? &dword_1069398C : (int *)(this[1] + 12 * result);
      if ( *(_BYTE *)v6 == 0xFF )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10693990 = v5;
        dword_1069398C = 0x1FFFFFF;
      }
      if ( result == -1 )
        result = dword_1069398C;
      else
        result = *(_BYTE *)(this[1] + 12 * result);
    }
  }
  return result;
}
