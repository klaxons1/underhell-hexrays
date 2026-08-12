void __thiscall sub_102049B0(float *this, float a2, int a3, float a4)
{
  int v4; // ebx
  double v6; // st7
  float *v7; // edi
  double v8; // st7
  double v9; // st6
  float v10; // [esp+8h] [ebp-4h]

  v4 = LODWORD(a4);
  v6 = this[12] + *(float *)(LODWORD(a4) + 12);
  v10 = v6;
  if ( v6 < a2 )
  {
    v7 = (float *)a3;
    a4 = COERCE_FLOAT(sub_101F89A0((_DWORD *)a3));
    *(float *)&a3 = (double)SLODWORD(a4) * this[15];
    a4 = this[13];
    if ( sub_101F7E80(v7, this, &a2) )
      v8 = a2 * a4;
    else
      v8 = a4;
    if ( *(float *)&a3 != 0.0 )
      v8 = v8 * *(float *)&a3;
    v9 = v7[9];
    *(_DWORD *)(v4 + 4) = 0;
    *(float *)v4 = v8 * (v9 - v10) + 1.0;
  }
}
