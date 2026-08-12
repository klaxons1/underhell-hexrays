int __thiscall sub_1007B6C0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax

  if ( this[7] >= this[11] )
  {
    DevMsg("CTraceListData: Max entity count along ray exceeded!\n");
    v3 = this[11];
    if ( v3 )
    {
      v4 = this[9];
      if ( 2 * v3 > v4 )
        sub_102ABFC0(v3 + v3 - v4);
      this[11] += v3;
      v5 = this[8];
      v6 = this[11] - v3 - v3;
      this[12] = v5;
      if ( v6 > 0 && v3 > 0 )
        memcpy((void *)(v5 + 8 * v3), (const void *)(v5 + 4 * v3), 4 * v6);
    }
  }
  *(_DWORD *)(this[8] + 4 * this[7]++) = a2;
  return 0;
}
