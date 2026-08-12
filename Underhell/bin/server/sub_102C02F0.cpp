bool __thiscall sub_102C02F0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

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
    v3 = &dword_106DDFFC;
  else
    v3 = (int *)(this[1] + 28 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106DE00C = v2 | 1;
    dword_106DDFFC = -1;
    dword_106DE000 = -1;
    dword_106DE004 = -1;
    dword_106DE008 = 1;
  }
  if ( v4 == -1 )
    return dword_106DE000 == a2;
  else
    return *(_DWORD *)(this[1] + 28 * v4 + 4) == a2;
}
