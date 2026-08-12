int __thiscall sub_1011DD20(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_1069C54C & 1) == 0 )
  {
    dword_1069C54C |= 1u;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_1069C53C;
  else
    v3 = (int *)(this[1] + 40 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_1011D6D0(this, a2);
    if ( sub_1011D730(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_1069C54C & 1) == 0 )
        {
          dword_1069C54C |= 1u;
          dword_1069C53C = -1;
          dword_1069C540 = -1;
          dword_1069C544 = -1;
          dword_1069C548 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 40 * v7 + 8);
      }
      while ( sub_1011D730(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_1011D4E0(this, a2);
    v5 = dword_1069C54C;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_1069C54C = v5;
        dword_1069C53C = -1;
        dword_1069C540 = -1;
        dword_1069C544 = -1;
        dword_1069C548 = 1;
      }
      v6 = result == -1 ? &dword_1069C53C : (int *)(this[1] + 40 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_1069C54C = v5;
        dword_1069C53C = -1;
        dword_1069C540 = -1;
        dword_1069C544 = -1;
        dword_1069C548 = 1;
      }
      if ( result == -1 )
        result = dword_1069C53C;
      else
        result = *(_DWORD *)(this[1] + 40 * result);
    }
  }
  return result;
}
