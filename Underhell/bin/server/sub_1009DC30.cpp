int __thiscall sub_1009DC30(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10693D2C & 1) == 0 )
  {
    dword_10693D2C |= 1u;
    dword_10693D1C = -1;
    dword_10693D20 = -1;
    dword_10693D24 = -1;
    dword_10693D28 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10693D1C;
  else
    v3 = (int *)(this[1] + 24 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_1009B530(this, a2);
    if ( sub_1009B650(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10693D2C & 1) == 0 )
        {
          dword_10693D2C |= 1u;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_1009B650(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_1009B5F0(this, a2);
    v5 = dword_10693D2C;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10693D2C = v5;
        dword_10693D1C = -1;
        dword_10693D20 = -1;
        dword_10693D24 = -1;
        dword_10693D28 = 1;
      }
      v6 = result == -1 ? &dword_10693D1C : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10693D2C = v5;
        dword_10693D1C = -1;
        dword_10693D20 = -1;
        dword_10693D24 = -1;
        dword_10693D28 = 1;
      }
      if ( result == -1 )
        result = dword_10693D1C;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
