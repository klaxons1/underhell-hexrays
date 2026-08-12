void __thiscall sub_1015B400(int this, int a2, float *a3, float *a4, float *a5)
{
  int v5; // edx

  if ( *(_DWORD *)(this + 8) == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2) != *(_DWORD *)(this + 8) >> 12 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1);
  }
  sub_1012DC20(
    v5,
    a3,
    a4,
    COERCE_FLOAT(*(_BYTE *)(this + 68)),
    *(_BYTE *)(this + 69),
    (float *)(this + 132),
    (_DWORD **)(this + 152),
    a5);
}
