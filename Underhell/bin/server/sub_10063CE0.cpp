// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10063CE0@<eax>(int a1@<ebp>)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  int (__thiscall *v6)(int, _BYTE *); // edx
  float *v7; // eax
  float v8; // ecx
  double v9; // st7
  double v10; // st7
  int (__thiscall *v11)(_DWORD, _BYTE *); // eax
  float *v12; // eax
  int v13; // eax
  int (__thiscall *v14)(int); // edx
  int v15; // eax
  float v17[22]; // [esp+48h] [ebp-10Ch] BYREF
  _BYTE v18[12]; // [esp+A0h] [ebp-B4h] BYREF
  _BYTE v19[76]; // [esp+ACh] [ebp-A8h] BYREF
  int v20; // [esp+F8h] [ebp-5Ch] BYREF
  _BYTE v21[12]; // [esp+104h] [ebp-50h] BYREF
  int v22; // [esp+110h] [ebp-44h] BYREF
  _BYTE v23[12]; // [esp+120h] [ebp-34h] BYREF
  float v24; // [esp+12Ch] [ebp-28h] BYREF
  float v25; // [esp+130h] [ebp-24h]
  int v26; // [esp+134h] [ebp-20h]
  int v27; // [esp+138h] [ebp-1Ch]
  int v28; // [esp+13Ch] [ebp-18h]
  int v29; // [esp+140h] [ebp-14h]
  float v30; // [esp+144h] [ebp-10h]
  int v31; // [esp+148h] [ebp-Ch]
  void *v32; // [esp+14Ch] [ebp-8h]
  void *retaddr; // [esp+154h] [ebp+0h]

  v31 = a1;
  v32 = retaddr;
  v1 = sub_10261B20();
  sub_10265790(v1, 0, 0);
  v2 = sub_10261B20();
  v3 = sub_10261B20();
  v30 = COERCE_FLOAT(sub_10261B20());
  v4 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 924))(v2, &v20);
  v5 = *v4 * 16384.0;
  v30 = COERCE_FLOAT(v21);
  *(float *)&v27 = v5;
  *(float *)&v28 = v4[1] * 16384.0;
  v6 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 504);
  *(float *)&v29 = 16384.0 * v4[2];
  v7 = (float *)v6(v3, v21);
  v8 = v30;
  v9 = *v7 + *(float *)&v27;
  v30 = COERCE_FLOAT(v23);
  v24 = v9;
  v25 = v7[1] + *(float *)&v28;
  v10 = v7[2] + *(float *)&v29;
  v11 = *(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)LODWORD(v8) + 504);
  *(float *)&v26 = v10;
  v12 = (float *)v11(LODWORD(v8), v23);
  sub_1001F180(v17, v12, &v24);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v17,
    33570881,
    &v22,
    v18);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, -1.0);
  v13 = sub_10261B20();
  v14 = *(int (__thiscall **)(int))(*(_DWORD *)v13 + 504);
  v30 = 5.0;
  v29 = 1;
  v28 = 127;
  v27 = 127;
  v26 = 127;
  v25 = COERCE_FLOAT(v19);
  v24 = COERCE_FLOAT(v23);
  v15 = v14(v13);
  sub_1011BC50(v15, SLODWORD(v24), SLODWORD(v25), v26, v27, v28, *(float *)&v29);
  return sub_1011C120((int)v19, 24.0, 255, 255, 255, 1, 5.0);
}
