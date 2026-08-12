int __thiscall sub_10278140(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[63] )
    return -1;
  else
    return *(_DWORD *)(this[60] + 4 * a2);
}
