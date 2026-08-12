// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10023930(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        float *a7,
        int a8)
{
  double v8; // st7
  double v9; // st5
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // rt0
  double v14; // st5
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  int v18; // eax
  double v19; // st7
  double v20; // st7
  double v21; // st7
  float v22[22]; // [esp+24h] [ebp-18Ch] BYREF
  _BYTE v23[12]; // [esp+7Ch] [ebp-134h] BYREF
  float v24; // [esp+88h] [ebp-128h] BYREF
  float v25; // [esp+8Ch] [ebp-124h]
  float v26; // [esp+90h] [ebp-120h]
  float v27; // [esp+94h] [ebp-11Ch]
  float v28; // [esp+98h] [ebp-118h]
  float v29; // [esp+9Ch] [ebp-114h]
  float v30; // [esp+A8h] [ebp-108h]
  char v31; // [esp+B3h] [ebp-FDh]
  float v32[18]; // [esp+D4h] [ebp-DCh] BYREF
  int v33; // [esp+11Ch] [ebp-94h]
  float v34; // [esp+12Ch] [ebp-84h] BYREF
  float v35; // [esp+130h] [ebp-80h]
  float v36; // [esp+134h] [ebp-7Ch]
  float v37; // [esp+138h] [ebp-78h]
  float v38; // [esp+13Ch] [ebp-74h]
  float v39; // [esp+140h] [ebp-70h]
  float v40; // [esp+144h] [ebp-6Ch]
  float v41; // [esp+148h] [ebp-68h]
  float v42; // [esp+14Ch] [ebp-64h]
  float v43; // [esp+150h] [ebp-60h]
  float v44; // [esp+154h] [ebp-5Ch]
  float v45; // [esp+158h] [ebp-58h]
  int v46; // [esp+15Ch] [ebp-54h]
  int v47; // [esp+160h] [ebp-50h]
  float v48; // [esp+164h] [ebp-4Ch]
  float v49; // [esp+168h] [ebp-48h]
  float v50; // [esp+16Ch] [ebp-44h]
  int v51; // [esp+170h] [ebp-40h]
  __int16 v52; // [esp+174h] [ebp-3Ch]
  int v53; // [esp+178h] [ebp-38h]
  int v54; // [esp+17Ch] [ebp-34h]
  int v55; // [esp+180h] [ebp-30h]
  char v56; // [esp+184h] [ebp-2Ch]
  float v57[3]; // [esp+190h] [ebp-20h] BYREF
  void (__thiscall **v58)(int, _BYTE *, int, int); // [esp+19Ch] [ebp-14h]
  int v59; // [esp+1A0h] [ebp-10h]
  int v60; // [esp+1A4h] [ebp-Ch]
  void *v61; // [esp+1A8h] [ebp-8h]
  void *retaddr; // [esp+1B0h] [ebp+0h]

  v60 = a2;
  v61 = retaddr;
  v8 = *a7;
  v59 = a1;
  v9 = a7[1];
  v46 = 0;
  v47 = 0;
  v10 = a7[2];
  v51 = 0;
  v11 = 16.0 * v10;
  v53 = 0;
  v12 = a6[3];
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v13 = v9 * 16.0;
  v57[0] = v8 * 16.0 + v12;
  v14 = a6[4];
  v52 = 0;
  v57[1] = v13 + v14;
  v57[2] = v11 + a6[5];
  v37 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  v45 = 0.0;
  v48 = 1.0;
  v49 = 0.0;
  v50 = 0.0;
  v40 = a6[6];
  v41 = a6[7];
  v42 = a6[8];
  v34 = a6[3];
  v35 = a6[4];
  v36 = a6[5];
  sub_1028E890("GlassImpact", &v34);
  sub_1001F180(v22, v57, a6 + 3);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v22,
    1174421507,
    a8,
    v23,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v23, (int)&v24, 255, 0, 0, 1, -1.0);
  if ( !v31 && 0.0 != a6[11] && 1.0 != v30 )
  {
    v58 = (void (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)v59 + 436);
    sub_102D9B20();
    v15 = sub_100B9D70(v58);
    (*v58)(v59, v23, v15, v59);
    v40 = v27;
    v41 = v28;
    v42 = v29;
    v34 = v24;
    v35 = v25;
    v36 = v26;
    sub_1028E890("GlassImpact", &v34);
    sub_1001F340(v32);
    v32[1] = v24;
    v16 = *(float *)(a5 + 44);
    v32[2] = v25;
    v17 = *(float *)(a5 + 48);
    v32[11] = v16;
    v32[3] = v26;
    v18 = *(_DWORD *)(a5 + 72);
    v19 = *a7;
    v32[12] = v17;
    v32[4] = v19;
    v20 = a7[1];
    LODWORD(v32[0]) = 1;
    v32[5] = v20;
    v33 = v18;
    v32[6] = a7[2];
    v32[7] = flt_106F1CA8;
    v32[8] = flt_106F1CAC;
    v32[9] = flt_106F1CB0;
    v21 = 1.0 - a6[11];
    v32[14] = *(float *)(a5 + 56);
    v32[10] = v21 * *(float *)(a5 + 40);
    if ( !v18 )
      v33 = v59;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v59 + 432))(v59, v32);
  }
}
