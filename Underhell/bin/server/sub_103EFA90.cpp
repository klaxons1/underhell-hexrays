void __thiscall sub_103EFA90(int this, int a2)
{
  unsigned int v3; // eax

  if ( *(_BYTE *)(this + 2100) )
  {
    sub_100C1600(this, 1, 0);
    v3 = *(_DWORD *)(this + 2108);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2108) & 0xFFF) + 2] != v3 >> 12 )
    {
      sub_10246D70(0);
      *(_BYTE *)(this + 2100) = 0;
    }
    else
    {
      sub_10246D70((int *)off_1061BE18[4 * (*(_DWORD *)(this + 2108) & 0xFFF) + 1]);
      *(_BYTE *)(this + 2100) = 0;
    }
  }
}
