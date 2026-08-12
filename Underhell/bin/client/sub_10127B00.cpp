int __thiscall sub_10127B00(_DWORD *this, int a2, int a3)
{
  if ( !this[1] )
    return a3;
  if ( a3 == -1 )
    return -1;
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this[1] + 88)
                               + 144 * *(_DWORD *)(*(_DWORD *)(this[1] + 8) + 16 * a2 + 8)
                               + 104)
                   + 4 * a3);
}
