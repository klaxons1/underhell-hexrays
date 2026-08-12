int __thiscall sub_101E2D10(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[70] )
    return 0;
  else
    return *(_DWORD *)(this[67] + 4 * a2);
}
