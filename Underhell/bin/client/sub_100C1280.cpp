bool __thiscall sub_100C1280(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10430764;
  if ( (dword_10430764 & 1) == 0 )
  {
    v2 = dword_10430764 | 1;
    dword_10430764 |= 1u;
    dword_10430754 = -1;
    dword_10430758 = -1;
    dword_1043075C = -1;
    dword_10430760 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10430754;
  else
    v3 = (int *)(this[1] + 32 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10430764 = v2 | 1;
    dword_10430754 = -1;
    dword_10430758 = -1;
    dword_1043075C = -1;
    dword_10430760 = 1;
  }
  if ( v4 == -1 )
    return dword_10430754 == a2;
  else
    return *(_DWORD *)(this[1] + 32 * v4) == a2;
}
