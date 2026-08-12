int __thiscall sub_100098E0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10401160 & 1) == 0 )
  {
    dword_10401160 |= 1u;
    dword_10401150 = -1;
    dword_10401154 = -1;
    dword_10401158 = -1;
    dword_1040115C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10401150;
  else
    v3 = (int *)(this[1] + 24 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_10009000(this, a2);
    if ( sub_100092B0(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10401160 & 1) == 0 )
        {
          dword_10401160 |= 1u;
          dword_10401150 = -1;
          dword_10401154 = -1;
          dword_10401158 = -1;
          dword_1040115C = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_100092B0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_100090C0(this, a2);
    v5 = dword_10401160;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10401160 = v5;
        dword_10401150 = -1;
        dword_10401154 = -1;
        dword_10401158 = -1;
        dword_1040115C = 1;
      }
      v6 = result == -1 ? &dword_10401150 : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10401160 = v5;
        dword_10401150 = -1;
        dword_10401154 = -1;
        dword_10401158 = -1;
        dword_1040115C = 1;
      }
      if ( result == -1 )
        result = dword_10401150;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
