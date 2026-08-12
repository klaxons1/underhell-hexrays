int __thiscall sub_102837A0(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // edx
  int *v8; // ecx
  int v9; // ecx
  int *v10; // ecx

  v2 = a2;
  if ( sub_102831E0(this, a2) == -1 )
  {
    result = sub_10283140(this, a2);
    v7 = dword_10481A88;
    while ( 1 )
    {
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10481A88 = v7;
        dword_10481A78 = -1;
        dword_10481A7C = -1;
        dword_10481A80 = -1;
        dword_10481A84 = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_10481A78;
      else
        v8 = (int *)(this[1] + 20 * v2);
      v9 = v8[2];
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10481A88 = v7;
        dword_10481A78 = -1;
        dword_10481A7C = -1;
        dword_10481A80 = -1;
        dword_10481A84 = 1;
      }
      v10 = v9 == -1 ? &dword_10481A78 : (int *)(this[1] + 20 * v9);
      if ( v10[1] != v2 )
        break;
      v2 = result;
      if ( result == -1 )
        break;
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10481A88 = v7;
        dword_10481A78 = -1;
        dword_10481A7C = -1;
        dword_10481A80 = -1;
        dword_10481A84 = 1;
      }
      result = *(_DWORD *)(this[1] + 20 * result + 8);
    }
  }
  else
  {
    result = sub_102831E0(this, a2);
    v5 = dword_10481A88;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10481A88 = v5;
        dword_10481A78 = -1;
        dword_10481A7C = -1;
        dword_10481A80 = -1;
        dword_10481A84 = 1;
      }
      v6 = result == -1 ? &dword_10481A78 : (int *)(this[1] + 20 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10481A88 = v5;
        dword_10481A78 = -1;
        dword_10481A7C = -1;
        dword_10481A80 = -1;
        dword_10481A84 = 1;
      }
      if ( result == -1 )
        result = dword_10481A78;
      else
        result = *(_DWORD *)(this[1] + 20 * result);
    }
  }
  return result;
}
