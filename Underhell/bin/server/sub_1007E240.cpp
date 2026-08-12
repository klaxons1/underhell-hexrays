double __thiscall sub_1007E240(_DWORD **this, int a2, float a3, float *a4)
{
  float v4; // esi
  float *v5; // edi
  double v6; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  float v12; // [esp+0h] [ebp-10h]

  v4 = a3;
  v5 = a4;
  v6 = *(float *)LODWORD(a3) - *a4;
  v8 = *(float *)(LODWORD(a3) + 4) - a4[1];
  v9 = *(float *)(LODWORD(a3) + 8) - a4[2];
  v12 = v9 * v9 + v8 * v8 + v6 * v6;
  v10 = off_10689708(v12);
  a3 = v10;
  if ( a2 == 2 || a2 == 8 )
    a3 = v10 + v10;
  (*(void (__thiscall **)(_DWORD *, int, float, float *, float *))(*this[1] + 1692))(
    this[1],
    a2,
    COERCE_FLOAT(LODWORD(v4)),
    v5,
    &a3);
  return a3;
}
