bool __thiscall sub_10245DD0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_10245AE0(this, a2);
  if ( (dword_1047CC4C & 1) == 0 )
  {
    dword_1047CC4C |= 1u;
    dword_1047CC3C = -1;
    dword_1047CC40 = -1;
    dword_1047CC44 = -1;
    dword_1047CC48 = 1;
  }
  if ( v3 == -1 )
    return dword_1047CC3C == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
