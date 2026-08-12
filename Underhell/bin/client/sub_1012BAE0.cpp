int __thiscall sub_1012BAE0(_DWORD *this, int a2)
{
  if ( (dword_10439114 & 1) == 0 )
  {
    dword_10439114 |= 1u;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( a2 == -1 )
    return dword_1043910C;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
