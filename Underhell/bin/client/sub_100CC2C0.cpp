int __thiscall sub_100CC2C0(_DWORD *this, int a2)
{
  if ( (dword_10430EBC & 1) == 0 )
  {
    dword_10430EBC |= 1u;
    dword_10430EAC = -1;
    dword_10430EB0 = -1;
    dword_10430EB4 = -1;
    dword_10430EB8 = 1;
  }
  if ( a2 == -1 )
    return dword_10430EB4;
  else
    return *(_DWORD *)(this[1] + 36 * a2 + 8);
}
