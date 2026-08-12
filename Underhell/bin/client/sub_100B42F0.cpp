int __thiscall sub_100B42F0(_DWORD *this, int a2)
{
  if ( (dword_1042FC20 & 1) == 0 )
  {
    dword_1042FC20 |= 1u;
    dword_1042FC10 = -1;
    dword_1042FC14 = -1;
    dword_1042FC18 = -1;
    dword_1042FC1C = 1;
  }
  if ( a2 == -1 )
    return dword_1042FC18;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
