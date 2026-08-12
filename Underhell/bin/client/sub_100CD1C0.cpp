int __thiscall sub_100CD1C0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10430EBC & 1) == 0 )
  {
    dword_10430EBC |= 1u;
    dword_10430EAC = -1;
    dword_10430EB0 = -1;
    dword_10430EB4 = -1;
    dword_10430EB8 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10430EAC;
  else
    v3 = (int *)(this[1] + 36 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_100CC2C0(this, a2);
    if ( sub_100CC380(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10430EBC & 1) == 0 )
        {
          dword_10430EBC |= 1u;
          dword_10430EAC = -1;
          dword_10430EB0 = -1;
          dword_10430EB4 = -1;
          dword_10430EB8 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 36 * v7 + 8);
      }
      while ( sub_100CC380(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_100CC320(this, a2);
    v5 = dword_10430EBC;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10430EBC = v5;
        dword_10430EAC = -1;
        dword_10430EB0 = -1;
        dword_10430EB4 = -1;
        dword_10430EB8 = 1;
      }
      v6 = result == -1 ? &dword_10430EAC : (int *)(this[1] + 36 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10430EBC = v5;
        dword_10430EAC = -1;
        dword_10430EB0 = -1;
        dword_10430EB4 = -1;
        dword_10430EB8 = 1;
      }
      if ( result == -1 )
        result = dword_10430EAC;
      else
        result = *(_DWORD *)(this[1] + 36 * result);
    }
  }
  return result;
}
