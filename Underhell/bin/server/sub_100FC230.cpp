char __thiscall sub_100FC230(_DWORD *this, int a2)
{
  if ( this[201] != -1
    && off_1061BE18[4 * (this[201] & 0xFFF) + 2] == this[201] >> 12
    && off_1061BE18[4 * (this[201] & 0xFFF) + 1] )
  {
    return sub_1013D760(this, a2);
  }
  return *(_BYTE *)(a2 + 306) == 6
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 424) + 40))(*(_DWORD *)(a2 + 424));
}
