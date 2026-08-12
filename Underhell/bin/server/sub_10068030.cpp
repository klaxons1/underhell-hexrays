int __thiscall sub_10068030(int this, int a2)
{
  int v3; // esi

  v3 = *(_DWORD *)(this + 132);
  if ( v3 )
  {
    sub_10067BC0(*(_DWORD *)(this + 132));
    sub_10184660(v3);
  }
  *(_DWORD *)(this + 132) = 0;
  qmemcpy((void *)this, (const void *)a2, 0xA8u);
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 160) = 0;
  sub_10065480((_DWORD *)this, *(const char **)(a2 + 160));
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164);
  return this;
}
