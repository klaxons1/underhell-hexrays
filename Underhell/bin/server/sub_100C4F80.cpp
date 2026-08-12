int __thiscall sub_100C4F80(_DWORD *this, int a2)
{
  int v2; // ecx

  if ( a2 >= 0 && a2 < this[283] && (v2 = this[280], (*(_BYTE *)(76 * a2 + v2) & 1) != 0) )
    return *(_DWORD *)(76 * a2 + v2 + 8);
  else
    return -1;
}
