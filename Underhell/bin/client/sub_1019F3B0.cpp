void __thiscall sub_1019F3B0(int this, int a2, float *a3, float *a4, float *a5)
{
  int v5; // edx

  if ( *(_DWORD *)(this + 4) == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2) != *(_DWORD *)(this + 4) >> 12 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1);
  }
  sub_1012DC20(
    v5,
    a3,
    a4,
    COERCE_FLOAT(*(_BYTE *)(this + 12)),
    *(_BYTE *)(this + 13),
    (float *)(this + 16),
    (_DWORD **)(this + 44),
    a5);
}
