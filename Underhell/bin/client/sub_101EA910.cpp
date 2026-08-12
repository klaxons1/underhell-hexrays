int __thiscall sub_101EA910(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[67] )
    return 0;
  else
    return *(_DWORD *)(this[64] + 4 * a2);
}
