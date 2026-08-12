int __thiscall sub_10062F60(int this, int a2, float *a3)
{
  float *v5; // eax
  void (__thiscall *v6)(int, float *); // edx
  int v7; // esi
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st7
  double v12; // st5
  double v13; // st6
  float *v14; // eax
  double v15; // st6
  double v16; // st5
  double v17; // st4
  int v18; // esi
  float v19; // [esp+8h] [ebp-128h]
  float v20; // [esp+8h] [ebp-128h]
  float v21[45]; // [esp+18h] [ebp-118h] BYREF
  int v22[3]; // [esp+CCh] [ebp-64h] BYREF
  int v23[14]; // [esp+D8h] [ebp-58h] BYREF
  int v24[3]; // [esp+110h] [ebp-20h] BYREF
  int v25[3]; // [esp+11Ch] [ebp-14h] BYREF
  float v26; // [esp+128h] [ebp-8h]
  float v27; // [esp+12Ch] [ebp-4h] BYREF

  if ( *(float *)(a2 + 44) < 0.001 )
    return sub_10078C10(a2, a3);
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 128) = 0;
  sub_10061BE0((char *)this, a2);
  sub_10062B50((int *)this, a2);
  v19 = *(float *)(this + 32) * *(float *)(this + 32)
      + *(float *)(this + 28) * *(float *)(this + 28)
      + *(float *)(this + 36) * *(float *)(this + 36);
  v27 = off_10689708(v19);
  v26 = sub_10061460(this, &v27);
  qmemcpy(v21, (const void *)a2, sizeof(v21));
  v20 = sub_10061600(this);
  v5 = (float *)sub_102650F0((int)v22, v20);
  v21[6] = *v5;
  v21[7] = v5[1];
  v6 = *(void (__thiscall **)(int, float *))(*(_DWORD *)this + 100);
  v21[8] = v5[2];
  v6(this, v21);
  v7 = *(_DWORD *)(this + 4);
  *(float *)(v7 + 800) = sub_10078F70(*(_DWORD *)(v7 + 908));
  sub_10060C00(this, this, (int)v22, v27);
  v8 = *(float *)(a2 + 40);
  v9 = v26 < v8;
  v10 = v26 == v8;
  v11 = v26;
  if ( v9 || v10 )
  {
    *(float *)(this + 16) = 0.0;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 56) & 2) != 0 )
      *(float *)(this + 16) = 0.0;
    else
      *(float *)(this + 16) = (1.0 - *(float *)(a2 + 40) / v11) * *(float *)(this + 16);
    v11 = *(float *)(a2 + 40);
    v26 = *(float *)(a2 + 40);
  }
  v12 = v27 * *(float *)(a2 + 16);
  v13 = v27 * *(float *)(a2 + 20);
  *(float *)(this + 28) = *(float *)(a2 + 12) * v27;
  *(float *)(this + 32) = v12;
  *(float *)(this + 36) = v13;
  v14 = *(float **)(this + 4);
  v15 = v14[179];
  v25[0] = *((int *)v14 + 179);
  v16 = v14[180];
  v25[1] = *((int *)v14 + 180);
  v17 = v14[181];
  v25[2] = *((int *)v14 + 181);
  *(float *)v24 = v15 + *(float *)(a2 + 12) * v11;
  *(float *)&v24[1] = v16 + v11 * *(float *)(a2 + 16);
  *(float *)&v24[2] = v17 + v11 * *(float *)(a2 + 20);
  memset(v23, 0, sizeof(v23));
  sub_1007C550(2, (int)v25, (int)v24, 33701899, 0, 100.0, 0, (int)v23);
  if ( a3 )
    sub_10060900(a3, (float *)v23);
  if ( fabs(*(float *)&v23[9] - v26) > 0.1 )
  {
    sub_1025F370(*(_DWORD *)(this + 4), &v23[1], 1);
    return 2 * (v23[0] < 0) + 1;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 52);
    if ( v18 && v23[7] == v18 )
      return 4;
    else
      return 0;
  }
}
