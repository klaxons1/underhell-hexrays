int __thiscall sub_1007E610(int this)
{
  unsigned int v2; // eax

  if ( sub_100A6180(*(_DWORD *)(this + 36)) == 2 || sub_100A6180(*(_DWORD *)(this + 36)) == 1 )
    return sub_100209E0(*(_DWORD **)(this + 4));
  v2 = *(_DWORD *)(*(_DWORD *)(this + 36) + 16);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 36) + 16) & 0xFFF) + 2] != v2 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 36) + 16) & 0xFFF) + 1];
}
