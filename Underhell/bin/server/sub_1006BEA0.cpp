int __thiscall sub_1006BEA0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v4; // ecx
  int *v5; // eax
  int result; // eax
  int *v7; // ecx
  int *v8; // ecx
  int v9; // esi
  int v10; // [esp-4h] [ebp-10h]

  v2 = dword_10692F00;
  if ( (dword_10692F00 & 1) == 0 )
  {
    v2 = dword_10692F00 | 1;
    dword_10692F00 |= 1u;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10692EF0;
  else
    v4 = (int *)(this[1] + 32 * a2);
  if ( v4[1] == -1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_10692F00 = v2 | 1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( a2 == -1 )
      v8 = &dword_10692EF0;
    else
      v8 = (int *)(this[1] + 32 * a2);
    v9 = v8[2];
    if ( sub_1006B1C0(this, a2) )
    {
      do
      {
        if ( v9 == -1 )
          break;
        if ( (dword_10692F00 & 1) == 0 )
        {
          dword_10692F00 |= 1u;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        v10 = v9;
        v9 = *(_DWORD *)(this[1] + 32 * v9 + 8);
      }
      while ( sub_1006B1C0(this, v10) );
    }
    return v9;
  }
  else
  {
    if ( (v2 & 1) == 0 )
    {
      v2 |= 1u;
      dword_10692F00 = v2;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( a2 == -1 )
      v5 = &dword_10692EF0;
    else
      v5 = (int *)(this[1] + 32 * a2);
    result = v5[1];
    while ( 1 )
    {
      if ( (v2 & 1) == 0 )
      {
        v2 |= 1u;
        dword_10692F00 = v2;
        dword_10692EF0 = -1;
        dword_10692EF4 = -1;
        dword_10692EF8 = -1;
        dword_10692EFC = 1;
      }
      v7 = result == -1 ? &dword_10692EF0 : (int *)(this[1] + 32 * result);
      if ( *v7 == -1 )
        break;
      if ( (v2 & 1) == 0 )
      {
        v2 |= 1u;
        dword_10692F00 = v2;
        dword_10692EF0 = -1;
        dword_10692EF4 = -1;
        dword_10692EF8 = -1;
        dword_10692EFC = 1;
      }
      if ( result == -1 )
        result = dword_10692EF0;
      else
        result = *(_DWORD *)(this[1] + 32 * result);
    }
  }
  return result;
}
