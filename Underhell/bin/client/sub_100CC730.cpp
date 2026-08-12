bool __thiscall sub_100CC730(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10430EA8;
  if ( (dword_10430EA8 & 1) == 0 )
  {
    v2 = dword_10430EA8 | 1;
    dword_10430EA8 |= 1u;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10430E98;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10430EA8 = v2 | 1;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( v4 == -1 )
    return dword_10430E98 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
