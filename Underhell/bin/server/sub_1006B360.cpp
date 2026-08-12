bool __thiscall sub_1006B360(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

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
    v3 = &dword_10692EF0;
  else
    v3 = (int *)(this[1] + 32 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10692F00 = v2 | 1;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( v4 == -1 )
    return dword_10692EF0 == a2;
  else
    return *(_DWORD *)(this[1] + 32 * v4) == a2;
}
