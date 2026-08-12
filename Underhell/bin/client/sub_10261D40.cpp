bool __thiscall sub_10261D40(_DWORD *this, int a2)
{
  if ( (dword_10480478 & 1) == 0 )
  {
    dword_10480478 |= 1u;
    dword_10480468 = -1;
    dword_1048046C = -1;
    dword_10480470 = -1;
    dword_10480474 = 1;
  }
  if ( a2 == -1 )
    return dword_10480474 == 1;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 12) == 1;
}
