int __thiscall sub_102E8620(_DWORD *this, int a2)
{
  if ( (dword_106E1708 & 1) == 0 )
  {
    dword_106E1708 |= 1u;
    dword_106E16F8 = -1;
    dword_106E16FC = -1;
    dword_106E1700 = -1;
    dword_106E1704 = 1;
  }
  if ( a2 == -1 )
    return dword_106E1700;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
