bool __thiscall sub_10002360(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10400F90;
  if ( (dword_10400F90 & 1) == 0 )
  {
    v2 = dword_10400F90 | 1;
    dword_10400F90 |= 1u;
    dword_10400F80 = -1;
    dword_10400F84 = -1;
    dword_10400F88 = -1;
    dword_10400F8C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10400F80;
  else
    v3 = (int *)(this[1] + 40 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10400F90 = v2 | 1;
    dword_10400F80 = -1;
    dword_10400F84 = -1;
    dword_10400F88 = -1;
    dword_10400F8C = 1;
  }
  if ( v4 == -1 )
    return dword_10400F84 == a2;
  else
    return *(_DWORD *)(this[1] + 40 * v4 + 4) == a2;
}
