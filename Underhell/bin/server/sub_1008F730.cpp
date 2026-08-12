char __thiscall sub_1008F730(_DWORD *this, int a2, float *a3, float *a4)
{
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  float v12; // [esp+0h] [ebp-5Ch]
  float v13; // [esp+8h] [ebp-54h]
  int v14[14]; // [esp+18h] [ebp-44h] BYREF
  float v15[3]; // [esp+50h] [ebp-Ch] BYREF

  memset(v14, 0, sizeof(v14));
  sub_1007C550(*(_DWORD **)(this[1] + 2600), a2, a3, a4, 33701899, 0, 100.0, 4, (float *)v14);
  if ( v14[0] >= 0 )
    return 1;
  v6 = a4[1] - a3[1];
  v7 = v6 * v6;
  v8 = *a4 - *a3;
  v9 = v7;
  v10 = a4[2] - a3[2];
  v13 = v8 * v8 + v9 + v10 * v10;
  v11 = off_10689708(v13);
  v12 = v11 - *(float *)&v14[9];
  if ( sub_1008F280(this, a2, a3, (int)a4, v12, 0, v15) )
    return 1;
  if ( v14[7]
    && sub_100D7680(v14[7])
    && (sub_1007C550(*(_DWORD **)(this[1] + 2600), a2, a3, a4, 147467, 0, 100.0, 0, (float *)v14), v14[0] >= 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
