bool __thiscall sub_1011D7E0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_1069C54C;
  if ( (dword_1069C54C & 1) == 0 )
  {
    v2 = dword_1069C54C | 1;
    dword_1069C54C |= 1u;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_1069C53C;
  else
    v3 = (int *)(this[1] + 40 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_1069C54C = v2 | 1;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( v4 == -1 )
    return dword_1069C53C == a2;
  else
    return *(_DWORD *)(this[1] + 40 * v4) == a2;
}
