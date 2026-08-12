void __userpurge sub_103531F0(
        int a1@<ecx>,
        int a2@<ebp>,
        float *a3@<edi>,
        int a4@<esi>,
        float *a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11)
{
  bool v11; // zf
  float *v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  unsigned __int8 (__thiscall *v16)(int, float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  int (__thiscall *v21)(int); // edx
  float *v22; // eax
  double v23; // st7
  double v24; // st5
  double v25; // st4
  double v26; // rt1
  double v27; // st5
  double v28; // st7
  double v29; // st6
  int v30; // edx
  void (__thiscall *v31)(int); // edx
  float *v32; // eax
  float v33; // [esp+1Ch] [ebp-318h]
  int v34; // [esp+28h] [ebp-30Ch]
  int v35; // [esp+2Ch] [ebp-308h]
  int v36; // [esp+30h] [ebp-304h]
  float v39; // [esp+40h] [ebp-2F4h] BYREF
  float v40; // [esp+44h] [ebp-2F0h]
  float v41; // [esp+48h] [ebp-2ECh]
  float v42; // [esp+4Ch] [ebp-2E8h]
  float v43; // [esp+50h] [ebp-2E4h]
  _DWORD v44[20]; // [esp+1D0h] [ebp-164h] BYREF
  _BYTE v45[12]; // [esp+220h] [ebp-114h] BYREF
  float v46[19]; // [esp+22Ch] [ebp-108h] BYREF
  _DWORD v47[2]; // [esp+278h] [ebp-BCh] BYREF
  int v48; // [esp+280h] [ebp-B4h] BYREF
  _DWORD v49[3]; // [esp+28Ch] [ebp-A8h] BYREF
  float v50[4]; // [esp+298h] [ebp-9Ch] BYREF
  float v51[14]; // [esp+2A8h] [ebp-8Ch] BYREF
  __int16 v52; // [esp+2E0h] [ebp-54h]
  int v53; // [esp+2E4h] [ebp-50h]
  int v54; // [esp+2E8h] [ebp-4Ch]
  int v55; // [esp+2ECh] [ebp-48h]
  char v56; // [esp+2F0h] [ebp-44h]
  float v57; // [esp+300h] [ebp-34h]
  int v58; // [esp+304h] [ebp-30h]
  float v59; // [esp+308h] [ebp-2Ch] BYREF
  float v60; // [esp+30Ch] [ebp-28h]
  float v61; // [esp+310h] [ebp-24h]
  int v62; // [esp+314h] [ebp-20h]
  int i; // [esp+318h] [ebp-1Ch]
  float v64; // [esp+31Ch] [ebp-18h] BYREF
  float v65; // [esp+320h] [ebp-14h]
  float v66; // [esp+324h] [ebp-10h]
  int v67; // [esp+328h] [ebp-Ch]
  void *v68; // [esp+32Ch] [ebp-8h]
  void *retaddr; // [esp+334h] [ebp+0h]

  v67 = a2;
  v68 = retaddr;
  v11 = *(_DWORD *)(dword_106E6A14 + 48) == 4;
  v62 = a1;
  if ( v11 )
    sub_1011BB20((int)(a5 + 3), (int)&a6, (int)&a9, 255, 255, 0, 1, 5.0);
  v12 = a5 + 3;
  v64 = a9 + a5[3];
  v65 = a5[4] + a10;
  v66 = a5[5] + a11;
  v59 = a6 + a5[3];
  v60 = a5[4] + a7;
  v61 = a5[5] + a8;
  sub_1025F990(v47, (int)&v39, 100, 0);
  v13 = sub_1025F9C0((int)&v59, (int)&v64, (int)v47);
  v14 = 0;
  v58 = v13;
  for ( i = 0; v14 < v58; i = v14 )
  {
    v15 = *((_DWORD *)&v39 + v14);
    if ( v15 != v62 && *(_BYTE *)(v15 + 225) )
    {
      v16 = *(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v15 + 320);
      v57 = 150.0;
      if ( v16(v15, a3, a4, LODWORD(v39), LODWORD(v40), LODWORD(v41), LODWORD(v42), LODWORD(v43)) )
      {
        if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
          sub_100DAE60(v15);
        v17 = *(float *)(v15 + 580) - *v12;
        v18 = *(float *)(v15 + 584) - a5[4];
        v19 = *(float *)(v15 + 588) - a5[5];
        v43 = 0.0;
        v42 = 200.0;
        v41 = 300.0;
        v40 = 0.0;
        v39 = v17 * v17 + v18 * v18 + v19 * v19;
        v39 = off_10689708(v39);
        v20 = sub_10134630(v39, v40, v41, v42, v43);
      }
      else
      {
        v20 = v57;
      }
      v41 = v20;
      sub_10248110((int)v44, v62, v62, v41, 0x4000000, 0);
      v21 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 520);
      v43 = 0.0;
      LODWORD(v42) = a5 + 3;
      v41 = COERCE_FLOAT(&v48);
      v22 = (float *)v21(v15);
      v64 = *v22 - *v12;
      v65 = v22[1] - a5[4];
      v66 = v22[2] - a5[5];
      off_10689714();
      v23 = a5[6] * 64.0;
      v24 = a5[7] * 64.0;
      v25 = a5[8];
      v40 = COERCE_FLOAT(v44);
      v26 = v24;
      v27 = v23;
      v28 = v26 + a5[4];
      v29 = 64.0 * v25 + a5[5];
      *(float *)&v44[4] = v27 + *v12;
      *(float *)&v44[5] = v28;
      *(float *)&v44[6] = v29;
      *(float *)&v44[1] = v64 * 25000.0;
      *(float *)&v44[2] = v65 * 25000.0;
      *(float *)&v44[3] = 25000.0 * v66;
      sub_100D9E70((int *)v15, v15, v44);
      if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
        sub_100DAE60(v15);
      v30 = *(_DWORD *)(v15 + 252);
      v59 = *(float *)(v15 + 580);
      v60 = *(float *)(v15 + 584);
      v61 = *(float *)(v15 + 588) - 256.0;
      if ( (v30 & 0x800) != 0 )
        sub_100DAE60(v15);
      sub_1001F180(v51, (float *)(v15 + 580), &v59);
      sub_10265570(v49, v15, 0);
      v31 = *(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16);
      v40 = COERCE_FLOAT(v45);
      v39 = COERCE_FLOAT(v49);
      a4 = 33570827;
      a3 = v51;
      v31(dword_106B31F4);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v45, (int)v46, 255, 0, 0, 1, 5.0);
      if ( a5[11] < 1.0 )
      {
        v50[3] = 0.0;
        v51[0] = 0.0;
        v51[1] = 0.0;
        v51[5] = 0.0;
        v51[8] = 0.0;
        v51[6] = 0.0;
        v51[9] = 0.0;
        v51[7] = 0.0;
        v51[13] = 0.0;
        v52 = 0;
        v51[10] = 1.0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v51[11] = 0.0;
        v56 = 0;
        v51[12] = 128.0;
        v51[2] = v46[3];
        v51[3] = v46[4];
        v51[4] = v46[5];
        v50[0] = v46[0];
        v50[1] = v46[1];
        v50[2] = v46[2];
        sub_1028E890((int)"AR2Explosion", (int)v50);
      }
      if ( (double)*(int *)(v15 + 220) <= 0.0
        && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 208))(v15)
        && (*(_DWORD *)(v15 + 252) & 0x8000000) == 0 )
      {
        v34 = LODWORD(flt_106F1CA8);
        v35 = LODWORD(flt_106F1CAC);
        v36 = LODWORD(flt_106F1CB0);
        v33 = *(float *)(dword_106B31C8 + 12);
        v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 208))(v15);
        sub_100C3210(v32, 0, v33, 1, 0, v34, v35, v36, 0);
      }
    }
    v14 = i + 1;
  }
}
