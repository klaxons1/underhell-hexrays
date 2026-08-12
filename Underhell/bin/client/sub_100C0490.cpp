int __thiscall sub_100C0490(_DWORD *this, int a2)
{
  if ( (dword_10430764 & 1) == 0 )
  {
    dword_10430764 |= 1u;
    dword_10430754 = -1;
    dword_10430758 = -1;
    dword_1043075C = -1;
    dword_10430760 = 1;
  }
  if ( a2 == -1 )
    return dword_1043075C;
  else
    return *(_DWORD *)(this[1] + 32 * a2 + 8);
}
