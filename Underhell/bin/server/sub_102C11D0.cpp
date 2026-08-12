int __thiscall sub_102C11D0(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  int result; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v2 = dword_106DE00C;
  if ( (dword_106DE00C & 1) == 0 )
  {
    v2 = dword_106DE00C | 1;
    dword_106DE00C |= 1u;
    dword_106DDFFC = -1;
    dword_106DE000 = -1;
    dword_106DE004 = -1;
    dword_106DE008 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_106DDFFC;
  else
    v4 = (int *)(this[1] + 28 * a2);
  v5 = *v4;
  if ( (v2 & 1) == 0 )
  {
    dword_106DE00C = v2 | 1;
    dword_106DDFFC = -1;
    dword_106DE000 = -1;
    dword_106DE004 = -1;
    dword_106DE008 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_106DDFFC;
  else
    v6 = (int *)(this[1] + 28 * v5);
  result = 28 * a2;
  *(_DWORD *)(28 * a2 + this[1]) = v6[1];
  if ( (dword_106DE00C & 1) == 0 )
  {
    dword_106DE00C |= 1u;
    dword_106DDFFC = -1;
    dword_106DE000 = -1;
    dword_106DE004 = -1;
    dword_106DE008 = 1;
  }
  if ( v5 == -1 )
    v8 = &dword_106DDFFC;
  else
    v8 = (int *)(this[1] + 28 * v5);
  if ( v8[1] != -1 )
  {
    *(_DWORD *)(this[1] + 28 * sub_102C0290(this, v5) + 8) = a2;
    result = 28 * a2;
  }
  if ( v5 != -1 )
  {
    *(_DWORD *)(this[1] + 28 * v5 + 8) = sub_102C01D0(this, a2);
    result = 28 * a2;
  }
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_102C02F0(this, a2) )
  {
    v9 = 7 * sub_102C01D0(this, a2);
    result = 28 * a2;
    *(_DWORD *)(this[1] + 4 * v9 + 4) = v5;
  }
  else
  {
    v10 = 7 * sub_102C01D0(this, a2);
    result = 28 * a2;
    *(_DWORD *)(this[1] + 4 * v10) = v5;
  }
  *(_DWORD *)(this[1] + 28 * v5 + 4) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(result + this[1] + 8) = v5;
  return result;
}
