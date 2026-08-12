int __userpurge sub_1001A540@<eax>(int *a1@<ecx>, int a2@<edi>, float *a3, float a4)
{
  int result; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  int v13; // edx
  int (__thiscall *v14)(int *, float *); // edx
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st6
  double v19; // st6
  double v20; // rt1
  double v21; // st6
  double v22; // st7
  double v23; // st7
  double v24; // st7
  int v25; // eax
  double v26; // st7
  double v27; // st7
  double v28; // st7
  float v29; // [esp+14h] [ebp-1CCh]
  float v30; // [esp+14h] [ebp-1CCh]
  float v31; // [esp+14h] [ebp-1CCh]
  float v32; // [esp+18h] [ebp-1C8h]
  float v33; // [esp+18h] [ebp-1C8h]
  float v34; // [esp+18h] [ebp-1C8h]
  float v35; // [esp+1Ch] [ebp-1C4h]
  float v36; // [esp+1Ch] [ebp-1C4h]
  float v37; // [esp+1Ch] [ebp-1C4h]
  int v39; // [esp+20h] [ebp-1C0h]
  int v40; // [esp+20h] [ebp-1C0h]
  _BYTE v41[48]; // [esp+2Ch] [ebp-1B4h] BYREF
  _BYTE v42[48]; // [esp+5Ch] [ebp-184h] BYREF
  _BYTE v43[48]; // [esp+8Ch] [ebp-154h] BYREF
  _BYTE v44[48]; // [esp+BCh] [ebp-124h] BYREF
  _BYTE v45[48]; // [esp+ECh] [ebp-F4h] BYREF
  _BYTE v46[48]; // [esp+11Ch] [ebp-C4h] BYREF
  _BYTE v47[48]; // [esp+14Ch] [ebp-94h] BYREF
  _BYTE v48[48]; // [esp+17Ch] [ebp-64h] BYREF
  float v49[3]; // [esp+1ACh] [ebp-34h] BYREF
  int v50; // [esp+1B8h] [ebp-28h]
  float v51[3]; // [esp+1BCh] [ebp-24h] BYREF
  float v52[2]; // [esp+1C8h] [ebp-18h] BYREF
  float v53; // [esp+1D0h] [ebp-10h]
  float v54; // [esp+1D4h] [ebp-Ch] BYREF
  float v55; // [esp+1D8h] [ebp-8h]
  float v56; // [esp+1DCh] [ebp-4h]
  float v57; // [esp+1E8h] [ebp+8h]
  float v58; // [esp+1ECh] [ebp+Ch]

  result = (*(int (__thiscall **)(int *))(*a1 + 1672))(a1);
  if ( (result & 0x1000) != 0 )
  {
    v6 = sub_100BEF30("eyes");
    v7 = sub_100BEF30("chest");
    v8 = sub_100BEF30("forward");
    v50 = v8;
    if ( v6 <= 0 || v8 <= 0 )
    {
      return sub_10020480(4096);
    }
    else
    {
      (*(void (__thiscall **)(int *, int, _BYTE *, int))(*a1 + 796))(a1, v6, v44, a2);
      (*(void (__thiscall **)(int *, int, _BYTE *))(*a1 + 796))(a1, v50, v48);
      sub_10424F80(v48, v43);
      if ( v7 <= 0 )
      {
        v12 = 0.0;
        v54 = 0.0;
        v55 = 0.0;
      }
      else
      {
        (*(void (__thiscall **)(int *, int, _BYTE *))(*a1 + 796))(a1, v7, v42);
        sub_10424F80(v42, v46);
        sub_10421E30(v46, v44, v45);
        sub_10421A90(v45, &v54);
        v9 = sub_100BE820(a1[964]);
        v39 = a1[965];
        v55 = v55 - v9;
        v10 = sub_100BE820(v39);
        v40 = a1[966];
        v54 = v54 - v10;
        v11 = sub_100BE820(v40);
        v12 = v56 - v11;
      }
      v13 = *a1;
      v56 = v12;
      v14 = *(int (__thiscall **)(int *, float *))(v13 + 504);
      qmemcpy(v47, v48, sizeof(v47));
      v15 = (float *)v14(a1, v52);
      v51[0] = *a3 - *v15;
      v51[1] = a3[1] - v15[1];
      v51[2] = a3[2] - v15[2];
      if ( *(_DWORD *)(dword_106903E4 + 48) )
      {
        off_10689714();
        sub_10421C60(v51, v48, v52);
        v16 = v52[0];
        if ( v52[0] <= 1.0 )
        {
          if ( v16 < 0.1 )
            v16 = 0.1;
        }
        else
        {
          v16 = 1.0;
        }
        v53 = v16 * v53;
        off_10689714();
        sub_10421C00(v52, v48, v51);
        v17 = v52[0] + 1.0 + v52[0] + 1.0;
        v18 = 1.0;
        if ( v17 > 1.0 || (v18 = 0.0, v17 < 0.0) )
          v17 = v18;
        a4 = v17 * a4;
      }
      sub_100FF4B0(v47, v51);
      sub_10421E30(v43, v47, v41);
      sub_10421A90(v41, v49);
      v19 = 1.0 - a4 + ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 2292))(a1) * a4;
      v58 = v19;
      v20 = v19;
      v21 = 1.0 - v19;
      v57 = v21;
      v22 = v20 * *((float *)a1 + 932) + v21 * v49[0];
      v29 = v22;
      sub_10424B10(v29, *((float *)a1 + 932), 10.0);
      *((float *)a1 + 932) = v22;
      v23 = *((float *)a1 + 933) * v58 + v49[1] * v57;
      v30 = v23;
      sub_10424B10(v30, *((float *)a1 + 933), 30.0);
      *((float *)a1 + 933) = v23;
      v24 = *((float *)a1 + 934) * v58 + v49[2] * v57;
      v31 = v24;
      sub_10424B10(v31, *((float *)a1 + 934), 10.0);
      v25 = a1[970];
      *((float *)a1 + 934) = v24;
      v26 = sub_100ED7A0(v25) + *((float *)a1 + 933);
      v32 = v26;
      sub_100BEA10(a1[964], v32, v55);
      v35 = v26;
      sub_10019CE0(a1, a1[964], v35);
      v27 = sub_100ED7A0(a1[971]) + *((float *)a1 + 932);
      v33 = v27;
      sub_100BEA10(a1[965], v33, v54);
      v36 = v27;
      sub_10019CE0(a1, a1[965], v36);
      v28 = sub_100ED7A0(a1[972]) + *((float *)a1 + 934);
      v34 = v28;
      sub_100BEA10(a1[966], v34, v56);
      v37 = v28;
      return sub_10019CE0(a1, a1[966], v37);
    }
  }
  return result;
}
