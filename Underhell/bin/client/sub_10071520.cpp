bool __thiscall sub_10071520(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10412B58;
  if ( (dword_10412B58 & 1) == 0 )
  {
    v2 = dword_10412B58 | 1;
    dword_10412B58 |= 1u;
    dword_10412B48 = -1;
    dword_10412B4C = -1;
    dword_10412B50 = -1;
    dword_10412B54 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10412B48;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10412B58 = v2 | 1;
    dword_10412B48 = -1;
    dword_10412B4C = -1;
    dword_10412B50 = -1;
    dword_10412B54 = 1;
  }
  if ( v4 == -1 )
    return dword_10412B4C == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4 + 4) == a2;
}
