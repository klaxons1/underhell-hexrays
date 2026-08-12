char __usercall sub_1002FEE0@<al>(int a1@<ebp>, float *a2, float *a3, int a4, float a5, char a6)
{
  int v6; // edi
  double v7; // st4
  double v8; // rt0
  double v9; // st5
  double v10; // st7
  double v11; // st5
  double v12; // st6
  double v13; // st2
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  int v18; // [esp+38h] [ebp-10Ch] BYREF
  int v19; // [esp+44h] [ebp-100h] BYREF
  _BYTE v20[12]; // [esp+50h] [ebp-F4h] BYREF
  float v21; // [esp+5Ch] [ebp-E8h] BYREF
  float v22; // [esp+60h] [ebp-E4h]
  float v23; // [esp+64h] [ebp-E0h]
  float v24; // [esp+7Ch] [ebp-C8h]
  float v25[16]; // [esp+A8h] [ebp-9Ch] BYREF
  char v26; // [esp+E8h] [ebp-5Ch]
  bool v27; // [esp+E9h] [ebp-5Bh]
  float v28[3]; // [esp+104h] [ebp-40h] BYREF
  float v29[3]; // [esp+110h] [ebp-34h] BYREF
  float v30; // [esp+11Ch] [ebp-28h] BYREF
  float v31; // [esp+120h] [ebp-24h]
  float v32; // [esp+124h] [ebp-20h]
  float v33; // [esp+128h] [ebp-1Ch] BYREF
  float v34; // [esp+12Ch] [ebp-18h]
  float v35; // [esp+130h] [ebp-14h]
  int v36; // [esp+134h] [ebp-10h]
  int v37; // [esp+138h] [ebp-Ch]
  void *v38; // [esp+13Ch] [ebp-8h]
  void *retaddr; // [esp+144h] [ebp+0h]

  v37 = a1;
  v38 = retaddr;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v36 = sub_10261B20();
    v6 = v36;
  }
  else
  {
    v6 = 0;
    v36 = 0;
  }
  v30 = 0.0;
  v32 = 0.0;
  v31 = 0.0;
  while ( 1 )
  {
    sub_10422220(&v30, v28);
    v7 = a3[2];
    v8 = v28[1] * a5 + a3[1];
    v9 = v28[0] * a5 + *a3;
    v33 = v9;
    v10 = v9;
    v34 = v8;
    v11 = a5 * v28[2] + v7;
    v12 = v8;
    v35 = v11;
    if ( !a6 || !v6 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v6 + 872))(v6, &v33) )
    {
      v12 = v34;
      v11 = v35;
      v10 = v33;
      break;
    }
LABEL_17:
    v16 = v31 + 18.0;
    v31 = v16;
    if ( v16 >= 360.0 )
      return 0;
  }
  v25[4] = v10 - v10;
  v25[5] = v12 - v12;
  v13 = v11 - 8192.0 - v11;
  v25[6] = v13;
  v27 = 0.0 != v13 * v13 + (v10 - v10) * (v10 - v10) + (v12 - v12) * (v12 - v12);
  v25[14] = 0.0;
  v25[13] = 0.0;
  v25[12] = 0.0;
  v25[10] = 0.0;
  v26 = 1;
  v25[9] = 0.0;
  v25[8] = 0.0;
  v25[0] = v10;
  v25[1] = v12;
  v25[2] = v11;
  sub_10265570(a4, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v25,
    1174421507,
    &v18,
    v20);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)&v21, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v24 )
    goto LABEL_17;
  v14 = (float *)sub_10073730(*(_DWORD *)(a4 + 1676));
  v15 = (float *)sub_10073710(*(_DWORD *)(a4 + 1676));
  v29[0] = v21;
  v29[1] = v22;
  v29[2] = v23 + 10.0;
  sub_1001F200(v25, &v21, v29, v15, v14);
  sub_10265570(a4, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v25,
    33701899,
    &v19,
    v20);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)&v21, 255, 255, 0, 1, -1.0);
  if ( 1.0 != v24 || !(unsigned __int8)sub_1007A470(&v21, 33701899) )
  {
    v6 = v36;
    goto LABEL_17;
  }
  *a2 = v21;
  a2[1] = v22;
  a2[2] = v23;
  return 1;
}
