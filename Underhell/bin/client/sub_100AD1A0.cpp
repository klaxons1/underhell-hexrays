int __thiscall sub_100AD1A0(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  bool v9; // c3
  double v10; // st7
  float *v11; // eax
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st5
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  double v24; // st7
  double v25; // st6
  bool v26; // c3
  double v27; // st7
  int v28; // edi
  int v29; // eax
  int v30; // eax
  bool v31; // c3
  double v32; // st7
  float *v33; // eax
  double v34; // st6
  int v35; // ecx
  double v36; // st7
  float *v37; // eax
  double v38; // st6
  double v39; // st5
  int v40; // edx
  int v41; // edi
  float *v42; // ecx
  bool v43; // zf
  float *v44; // ecx
  float *v45; // eax
  double v46; // st7
  int v47; // esi
  int result; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  double v52; // st7
  double v53; // st7
  float v54; // [esp+38h] [ebp-14Ch]
  float v55; // [esp+38h] [ebp-14Ch]
  float v56; // [esp+38h] [ebp-14Ch]
  float v57; // [esp+38h] [ebp-14Ch]
  float v58; // [esp+38h] [ebp-14Ch]
  _BYTE v59[44]; // [esp+48h] [ebp-13Ch] BYREF
  float v60; // [esp+74h] [ebp-110h]
  char v61; // [esp+7Fh] [ebp-105h]
  int v62; // [esp+9Ch] [ebp-E8h] BYREF
  float v63; // [esp+A0h] [ebp-E4h]
  float v64; // [esp+A4h] [ebp-E0h] BYREF
  float v65; // [esp+A8h] [ebp-DCh]
  float v66; // [esp+ACh] [ebp-D8h]
  float v67; // [esp+B0h] [ebp-D4h]
  float v68[3]; // [esp+D8h] [ebp-ACh] BYREF
  float v69[5]; // [esp+E4h] [ebp-A0h] BYREF
  float v70; // [esp+F8h] [ebp-8Ch]
  float v71; // [esp+104h] [ebp-80h]
  char v72; // [esp+10Eh] [ebp-76h]
  float v73; // [esp+110h] [ebp-74h]
  int v74; // [esp+114h] [ebp-70h]
  int v75; // [esp+118h] [ebp-6Ch]
  int v76; // [esp+11Ch] [ebp-68h]
  __int16 v77; // [esp+120h] [ebp-64h]
  int v78; // [esp+124h] [ebp-60h]
  int v79; // [esp+128h] [ebp-5Ch]
  float v80[3]; // [esp+12Ch] [ebp-58h] BYREF
  float v81; // [esp+138h] [ebp-4Ch]
  float v82; // [esp+13Ch] [ebp-48h]
  float v83; // [esp+140h] [ebp-44h]
  int v84; // [esp+144h] [ebp-40h] BYREF
  float v85; // [esp+148h] [ebp-3Ch]
  float v86; // [esp+14Ch] [ebp-38h]
  float v87; // [esp+150h] [ebp-34h]
  float v88; // [esp+154h] [ebp-30h]
  float v89; // [esp+158h] [ebp-2Ch]
  int v90; // [esp+15Ch] [ebp-28h]
  int v91; // [esp+160h] [ebp-24h]
  float v92; // [esp+164h] [ebp-20h]
  float v93; // [esp+168h] [ebp-1Ch]
  int v94; // [esp+16Ch] [ebp-18h] BYREF
  float v95; // [esp+170h] [ebp-14h]
  float v96; // [esp+174h] [ebp-10h]
  int v97; // [esp+178h] [ebp-Ch]
  int v98; // [esp+17Ch] [ebp-8h]
  int v99; // [esp+180h] [ebp-4h]
  float v100; // [esp+18Ch] [ebp+8h]
  float v101; // [esp+190h] [ebp+Ch]

  v4 = this[2];
  v5 = 0;
  v94 = *(int *)(v4 + 64);
  v6 = *(float *)(v4 + 68);
  v97 = 0;
  v95 = v6;
  v98 = 0;
  v7 = *(float *)(v4 + 72);
  v90 = 0;
  v96 = v7;
  v81 = *(float *)(v4 + 64);
  v82 = *(float *)(v4 + 68);
  v83 = *(float *)(v4 + 72);
  v93 = 0.0;
  v92 = *((float *)off_103DC81C + 4);
  *(float *)&v84 = 0.0;
  v85 = 0.0;
  v86 = 0.0;
  do
  {
    v8 = (float *)this[2];
    v54 = v8[17] * v8[17] + v8[16] * v8[16] + v8[18] * v8[18];
    v9 = 0.0 == off_103EDFE0(v54);
    v10 = 0.0;
    if ( v9 )
      break;
    v11 = (float *)this[2];
    v12 = v11[16] * v92 + v11[38];
    v80[0] = v12;
    v13 = v11[17] * v92 + v11[39];
    v80[1] = v13;
    v14 = v13;
    v15 = v92 * v11[18] + v11[40];
    v80[2] = v15;
    if ( byte_103E0658 )
    {
      if ( a2 && *a2 == v12 && a2[1] == v14 && a2[2] == v15 )
      {
        sub_1000F8E0(v68, a3);
        v16 = *(_DWORD *)(a3 + 60);
        v73 = *(float *)(a3 + 56);
        v17 = *(_DWORD *)(a3 + 64);
        v18 = *(_DWORD *)(a3 + 68);
        v74 = v16;
        LOWORD(v16) = *(_WORD *)(a3 + 72);
        v75 = v17;
        v19 = *(_DWORD *)(a3 + 76);
        v76 = v18;
        v20 = *(_DWORD *)(a3 + 80);
        v77 = v16;
        v78 = v19;
        v79 = v20;
        goto LABEL_12;
      }
      v21 = this[2] + 152;
    }
    else
    {
      v21 = (int)(v11 + 38);
    }
    v22 = *this;
    v23 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, float *))(*this + 44))(this, 0, 8, v68);
    (*(void (__thiscall **)(_DWORD *, int, float *, int))(v22 + 40))(this, v21, v80, v23);
    v5 = v98;
LABEL_12:
    v24 = v71;
    v93 = v93 + v71;
    if ( v72 )
    {
      v47 = this[2];
      *(float *)(v47 + 64) = flt_10459240;
      result = 4;
      *(_QWORD *)(v47 + 68) = qword_10459244;
      return result;
    }
    v25 = 0.0;
    if ( v24 > 0.0 )
    {
      v26 = 1.0 == v24;
      v27 = 0.0;
      if ( v26 )
      {
        v28 = *this;
        v29 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44))(this, 0, 8, v59);
        (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v28 + 40))(this, v69, v69, v29);
        if ( v61 || 1.0 != v60 )
        {
          v49 = this[2];
          *(float *)(v49 + 64) = flt_10459240;
          *(_QWORD *)(v49 + 68) = qword_10459244;
          v10 = 0.0;
          break;
        }
        v27 = 0.0;
      }
      v30 = this[2];
      *(float *)(v30 + 152) = v69[0];
      v5 = 0;
      *(float *)(v30 + 156) = v69[1];
      *(float *)(v30 + 160) = v69[2];
      v94 = *(int *)(v30 + 64);
      v95 = *(float *)(v30 + 68);
      v96 = *(float *)(v30 + 72);
      v25 = v27;
      v24 = v71;
    }
    v31 = 1.0 == v24;
    v10 = v25;
    if ( v31 )
      break;
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_10434620 + 8))(dword_10434620, v68, this[2] + 64);
    v32 = v70;
    if ( v70 > 0.7 )
      v97 |= 1u;
    if ( 0.0 == v32 )
      v97 |= 2u;
    v92 = v92 - v71 * v92;
    if ( v5 >= 5 )
    {
      v10 = 0.0;
LABEL_68:
      v50 = this[2];
      *(float *)(v50 + 64) = flt_10459240;
      *(_QWORD *)(v50 + 68) = qword_10459244;
      break;
    }
    v33 = (float *)(&v62 + 3 * v5);
    *v33 = v69[3];
    v98 = ++v5;
    v33[1] = v69[4];
    v34 = v32;
    v10 = 0.0;
    v33[2] = v34;
    if ( v5 == 1 )
    {
      v35 = this[1];
      if ( *(_BYTE *)(v35 + 316) == 2 )
      {
        if ( !sub_100F7AF0(v35) )
        {
          if ( v64 <= 0.7 )
          {
            v55 = (1.0 - *(float *)(this[1] + 4676)) * *(float *)(dword_10434AC4 + 44) + 1.0;
            sub_100A7980((float *)&v94, (float *)&v62, (float *)&v84, v55);
          }
          else
          {
            sub_100A7980((float *)&v94, (float *)&v62, (float *)&v84, 1.0);
          }
          v36 = *(float *)&v84;
          v37 = (float *)this[2];
          v37[16] = *(float *)&v84;
          v38 = v85;
          v37[17] = v85;
          v39 = v86;
          v37[18] = v86;
          v96 = v39;
          *(float *)&v94 = v36;
          v95 = v38;
          v10 = 0.0;
          goto LABEL_63;
        }
        v10 = 0.0;
      }
    }
    v99 = 0;
    if ( v5 > 0 )
    {
      v91 = (int)&v62;
      do
      {
        sub_100A7980((float *)&v94, (float *)v91, (float *)(this[2] + 64), 1.0);
        v10 = 0.0;
        v40 = 0;
        if ( v5 >= 4 )
        {
          v41 = 2;
          v42 = &v64;
          while ( 1 )
          {
            if ( v40 != v99
              && *(v42 - 1) * *(float *)(this[2] + 68)
               + *(v42 - 2) * *(float *)(this[2] + 64)
               + *(float *)(this[2] + 72) * *v42 < 0.0 )
            {
              goto LABEL_56;
            }
            if ( v41 - 1 != v99
              && v42[2] * *(float *)(this[2] + 68)
               + v42[1] * *(float *)(this[2] + 64)
               + v42[3] * *(float *)(this[2] + 72) < 0.0 )
            {
              break;
            }
            if ( v41 != v99
              && v42[5] * *(float *)(this[2] + 68)
               + v42[4] * *(float *)(this[2] + 64)
               + v42[6] * *(float *)(this[2] + 72) < 0.0 )
            {
              v40 += 2;
              goto LABEL_55;
            }
            if ( v41 + 1 != v99
              && v42[8] * *(float *)(this[2] + 68)
               + v42[7] * *(float *)(this[2] + 64)
               + v42[9] * *(float *)(this[2] + 72) < 0.0 )
            {
              v40 += 3;
              goto LABEL_55;
            }
            v5 = v98;
            v40 += 4;
            v41 += 4;
            v42 += 12;
            if ( v40 >= v98 - 3 )
              goto LABEL_46;
          }
          ++v40;
LABEL_55:
          v5 = v98;
          goto LABEL_56;
        }
LABEL_46:
        v43 = v40 == v5;
        if ( v40 < v5 )
        {
          v44 = &v64 + 3 * v40;
          do
          {
            if ( v40 != v99
              && *(v44 - 1) * *(float *)(this[2] + 68)
               + *(v44 - 2) * *(float *)(this[2] + 64)
               + *(float *)(this[2] + 72) * *v44 < 0.0 )
            {
              break;
            }
            ++v40;
            v44 += 3;
          }
          while ( v40 < v5 );
LABEL_56:
          v43 = v40 == v5;
        }
        if ( v43 )
          break;
        v91 += 12;
        ++v99;
      }
      while ( v99 < v5 );
    }
    if ( v99 == v5 )
    {
      if ( v5 != 2 )
        goto LABEL_68;
      v87 = v67 * v63 - v66 * v64;
      v88 = v64 * v65 - v67 * *(float *)&v62;
      v89 = *(float *)&v62 * v66 - v65 * v63;
      off_103EDFEC();
      v45 = (float *)this[2];
      v46 = v45[17] * v88 + v87 * v45[16] + v45[18] * v89;
      v45[16] = v87 * v46;
      v45[17] = v88 * v46;
      v45[18] = v46 * v89;
      v10 = 0.0;
    }
    if ( *(float *)(this[2] + 68) * v82 + *(float *)(this[2] + 64) * v81 + *(float *)(this[2] + 72) * v83 <= v10 )
      goto LABEL_68;
LABEL_63:
    ++v90;
  }
  while ( v90 < 4 );
  if ( v10 == v93 )
  {
    v51 = this[2];
    *(float *)(v51 + 64) = flt_10459240;
    *(_QWORD *)(v51 + 68) = qword_10459244;
  }
  v101 = v10;
  v56 = v82 * v82 + v81 * v81;
  v100 = off_103EDFE0(v56);
  v57 = *(float *)(this[2] + 68) * *(float *)(this[2] + 68) + *(float *)(this[2] + 64) * *(float *)(this[2] + 64);
  v52 = v100 - off_103EDFE0(v57);
  if ( v52 <= 1160.0 )
  {
    if ( v52 <= 580.0 )
      v53 = v101;
    else
      v53 = 0.85000002;
  }
  else
  {
    v53 = 1.0;
  }
  v58 = v53;
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 160))(this, LODWORD(v58));
  return v97;
}
