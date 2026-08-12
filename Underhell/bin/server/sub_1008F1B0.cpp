char __thiscall sub_1008F1B0(_DWORD *this, int a2, float *a3, float *a4, float *a5, int a6, float *a7)
{
  int v8; // ecx
  _DWORD *v9; // esi
  int v11[14]; // [esp+18h] [ebp-3Ch] BYREF
  int v12; // [esp+50h] [ebp-4h]

  memset(v11, 0, sizeof(v11));
  v8 = this[1];
  v11[0] = 0;
  v9 = *(_DWORD **)(v8 + 2600);
  LOBYTE(v12) = 0;
  if ( sub_1007C550(v9, a2, a3, a4, 33701899, a6, 100.0, 0, a7)
    && sub_1007C550(v9, a2, a4, a5, 33701899, a6, 100.0, 0, (float *)v11) )
  {
    LOBYTE(v12) = 1;
  }
  if ( (*(_DWORD *)(this[1] + 236) & 0x8000) != 0 )
    sub_1008EB90(this + 2, a3, a4, a5, (int)a7, (int)v11, v12);
  return v12;
}
