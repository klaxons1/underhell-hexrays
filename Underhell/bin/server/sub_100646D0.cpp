// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_100646D0(int a1@<ebp>, int a2@<esi>)
{
  int v2; // esi
  int (__thiscall *v3)(int, int *); // edx
  float *v4; // eax
  double v5; // st7
  int (__thiscall *v6)(int, _BYTE *); // edx
  float *v7; // eax
  void (__thiscall *v8)(int, float *, int); // edx
  float v9[22]; // [esp+2Ch] [ebp-FCh] BYREF
  _BYTE v10[12]; // [esp+84h] [ebp-A4h] BYREF
  float v11[20]; // [esp+90h] [ebp-98h] BYREF
  _BYTE v12[12]; // [esp+E0h] [ebp-48h] BYREF
  int v13; // [esp+ECh] [ebp-3Ch] BYREF
  float v14[3]; // [esp+F8h] [ebp-30h] BYREF
  float v15[3]; // [esp+104h] [ebp-24h] BYREF
  float v16; // [esp+110h] [ebp-18h] BYREF
  float v17; // [esp+114h] [ebp-14h]
  float v18; // [esp+118h] [ebp-10h]
  _DWORD v19[3]; // [esp+11Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+128h] [ebp+0h]

  v19[0] = a1;
  v19[1] = retaddr;
  v2 = sub_10153490(a2);
  sub_100F5A30(v15, 0, 0);
  v3 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 504);
  v16 = v15[0] * 56755.84;
  v17 = v15[1] * 56755.84;
  v18 = 56755.84 * v15[2];
  v4 = (float *)v3(v2, &v13);
  v5 = *v4 + v16;
  v18 = COERCE_FLOAT(v12);
  v14[0] = v5;
  v14[1] = v4[1] + v17;
  v6 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 504);
  v14[2] = v4[2] + COERCE_FLOAT(v12);
  v7 = (float *)v6(v2, v12);
  sub_1001F180(v9, v7, v14);
  sub_10265570(v2, 0);
  v8 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v18 = COERCE_FLOAT(v10);
  v17 = COERCE_FLOAT(&v16);
  v8(dword_106B31F4, v9, 33701899);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v10, (int)v11, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v11[8] )
    sub_10042A00((int)v19, v2, v11, (int)v15, *(_DWORD *)(dword_10692ACC + 48) != 0);
}
