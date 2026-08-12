// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1033FB50@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int *a5)
{
  unsigned __int8 (__thiscall *v6)(float *, int *, int, int); // edx
  int v7; // edx
  float v8; // ecx
  float v9; // edx
  int (__thiscall *v10)(float *); // edx
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  int (__thiscall *v15)(float *, _BYTE *); // edx
  float *v16; // eax
  int *v17; // eax
  double v18; // st7
  double v19; // st6
  double v20; // st5
  char result; // al
  float v23[20]; // [esp+44h] [ebp-FCh] BYREF
  _BYTE v24[12]; // [esp+94h] [ebp-ACh] BYREF
  float v25[19]; // [esp+A0h] [ebp-A0h] BYREF
  float v26[3]; // [esp+ECh] [ebp-54h] BYREF
  _BYTE v27[12]; // [esp+F8h] [ebp-48h] BYREF
  _DWORD v28[3]; // [esp+104h] [ebp-3Ch] BYREF
  float v29; // [esp+110h] [ebp-30h] BYREF
  float v30; // [esp+114h] [ebp-2Ch]
  int v31; // [esp+118h] [ebp-28h]
  float v32; // [esp+11Ch] [ebp-24h] BYREF
  float v33; // [esp+120h] [ebp-20h]
  float v34; // [esp+124h] [ebp-1Ch]
  float v35; // [esp+128h] [ebp-18h] BYREF
  float v36; // [esp+12Ch] [ebp-14h]
  float v37; // [esp+130h] [ebp-10h]
  _DWORD v38[3]; // [esp+134h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+140h] [ebp+0h]

  v38[0] = a2;
  v38[1] = retaddr;
  v35 = -4.0;
  v36 = -4.0;
  v37 = -4.0;
  v6 = *(unsigned __int8 (__thiscall **)(float *, int *, int, int))(*(_DWORD *)a1 + 872);
  v32 = 4.0;
  v33 = 4.0;
  v34 = 4.0;
  if ( v6(a1, a5, a3, a4) && sub_100DA7A0((int)a1, (int)v38, (int)a5, (int)a1, (float *)a5, 16449, 0) )
  {
    v7 = *a5;
    v37 = COERCE_FLOAT(&v32);
    v36 = COERCE_FLOAT(&v35);
    v8 = *((float *)a5 + 1);
    v35 = 1.0;
    v34 = 650.0;
    v31 = v7;
    v9 = *((float *)a5 + 2);
    v32 = v8;
    v33 = v9;
    v10 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 504);
    v30 = COERCE_FLOAT(v28);
    v11 = (float *)v10(a1);
    v12 = sub_101695D0(
            (int)v38,
            (int)a5,
            (int)a1,
            &v29,
            (int)a1,
            v11,
            v30,
            *(float *)&v31,
            v32,
            v33,
            v34,
            (float *)LODWORD(v35),
            (float *)LODWORD(v36));
  }
  else
  {
    v13 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 504))(a1, v26);
    v29 = *v13;
    v14 = v13[1];
    v36 = COERCE_FLOAT(v27);
    v30 = v14;
    v15 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 504);
    *(float *)&v31 = v13[2] + 64.0;
    v16 = (float *)v15(a1, v27);
    sub_1001F180(v23, v16, &v29);
    sub_10265570(v28, (int)a1, 0);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v23,
      1174421507,
      v28,
      v24);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v24, (int)v25, 255, 0, 0, 1, 5.0);
    if ( 1.0 != v25[8] )
      return 0;
    v17 = (int *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 504))(a1, v27);
    v12 = sub_101692F0(v26, (int)a1, *v17, v17[1], v17[2], *a5, a5[1], a5[2], -1.0, 1.0, 1, &v35, &v32);
  }
  v18 = *v12;
  v19 = v12[1];
  v20 = v12[2];
  if ( v18 != flt_106F1CA8 || v19 != flt_106F1CAC || v20 != flt_106F1CB0 )
  {
    result = 1;
    a1[1049] = v18;
    a1[1050] = v19;
    a1[1051] = v20;
    a1[1054] = *(float *)(dword_106B31C8 + 12) + 1.0;
    return result;
  }
  a1[1054] = *(float *)(dword_106B31C8 + 12) + 1.0;
  return 0;
}
