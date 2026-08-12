int __thiscall sub_10078C10(void *this, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st6
  float *v12; // eax
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st7
  int v17; // ecx
  double v18; // st6
  int v19; // edi
  float v21; // [esp+Ch] [ebp-5Ch]
  int v22[14]; // [esp+18h] [ebp-50h] BYREF
  int v23[3]; // [esp+50h] [ebp-18h] BYREF
  int v24[3]; // [esp+5Ch] [ebp-Ch] BYREF
  float v25; // [esp+70h] [ebp+8h]
  float v26; // [esp+70h] [ebp+8h]

  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 100))(this, a2);
  v5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 1) + 720))(*((_DWORD *)this + 1));
  v25 = v5;
  v6 = *(float *)(a2 + 12) * v5;
  v7 = *(float *)(a2 + 16) * v5;
  v8 = v5 * *(float *)(a2 + 20);
  *((float *)this + 7) = v6;
  *((float *)this + 8) = v7;
  *((float *)this + 9) = v8;
  v21 = *((float *)this + 8) * *((float *)this + 8)
      + *((float *)this + 7) * *((float *)this + 7)
      + *((float *)this + 9) * *((float *)this + 9);
  v9 = (off_10689708(v21) + v25) * 0.5 * *((float *)this + 4);
  v26 = v9;
  v10 = *(float *)(a2 + 40);
  if ( v10 >= v9 )
  {
    *((float *)this + 4) = 0.0;
  }
  else
  {
    v11 = 1.0 - v10 / v9;
    v9 = *(float *)(a2 + 40);
    *((float *)this + 4) = v11 * *((float *)this + 4);
    v26 = v9;
  }
  v12 = (float *)*((_DWORD *)this + 1);
  v13 = v12[179];
  v23[0] = *((int *)v12 + 179);
  v14 = v12[180];
  v23[1] = *((int *)v12 + 180);
  v15 = v12[181];
  v23[2] = *((int *)v12 + 181);
  *(float *)v24 = v13 + *(float *)(a2 + 12) * v9;
  *(float *)&v24[1] = v14 + *(float *)(a2 + 16) * v9;
  *(float *)&v24[2] = v9 * *(float *)(a2 + 20) + v15;
  memset(v22, 0, sizeof(v22));
  sub_1007C550(2, (int)v23, (int)v24, 33701899, 0, 100.0, 0, (int)v22);
  v16 = *(float *)&v22[9];
  v17 = v22[7];
  if ( a3 )
  {
    v18 = *(float *)&v22[1];
    *(_DWORD *)a3 = v22[0];
    *(float *)(a3 + 4) = v18;
    *(float *)(a3 + 8) = *(float *)&v22[2];
    *(float *)(a3 + 12) = *(float *)&v22[3];
    *(float *)(a3 + 16) = *(float *)&v22[4];
    *(float *)(a3 + 20) = *(float *)&v22[5];
    *(float *)(a3 + 24) = *(float *)&v22[6];
    *(_DWORD *)(a3 + 28) = v17;
    *(float *)(a3 + 32) = *(float *)&v22[8];
    *(float *)(a3 + 36) = v16;
    *(float *)(a3 + 40) = *(float *)&v22[10];
    *(float *)(a3 + 44) = *(float *)&v22[11];
    *(float *)(a3 + 48) = *(float *)&v22[12];
    *(float *)(a3 + 52) = *(float *)&v22[13];
  }
  if ( fabs(v16 - v26) > 0.1 )
  {
    sub_1025F370(*((_DWORD *)this + 1), &v22[1], 1);
    return 2 * (v22[0] < 0) + 1;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 52);
    if ( v19 && v17 == v19 )
      return 4;
    else
      return 0;
  }
}
