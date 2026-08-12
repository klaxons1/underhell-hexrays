bool __thiscall sub_1009B900(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10693D2C;
  if ( (dword_10693D2C & 1) == 0 )
  {
    v2 = dword_10693D2C | 1;
    dword_10693D2C |= 1u;
    dword_10693D1C = -1;
    dword_10693D20 = -1;
    dword_10693D24 = -1;
    dword_10693D28 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10693D1C;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10693D2C = v2 | 1;
    dword_10693D1C = -1;
    dword_10693D20 = -1;
    dword_10693D24 = -1;
    dword_10693D28 = 1;
  }
  if ( v4 == -1 )
    return dword_10693D1C == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
