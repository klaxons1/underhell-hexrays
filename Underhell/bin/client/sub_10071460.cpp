int __thiscall sub_10071460(_DWORD *this, int a2)
{
  if ( (dword_10412B58 & 1) == 0 )
  {
    dword_10412B58 |= 1u;
    dword_10412B48 = -1;
    dword_10412B4C = -1;
    dword_10412B50 = -1;
    dword_10412B54 = 1;
  }
  if ( a2 == -1 )
    return dword_10412B50;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
