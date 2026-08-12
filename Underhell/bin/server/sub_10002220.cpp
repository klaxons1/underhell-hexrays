int __thiscall sub_10002220(_DWORD *this, int a2)
{
  if ( (dword_10690170 & 1) == 0 )
  {
    dword_10690170 |= 1u;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( a2 == -1 )
    return dword_10690164;
  else
    return *(_DWORD *)(this[1] + 40 * a2 + 4);
}
