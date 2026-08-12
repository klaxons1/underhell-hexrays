bool __thiscall sub_1012BD40(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10439114;
  if ( (dword_10439114 & 1) == 0 )
  {
    v2 = dword_10439114 | 1;
    dword_10439114 |= 1u;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10439104;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10439114 = v2 | 1;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( v4 == -1 )
    return dword_10439104 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
