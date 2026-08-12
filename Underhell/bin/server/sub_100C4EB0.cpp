double __thiscall sub_100C4EB0(_DWORD *this, int a2)
{
  int v2; // ecx

  if ( a2 >= 0 && a2 < this[283] && (v2 = this[280], (*(_BYTE *)(76 * a2 + v2) & 1) != 0) )
    return *(float *)(76 * a2 + v2 + 12);
  else
    return 0.0;
}
