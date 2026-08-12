int __thiscall sub_10293200(_DWORD *this, int a2)
{
  if ( (dword_106DAFFC & 1) == 0 )
  {
    dword_106DAFFC |= 1u;
    dword_106DAFEC = -1;
    dword_106DAFF0 = -1;
    dword_106DAFF4 = -1;
    dword_106DAFF8 = 1;
  }
  if ( a2 == -1 )
    return dword_106DAFF4;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
