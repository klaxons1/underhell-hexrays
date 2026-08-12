char __thiscall sub_100940A0(_DWORD *this, char a2)
{
  if ( (dword_10693990 & 1) == 0 )
  {
    dword_10693990 |= 1u;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( a2 == -1 )
    return dword_1069398C;
  else
    return *(_BYTE *)(this[1] + 12 * a2);
}
