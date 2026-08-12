int __thiscall sub_100090C0(_DWORD *this, int a2)
{
  if ( (dword_10401160 & 1) == 0 )
  {
    dword_10401160 |= 1u;
    dword_10401150 = -1;
    dword_10401154 = -1;
    dword_10401158 = -1;
    dword_1040115C = 1;
  }
  if ( a2 == -1 )
    return dword_10401154;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 4);
}
