char __userpurge sub_102EB5E0@<al>(int a1@<ecx>, int *a2@<edi>, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  bool v5; // zf
  int v7; // edi
  int v8; // edx
  int v9; // ebx
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  int v17; // edx
  double v18; // st7
  int (__thiscall *v19)(_DWORD *); // eax
  float *v20; // edi
  float *v21; // eax
  double v22; // st7
  double v23; // st3
  bool v24; // c0
  bool v25; // c3
  double v26; // st7
  int (__thiscall *v27)(_DWORD *); // eax
  float *v28; // eax
  int v29; // edx
  double v30; // st7
  int (__thiscall *v31)(_DWORD *); // eax
  float *v32; // eax
  int (__thiscall *v33)(_DWORD *); // eax
  float *v34; // eax
  int v35; // edx
  double v36; // st7
  int (__thiscall *v37)(_DWORD *); // eax
  float *v38; // eax
  double v39; // st6
  double v40; // st6
  long double v41; // st7
  int (__thiscall *v42)(_DWORD *, int *); // eax
  long double v43; // st7
  float *v44; // eax
  float *v45; // eax
  int v46; // edx
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  int v50; // edx
  int v51; // eax
  float *v53; // eax
  float *v54; // [esp-10h] [ebp-114h]
  float v55; // [esp+4h] [ebp-100h]
  float v57[3]; // [esp+14h] [ebp-F0h] BYREF
  int v58[3]; // [esp+20h] [ebp-E4h] BYREF
  int v59[8]; // [esp+2Ch] [ebp-D8h] BYREF
  float v60; // [esp+4Ch] [ebp-B8h]
  _DWORD v61[4]; // [esp+74h] [ebp-90h] BYREF
  _DWORD v62[4]; // [esp+84h] [ebp-80h] BYREF
  int v63[3]; // [esp+94h] [ebp-70h] BYREF
  int v64[3]; // [esp+A0h] [ebp-64h] BYREF
  float v65; // [esp+ACh] [ebp-58h]
  float v66; // [esp+B0h] [ebp-54h]
  float v67; // [esp+B4h] [ebp-50h]
  float v68; // [esp+B8h] [ebp-4Ch]
  float v69; // [esp+BCh] [ebp-48h]
  float v70; // [esp+C0h] [ebp-44h]
  float v71; // [esp+C4h] [ebp-40h]
  float v72; // [esp+C8h] [ebp-3Ch]
  float v73; // [esp+CCh] [ebp-38h]
  float v74; // [esp+D0h] [ebp-34h]
  int v75[3]; // [esp+D4h] [ebp-30h] BYREF
  float v76; // [esp+E0h] [ebp-24h]
  float v77; // [esp+E4h] [ebp-20h]
  float v78; // [esp+E8h] [ebp-1Ch]
  float v79; // [esp+ECh] [ebp-18h]
  float v80; // [esp+F0h] [ebp-14h]
  float v81; // [esp+F4h] [ebp-10h]
  int v82; // [esp+F8h] [ebp-Ch]
  float v83; // [esp+FCh] [ebp-8h]
  bool v84; // [esp+103h] [ebp-1h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF
  int v86; // [esp+10Ch] [ebp+8h]

  v4 = a4[48];
  v82 = a1;
  if ( (v4 & 2) == 0 && (v4 & 4) == 0 )
  {
    v5 = *(_DWORD *)(dword_106E1CAC + 48) == 0;
    v84 = *(_DWORD *)(dword_106E1CAC + 48) != 0;
    if ( !v5 && a3 )
      v84 = (a3[59] & 0x1000) != 0;
    v7 = *(_DWORD *)(a1 + 24) - 1;
    v86 = v7;
    if ( v7 < 0 )
      return 0;
    while ( 1 )
    {
      LODWORD(v83) = *(_DWORD *)(a1 + 12) + 8 * v7 + 4;
      if ( *(_DWORD *)LODWORD(v83) == -1
        || off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 2] != *(_DWORD *)LODWORD(v83) >> 12
        || !off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 1]
        || (*(_DWORD *)LODWORD(v83) == -1
         || off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 2] != *(_DWORD *)LODWORD(v83) >> 12
          ? (v8 = 0)
          : (v8 = off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 1]),
            (*(_BYTE *)(v8 + 252) & 1) != 0) )
      {
        v50 = *(_DWORD *)(a1 + 24);
        if ( v50 > 0 )
        {
          v51 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(v51 + 8 * v7) = *(_DWORD *)(v51 + 8 * v50 - 8);
          *(_DWORD *)(v51 + 8 * v7 + 4) = *(_DWORD *)(v51 + 8 * v50 - 4);
          --*(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        if ( *(_DWORD *)LODWORD(v83) == -1
          || off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 2] != *(_DWORD *)LODWORD(v83) >> 12 )
        {
          v9 = 0;
        }
        else
        {
          v9 = off_1061BE18[4 * (*(_DWORD *)LODWORD(v83) & 0xFFF) + 1];
        }
        if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
          sub_100DAE60(v9);
        v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*a4 + 576))(a4);
        v11 = *v10 - *(float *)(v9 + 580);
        v12 = v10[1] - *(float *)(v9 + 584);
        v13 = v10[2] - *(float *)(v9 + 588);
        if ( v13 * v13 + v12 * v12 + v11 * v11 >= *(float *)(*(_DWORD *)(v82 + 12) + 8 * v86) )
        {
          if ( a3 )
          {
            if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
              sub_100DAE60(v9);
            v16 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 576))(a3);
            v17 = *a3;
            v76 = *(float *)(v9 + 580) - *v16;
            v77 = *(float *)(v9 + 584) - v16[1];
            v18 = *(float *)(v9 + 588) - v16[2];
            v19 = *(int (__thiscall **)(_DWORD *))(v17 + 576);
            v78 = v18;
            v20 = (float *)v19(a3);
            v21 = (float *)(*(int (__thiscall **)(_DWORD *))(*a4 + 576))(a4);
            v79 = *v21 - *v20;
            v80 = v21[1] - v20[1];
            v81 = v21[2] - v20[2];
            v83 = off_10689714();
            v22 = off_10689714();
            v23 = v81 * v78 + v80 * v77 + v79 * v76;
            v68 = v23;
            if ( v23 > 0.0 )
            {
              v24 = v83 < v22;
              v25 = v83 == v22;
              v26 = v83;
              if ( !v24 && !v25 )
              {
                if ( v84 )
                {
                  v27 = *(int (__thiscall **)(_DWORD *))(*a3 + 576);
                  v72 = v76 * 128.0;
                  v73 = v77 * 128.0;
                  v74 = v78 * 128.0;
                  v28 = (float *)v27(a3);
                  v29 = *a3;
                  *(float *)v63 = *v28 + v72;
                  *(float *)&v63[1] = v28[1] + v73;
                  v30 = v28[2];
                  v31 = *(int (__thiscall **)(_DWORD *))(v29 + 576);
                  *(float *)&v63[2] = v30 + v74;
                  v32 = (float *)v31(a3);
                  sub_1011BC50(v32, (float *)v63, 255, 255, 255, 1, 0.1);
                  v33 = *(int (__thiscall **)(_DWORD *))(*a3 + 576);
                  v69 = v79 * 128.0;
                  v70 = v80 * 128.0;
                  v71 = 128.0 * v81;
                  v34 = (float *)v33(a3);
                  v35 = *a3;
                  *(float *)v64 = *v34 + v69;
                  *(float *)&v64[1] = v34[1] + v70;
                  v36 = v34[2];
                  v37 = *(int (__thiscall **)(_DWORD *))(v35 + 576);
                  *(float *)&v64[2] = v36 + v71;
                  v38 = (float *)v37(a3);
                  sub_1011BC50(v38, (float *)v64, 255, 0, 0, 1, 0.1);
                  v39 = v68;
                  v26 = v83;
                }
                else
                {
                  v39 = v23;
                }
                v40 = v39 * (v26 * -2.0);
                v41 = v40 * v40 - (v26 * v26 - *(float *)(*(_DWORD *)(v82 + 12) + 8 * v86)) * 4.0;
                if ( v41 >= 0.0 )
                {
                  v42 = *(int (__thiscall **)(_DWORD *, int *))(*a3 + 576);
                  v43 = (-v40 - sqrt(v41)) * 0.5;
                  v65 = v79 * v43;
                  v66 = v80 * v43;
                  v67 = v43 * v81;
                  v44 = (float *)v42(a3, a2);
                  *(float *)v75 = *v44 + v65;
                  *(float *)&v75[1] = v44[1] + v66;
                  *(float *)&v75[2] = v44[2] + v67;
                  sub_10265720(v61, (int)a4, (int)a3, 0);
                  a2 = v58;
                  v45 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 504))(a3);
                  sub_10023120(COERCE_FLOAT(&savedregs), (int)a3, v45, v57, (int)v75, 16395, (int)v61);
                  if ( v84 )
                  {
                    v46 = *a3;
                    v55 = 0.1;
                    if ( 1.0 == v60 )
                    {
                      v48 = (float *)(*(int (__thiscall **)(_DWORD *))(v46 + 576))(a3);
                      sub_1011BC50(v48, (float *)v75, 0, 255, 0, 1, v55);
                      v49 = (float *)sub_10019640((_DWORD *)v9);
                      sub_1011BC50(v49, (float *)v75, 255, 0, 0, 1, 0.1);
                    }
                    else
                    {
                      v47 = (float *)(*(int (__thiscall **)(_DWORD *))(v46 + 576))(a3);
                      sub_1011BC50(v47, (float *)v75, 255, 0, 0, 1, v55);
                    }
                  }
                  if ( 1.0 == v60 )
                    return 1;
                }
              }
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(v9 + 805) )
          {
            if ( v84 )
            {
              v54 = (float *)sub_10019640((_DWORD *)v9);
              v53 = (float *)(*(int (__thiscall **)(_DWORD *))(*a4 + 576))(a4);
              sub_1011BC50(v53, v54, 0, 255, 0, 1, 0.1);
            }
            return 1;
          }
          sub_10265720(v62, (int)a4, (int)a3, 0);
          if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
            sub_100DAE60(v9);
          v14 = (float *)(*(int (__thiscall **)(_DWORD *))(*a4 + 576))(a4);
          sub_10023120(COERCE_FLOAT(&savedregs), (int)a3, v14, (float *)(v9 + 580), 16449, (int)v62, (int)v58);
          if ( 1.0 == v60 )
          {
            if ( v84 )
            {
              sub_1011BC50((float *)v58, (float *)v59, 0, 255, 0, 1, 0.1);
              return 1;
            }
            return 1;
          }
          if ( v84 )
          {
            sub_1011BC50((float *)v58, (float *)v59, 255, 0, 0, 1, 0.1);
            v15 = (float *)sub_10019640((_DWORD *)v9);
            sub_1011BC50((float *)v59, v15, 128, 0, 0, 1, 0.1);
          }
        }
        v7 = v86;
        a1 = v82;
      }
      v86 = --v7;
      if ( v7 < 0 )
        return 0;
    }
  }
  return 1;
}
