int __thiscall sub_100BB240(_DWORD *this, int a2)
{
  if ( (dword_106956C8 & 1) == 0 )
  {
    dword_106956C8 |= 1u;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( a2 == -1 )
    return dword_106956C0;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
