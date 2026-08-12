int __thiscall sub_1027A2F0(_DWORD *this, int a2)
{
  if ( a2 >= 0 && a2 < this[79] )
    return *(_DWORD *)(*(_DWORD *)(this[76] + 4 * a2) + 292);
  else
    return -1;
}
