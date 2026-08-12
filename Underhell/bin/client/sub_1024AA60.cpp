int __thiscall sub_1024AA60(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[58] )
    return 0;
  else
    return *(_DWORD *)(this[55] + 12 * a2);
}
