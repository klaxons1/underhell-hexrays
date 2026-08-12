// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_103BD110@<al>(
        char *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        int a7,
        float *a8,
        int a9)
{
  float *v9; // esi
  float *v10; // edi
  float v11; // edx
  char *v12; // ecx
  bool v13; // zf
  double v14; // st1
  double v15; // st7
  int v18; // [esp+28h] [ebp-178h] BYREF
  float v19[26]; // [esp+34h] [ebp-16Ch] BYREF
  _BYTE v20[12]; // [esp+9Ch] [ebp-104h] BYREF
  float v21; // [esp+A8h] [ebp-F8h] BYREF
  float v22; // [esp+ACh] [ebp-F4h]
  float v23; // [esp+B0h] [ebp-F0h]
  float v24[18]; // [esp+F4h] [ebp-ACh] BYREF
  __int16 v25; // [esp+13Ch] [ebp-64h]
  int v26; // [esp+140h] [ebp-60h]
  int v27; // [esp+144h] [ebp-5Ch]
  int v28; // [esp+148h] [ebp-58h]
  char v29; // [esp+14Ch] [ebp-54h]
  float v30[3]; // [esp+158h] [ebp-48h] BYREF
  float v31; // [esp+164h] [ebp-3Ch] BYREF
  float v32; // [esp+168h] [ebp-38h]
  float v33; // [esp+16Ch] [ebp-34h]
  float *v34; // [esp+170h] [ebp-30h]
  float *v35; // [esp+174h] [ebp-2Ch]
  float v36; // [esp+178h] [ebp-28h]
  float v37; // [esp+17Ch] [ebp-24h]
  float v38; // [esp+180h] [ebp-20h]
  float v39; // [esp+184h] [ebp-1Ch]
  float v40; // [esp+188h] [ebp-18h] BYREF
  float v41; // [esp+18Ch] [ebp-14h]
  float v42; // [esp+190h] [ebp-10h]
  int v43; // [esp+194h] [ebp-Ch]
  void *v44; // [esp+198h] [ebp-8h]
  void *retaddr; // [esp+1A0h] [ebp+0h]

  v43 = a2;
  v44 = retaddr;
  v9 = (float *)a5;
  v39 = *(float *)&a1;
  sub_1001F180(v19, (float *)(a5 + 4), a6);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    1174421555,
    a7,
    v20,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)&v21, 255, 0, 0, 1, -1.0);
  v10 = (float *)sub_101811E0("btbullet", -1);
  v35 = v10;
  if ( v10 )
  {
    (*(void (__thiscall **)(float *, float))(*(_DWORD *)v10 + 76))(v10, COERCE_FLOAT(LODWORD(v39)));
    v34 = v10 + 280;
    sub_100E86B0(v10 + 280, a5);
    v11 = *(float *)(a5 + 24);
    v41 = COERCE_FLOAT(&v18);
    v40 = COERCE_FLOAT(&v31);
    v12 = (char *)LODWORD(v39);
    v39 = COERCE_FLOAT("eyes");
    v42 = v11;
    *((_BYTE *)v10 + 1212) = 0;
    sub_100BEFA0(v12, (char *)LODWORD(v39), SLODWORD(v40), SLODWORD(v41));
    v13 = *(_DWORD *)(a5 + 44) == 7;
    v36 = v31;
    v37 = v32;
    v38 = v33;
    if ( v13 )
    {
      v40 = v21 - v31;
      v41 = v22 - v32;
      v42 = v23 - v33;
      off_10689714();
      qmemcpy(v19, (const void *)a5, 0x58u);
      v19[4] = v40;
      v19[5] = v41;
      v19[6] = v42;
      v19[1] = v36;
      v19[2] = v37;
      v19[3] = v38;
      sub_100E86B0(v34, (int)v19);
      v10 = v35;
      v9 = (float *)a5;
    }
    v30[0] = v40 * 12.0 + v36;
    v30[1] = v39 * 12.0 + v37;
    v30[2] = 12.0 * v42 + v38;
    sub_10107970(v10, v30, &v40, SLODWORD(v39));
    v24[6] = 0.0;
    v24[7] = 0.0;
    v41 = COERCE_FLOAT(v24);
    v24[8] = 0.0;
    v24[9] = 0.0;
    v40 = COERCE_FLOAT("TracerSound");
    v24[10] = 0.0;
    v24[13] = 0.0;
    v24[11] = 0.0;
    v24[17] = 0.0;
    v25 = 0;
    v24[14] = 1.0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v24[15] = 0.0;
    LODWORD(v24[12]) = 16;
    v24[16] = 0.0;
    v24[3] = v21;
    v24[4] = v22;
    v24[5] = v23;
    v14 = v9[6];
    v15 = v9[5] * 400.0 + v22;
    v24[0] = v9[4] * 400.0 + v21;
    v24[1] = v15;
    v24[2] = 400.0 * v14 + v23;
    sub_1028E890((int)"TracerSound", (int)v24);
  }
  *a8 = v21;
  a8[1] = v22;
  a8[2] = v23;
  return 1;
}
