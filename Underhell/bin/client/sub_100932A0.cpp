bool __thiscall sub_100932A0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_1042CB50;
  if ( (dword_1042CB50 & 1) == 0 )
  {
    v2 = dword_1042CB50 | 1;
    dword_1042CB50 |= 1u;
    dword_1042CB40 = -1;
    dword_1042CB44 = -1;
    dword_1042CB48 = -1;
    dword_1042CB4C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_1042CB40;
  else
    v3 = (int *)(this[1] + 40 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_1042CB50 = v2 | 1;
    dword_1042CB40 = -1;
    dword_1042CB44 = -1;
    dword_1042CB48 = -1;
    dword_1042CB4C = 1;
  }
  if ( v4 == -1 )
    return dword_1042CB44 == a2;
  else
    return *(_DWORD *)(this[1] + 40 * v4 + 4) == a2;
}
