bool __thiscall sub_100CC380(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10430EBC;
  if ( (dword_10430EBC & 1) == 0 )
  {
    v2 = dword_10430EBC | 1;
    dword_10430EBC |= 1u;
    dword_10430EAC = -1;
    dword_10430EB0 = -1;
    dword_10430EB4 = -1;
    dword_10430EB8 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10430EAC;
  else
    v3 = (int *)(this[1] + 36 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10430EBC = v2 | 1;
    dword_10430EAC = -1;
    dword_10430EB0 = -1;
    dword_10430EB4 = -1;
    dword_10430EB8 = 1;
  }
  if ( v4 == -1 )
    return dword_10430EB0 == a2;
  else
    return *(_DWORD *)(this[1] + 36 * v4 + 4) == a2;
}
