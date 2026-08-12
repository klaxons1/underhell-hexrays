int __thiscall sub_10245BA0(_DWORD *this, int a2)
{
  if ( (dword_1047CC4C & 1) == 0 )
  {
    dword_1047CC4C |= 1u;
    dword_1047CC3C = -1;
    dword_1047CC40 = -1;
    dword_1047CC44 = -1;
    dword_1047CC48 = 1;
  }
  if ( a2 == -1 )
    return dword_1047CC3C;
  else
    return *(_DWORD *)(this[1] + 24 * a2);
}
