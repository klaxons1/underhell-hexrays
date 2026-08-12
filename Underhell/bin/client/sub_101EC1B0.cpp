int __thiscall sub_101EC1B0(_DWORD *this, int a2)
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
  if ( sub_101EB100(this, a2) == -1 )
  {
    result = sub_101EAD90(this, a2);
    v7 = dword_10458E20;
    while ( 1 )
    {
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10458E20 = v7;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_10458E10;
      else
        v8 = (int *)(this[1] + 48 * v2);
      v9 = v8[2];
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10458E20 = v7;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      v10 = v9 == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * v9);
      if ( v10[1] != v2 )
        break;
      v2 = result;
      if ( result == -1 )
        break;
      if ( (v7 & 1) == 0 )
      {
        v7 |= 1u;
        dword_10458E20 = v7;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      result = *(_DWORD *)(this[1] + 48 * result + 8);
    }
  }
  else
  {
    result = sub_101EB100(this, a2);
    v5 = dword_10458E20;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10458E20 = v5;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      v6 = result == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10458E20 = v5;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( result == -1 )
        result = dword_10458E10;
      else
        result = *(_DWORD *)(this[1] + 48 * result);
    }
  }
  return result;
}
