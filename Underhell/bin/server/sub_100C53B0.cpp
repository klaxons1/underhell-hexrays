void __thiscall sub_100C53B0(_DWORD *this, int a2, float a3)
{
  int v3; // esi

  if ( a2 >= 0 && a2 < this[283] && (*(_BYTE *)(76 * a2 + this[280]) & 1) != 0 && a3 > 0.0 )
  {
    v3 = 76 * a2 + this[280];
    sub_10019B30(this, *(_DWORD *)(v3 + 8));
    *(float *)(v3 + 24) = 0.0 / a3;
  }
}
