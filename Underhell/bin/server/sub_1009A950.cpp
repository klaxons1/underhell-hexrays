int __thiscall sub_1009A950(_DWORD *this, int a2)
{
  if ( (dword_10693D2C & 1) == 0 )
  {
    dword_10693D2C |= 1u;
    dword_10693D1C = -1;
    dword_10693D20 = -1;
    dword_10693D24 = -1;
    dword_10693D28 = 1;
  }
  if ( a2 == -1 )
    return dword_10693D28;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 12);
}
