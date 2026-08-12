// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_1018EAC0@<al>(
        float **a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  int (__thiscall *v10)(float **); // edx
  int (__thiscall *v11)(float **); // edx
  float *v12; // eax
  int (__thiscall *v14)(float **, _DWORD, float **, void *, float *); // eax
  int v15; // eax
  float *v16; // edx
  int (__thiscall *v17)(float **); // edx
  double v18; // st7
  int (__thiscall *v19)(float **); // edx
  float *v20; // eax
  float *v21; // edx
  float *v22; // eax
  int (__thiscall *v23)(float **); // edx
  double v24; // st6
  double v25; // st7
  int (__thiscall *v26)(float **); // edx
  float *v27; // eax
  float v29[20]; // [esp+34h] [ebp-19Ch] BYREF
  float v30[3]; // [esp+84h] [ebp-14Ch] BYREF
  float v31[19]; // [esp+90h] [ebp-140h] BYREF
  float v32[3]; // [esp+DCh] [ebp-F4h] BYREF
  float v33[19]; // [esp+E8h] [ebp-E8h] BYREF
  _BYTE v34[12]; // [esp+134h] [ebp-9Ch] BYREF
  float v35[8]; // [esp+140h] [ebp-90h] BYREF
  float v36; // [esp+160h] [ebp-70h]
  _BYTE v37[12]; // [esp+18Ch] [ebp-44h] BYREF
  _BYTE v38[12]; // [esp+198h] [ebp-38h] BYREF
  float *v39; // [esp+1A4h] [ebp-2Ch] BYREF
  float *v40; // [esp+1A8h] [ebp-28h]
  float v41; // [esp+1ACh] [ebp-24h]
  float v42; // [esp+1B0h] [ebp-20h] BYREF
  float v43; // [esp+1B4h] [ebp-1Ch] BYREF
  int v44; // [esp+1B8h] [ebp-18h] BYREF
  float v45; // [esp+1BCh] [ebp-14h]
  float v46; // [esp+1C0h] [ebp-10h]
  float **v47; // [esp+1C4h] [ebp-Ch] BYREF
  void *v48; // [esp+1C8h] [ebp-8h]
  float *v49; // [esp+1CCh] [ebp-4h]
  void *retaddr; // [esp+1D0h] [ebp+0h]

  v47 = (float **)a2;
  v48 = retaddr;
  v42 = COERCE_FLOAT(
          (*((int (__cdecl **)(float **, int, float **, _DWORD, _BYTE *, int, int))*a1 + 243))(
            &v39,
            16395,
            a1,
            0,
            v34,
            a3,
            a4));
  v10 = (int (__thiscall *)(float **))*((_DWORD *)*a1 + 242);
  v41 = COERCE_FLOAT(&v44);
  v40 = (float *)v10(a1);
  v11 = (int (__thiscall *)(float **))*((_DWORD *)*a1 + 9);
  v39 = a5;
  v12 = (float *)v11(a1);
  sub_10012C30(
    (int)&v47,
    (int)a1,
    v12,
    v39,
    v40,
    (float *)LODWORD(v41),
    SLODWORD(v42),
    SLODWORD(v43),
    v44,
    SLODWORD(v45));
  if ( v36 >= 1.0
    || !sub_100E2000(a9, 0.0099999998) && (!sub_100903A0(a8, a9, v35, a7, &v42, &v43) || v42 < 0.0 && v43 < 0.0) )
  {
    goto LABEL_6;
  }
  v14 = (int (__thiscall *)(float **, _DWORD, float **, void *, float *))*((_DWORD *)*a1 + 9);
  v41 = *((float *)a1 + 921);
  v15 = v14(a1, LODWORD(v46), v47, v48, v49);
  v16 = *a1;
  v44 = *(int *)v15;
  v17 = (int (__thiscall *)(float **))*((_DWORD *)v16 + 243);
  v45 = *(float *)(v15 + 4);
  v18 = *(float *)(v15 + 8);
  v49 = v32;
  v48 = 0;
  v47 = a1;
  v46 = v18 + v41;
  v45 = COERCE_FLOAT(v38);
  *(float *)&v44 = COERCE_FLOAT(v17(a1));
  v19 = (int (__thiscall *)(float **))*((_DWORD *)*a1 + 242);
  v43 = COERCE_FLOAT(v37);
  *(float *)&v20 = COERCE_FLOAT(v19(a1));
  v21 = *a1;
  v42 = *(float *)&v20;
  v41 = COERCE_FLOAT(&v44);
  v22 = (float *)(*((int (__thiscall **)(float **))v21 + 9))(a1);
  sub_10012C30(
    (int)&v47,
    (int)a1,
    v22,
    (float *)LODWORD(v41),
    (float *)LODWORD(v42),
    (float *)LODWORD(v43),
    v44,
    SLODWORD(v45),
    SLODWORD(v46),
    (int)v47);
  v23 = (int (__thiscall *)(float **))*((_DWORD *)*a1 + 243);
  v44 = *(int *)a5;
  v24 = a5[1];
  v47 = (float **)v34;
  v45 = v24;
  v46 = 0.0;
  v25 = v33[2] - v32[2] + a5[2];
  v45 = *(float *)&a1;
  v44 = 16395;
  v43 = COERCE_FLOAT(v37);
  v46 = v25;
  v42 = COERCE_FLOAT(v23(a1));
  v26 = (int (__thiscall *)(float **))*((_DWORD *)*a1 + 242);
  v41 = COERCE_FLOAT(v38);
  v27 = (float *)v26(a1);
  sub_10012C30(
    (int)&v47,
    (int)a1,
    v33,
    (float *)&v44,
    v27,
    (float *)LODWORD(v41),
    SLODWORD(v42),
    SLODWORD(v43),
    v44,
    SLODWORD(v45));
  if ( v36 >= 1.0 )
    goto LABEL_6;
  if ( sub_100E2000(a9, 0.0099999998) )
    return 0;
  if ( !sub_100903A0(a8, a9, v35, a7, &v42, &v43) )
  {
LABEL_6:
    v46 = v35[2] - a6;
    sub_1000E430(v29, v35, (float *)LODWORD(v35[1]));
    sub_1012D400(&v39, 0, 0);
    (*(void (__thiscall **)(int, float *, int, float **, float *))(*(_DWORD *)dword_104131A0 + 16))(
      dword_104131A0,
      v29,
      16395,
      &v39,
      v30);
    if ( *(_DWORD *)(dword_10439134 + 48) )
      sub_10130AC0(v30, v31, 255, 0, 0, 1, 5.0);
    return 1.0 != v31[8];
  }
  if ( v42 < 0.0 )
  {
    if ( v43 >= 0.0 )
      return 0;
    goto LABEL_6;
  }
  return 0;
}
