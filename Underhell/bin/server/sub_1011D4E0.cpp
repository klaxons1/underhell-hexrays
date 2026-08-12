int __thiscall sub_1011D4E0(_DWORD *this, int a2)
{
  if ( (dword_1069C54C & 1) == 0 )
  {
    dword_1069C54C |= 1u;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( a2 == -1 )
    return dword_1069C540;
  else
    return *(_DWORD *)(this[1] + 40 * a2 + 4);
}
