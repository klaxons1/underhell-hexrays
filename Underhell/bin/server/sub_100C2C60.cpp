void __userpurge sub_100C2C60(int a1@<ecx>, int a2@<ebp>, int a3)
{
  void (__thiscall *v4)(int, _DWORD, _DWORD, float *); // edx
  int v5; // eax
  int v6; // edi
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st5
  double v11; // rt2
  double v12; // st1
  double v13; // st6
  double v14; // st3
  double v15; // st5
  double v16; // st7
  double v17; // st4
  double v18; // st4
  double v19; // st3
  double v20; // st2
  double v21; // st1
  double v22; // st0
  double v23; // st6
  double v24; // st4
  float v25[20]; // [esp-160h] [ebp-16Ch] BYREF
  _BYTE v26[12]; // [esp-110h] [ebp-11Ch] BYREF
  float v27; // [esp-104h] [ebp-110h] BYREF
  float v28; // [esp-100h] [ebp-10Ch]
  float v29; // [esp-FCh] [ebp-108h]
  _BYTE v30[31]; // [esp-F8h] [ebp-104h] BYREF
  char v31; // [esp-D9h] [ebp-E5h]
  float v32; // [esp-B8h] [ebp-C4h]
  float v33; // [esp-A8h] [ebp-B4h]
  float v34[3]; // [esp-A0h] [ebp-ACh] BYREF
  float v35[3]; // [esp-94h] [ebp-A0h] BYREF
  float v36[3]; // [esp-88h] [ebp-94h] BYREF
  float v37[3]; // [esp-7Ch] [ebp-88h] BYREF
  float v38[3]; // [esp-70h] [ebp-7Ch] BYREF
  float v39[3]; // [esp-64h] [ebp-70h] BYREF
  _DWORD v40[3]; // [esp-58h] [ebp-64h] BYREF
  float v41; // [esp-4Ch] [ebp-58h]
  float v42; // [esp-48h] [ebp-54h]
  float v43; // [esp-44h] [ebp-50h]
  float v44; // [esp-40h] [ebp-4Ch]
  float v45; // [esp-3Ch] [ebp-48h]
  float v46; // [esp-38h] [ebp-44h]
  float v47; // [esp-34h] [ebp-40h] BYREF
  float v48; // [esp-30h] [ebp-3Ch]
  float v49; // [esp-2Ch] [ebp-38h]
  float v50; // [esp-28h] [ebp-34h] BYREF
  float v51; // [esp-24h] [ebp-30h]
  float v52; // [esp-20h] [ebp-2Ch]
  float v53; // [esp-1Ch] [ebp-28h]
  int v54; // [esp-18h] [ebp-24h]
  float v55; // [esp-14h] [ebp-20h] BYREF
  float v56; // [esp-10h] [ebp-1Ch]
  float v57; // [esp-Ch] [ebp-18h]
  int v58; // [esp-8h] [ebp-14h]
  float v59; // [esp-4h] [ebp-10h]
  int v60; // [esp+0h] [ebp-Ch]
  void *v61; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v60 = a2;
  v61 = retaddr;
  if ( *(_DWORD *)(a1 + 888) )
  {
    sub_10265570(a1, *(_DWORD *)(a1 + 420));
    v4 = *(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)a1 + 528);
    v40[0] = &CTraceFilterSkipNPCs::`vftable';
    v4(a1, 0, 0, &v55);
    v5 = *(_DWORD *)(a1 + 888);
    v54 = 0;
    if ( *(int *)(v5 + 4080) > 0 )
    {
      v58 = 0;
      do
      {
        v6 = v5 + v58;
        if ( (unsigned __int8)sub_10100060(v5 + v58) && *(_DWORD *)(v6 + 4) == 3 )
        {
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          v7 = *(float *)(v6 + 96) - *(float *)(a1 + 580);
          v8 = *(_DWORD *)(a1 + 252) >> 11;
          v9 = *(float *)(v6 + 100) - *(float *)(a1 + 584);
          v10 = *(float *)(v6 + 104) - *(float *)(a1 + 588);
          v33 = v56 * v9;
          v32 = v55 * v7 * v55;
          v11 = v57 * v10 * v57;
          v44 = v7 - v32;
          v12 = v9;
          v13 = v57;
          v45 = v12 - v33 * v56;
          v14 = v10;
          v15 = v56;
          v16 = v55;
          v46 = v14 - v11;
          v17 = *(float *)(v6 + 80);
          v41 = v55 * v17;
          v42 = v56 * v17;
          v43 = v17 * v57;
          if ( (v8 & 1) != 0 )
          {
            sub_100DAE60(a1);
            v16 = v55;
            v15 = v56;
            v13 = v57;
          }
          v18 = *(float *)(a1 + 580) + v44 + v41;
          v19 = v45 + *(float *)(a1 + 584) + v42;
          v20 = *(float *)(a1 + 588) + v46 + v43;
          v21 = *(float *)(v6 + 76);
          v47 = v21 * v16 + v18;
          v48 = v15 * v21 + v19;
          v49 = v21 * v13 + v20;
          v22 = -*(float *)(v6 + 76);
          v50 = v18 + v16 * v22;
          v51 = v19 + v15 * v22;
          v52 = v22 * v13 + v20;
          if ( *(float *)(v6 + 84) <= 1.0 )
            v23 = 1.0;
          else
            v23 = *(float *)(v6 + 84);
          v59 = v23;
          v36[0] = v23;
          v36[1] = v23;
          v36[2] = 1.0;
          v53 = -v23;
          v37[0] = v53;
          v37[1] = v53;
          v37[2] = 0.0;
          sub_1001F200(v25, &v47, &v50, v37, v36);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v25,
            33570827,
            v40,
            v26);
          if ( !v31 )
            goto LABEL_23;
          v34[0] = v59;
          v34[1] = v59;
          v34[2] = 1.0;
          v35[0] = v53;
          v35[1] = v53;
          v35[2] = 0.0;
          sub_1001F200(v25, (float *)(v6 + 140), (float *)(v6 + 96), v35, v34);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v25,
            33570827,
            v40,
            v26);
          v47 = v27;
          v48 = v28;
          v49 = v29;
          v24 = -*(float *)(v6 + 76);
          v50 = v27 + v55 * v24;
          v51 = v28 + v56 * v24;
          v52 = v24 * v57 + v29;
          v39[0] = v59;
          v39[1] = v59;
          v39[2] = 1.0;
          v38[0] = v53;
          v38[1] = v53;
          v38[2] = 0.0;
          sub_1001F200(v25, &v47, &v50, v38, v39);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v25,
            33570827,
            v40,
            v26);
          if ( !v31 )
          {
LABEL_23:
            if ( (unsigned __int8)sub_10163140(v26) )
            {
              sub_100FFFF0(&v27, v30);
              sub_100FFF00(v30);
            }
            else
            {
              sub_100FFEC0(&v27);
              if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
                sub_100DAE60(a1);
              sub_100FFEE0(a1 + 704);
            }
          }
        }
        v5 = *(_DWORD *)(a1 + 888);
        v58 += 340;
        ++v54;
      }
      while ( v54 < *(_DWORD *)(v5 + 4080) );
    }
  }
}
