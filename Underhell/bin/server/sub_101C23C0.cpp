int __thiscall sub_101C23C0(void *this, float a2, int a3)
{
  int v3; // ebx
  int (__fastcall *v4)(void *); // edx
  int v5; // eax
  float v6; // edx
  float v7; // eax
  int v8; // edi
  double v9; // st7
  double v10; // st5
  double v11; // st6
  double v12; // rt2
  int v13; // edx
  unsigned __int8 (__thiscall *v14)(int, int); // eax
  int v15; // eax
  float *v16; // eax
  double v17; // st7
  int *v18; // esi
  double v19; // st5
  double v20; // st7
  double v22; // st7
  double v23; // st6
  int v24; // ecx
  double v25; // st5
  double v26; // st4
  int v27; // esi
  float *v28; // edx
  bool v29; // zf
  float *v30; // edx
  double v31; // rt0
  double v32; // st4
  double v33; // st5
  double v34; // rt1
  double v35; // st4
  double v36; // rt2
  double v37; // st4
  double v38; // st7
  double v39; // st6
  double v40; // st5
  double v41; // st4
  double v42; // rt0
  double v43; // st3
  double v44; // rt1
  double v45; // st3
  double v46; // st3
  double v47; // st4
  double v48; // rt0
  double v49; // st4
  double v50; // rt2
  double v51; // st3
  bool v52; // c0
  bool v53; // c3
  float v54; // [esp+4h] [ebp-F8h]
  float v55; // [esp+4h] [ebp-F8h]
  float v56; // [esp+4h] [ebp-F8h]
  float v57; // [esp+4h] [ebp-F8h]
  int v58; // [esp+14h] [ebp-E8h] BYREF
  float v59; // [esp+18h] [ebp-E4h]
  float v60; // [esp+1Ch] [ebp-E0h] BYREF
  float v61; // [esp+20h] [ebp-DCh]
  float v62; // [esp+24h] [ebp-D8h]
  float v63; // [esp+28h] [ebp-D4h]
  _BYTE v64[12]; // [esp+50h] [ebp-ACh] BYREF
  float v65[5]; // [esp+5Ch] [ebp-A0h] BYREF
  float v66; // [esp+70h] [ebp-8Ch]
  float v67; // [esp+7Ch] [ebp-80h]
  char v68; // [esp+87h] [ebp-75h]
  int v69; // [esp+9Ch] [ebp-60h]
  float v70[3]; // [esp+A4h] [ebp-58h] BYREF
  float v71; // [esp+B0h] [ebp-4Ch]
  float v72; // [esp+B4h] [ebp-48h]
  float v73; // [esp+B8h] [ebp-44h]
  int v74; // [esp+BCh] [ebp-40h]
  int v75; // [esp+C0h] [ebp-3Ch]
  int v76; // [esp+C4h] [ebp-38h] BYREF
  float v77; // [esp+C8h] [ebp-34h]
  float v78; // [esp+CCh] [ebp-30h]
  float v79; // [esp+D0h] [ebp-2Ch]
  int v80; // [esp+D4h] [ebp-28h] BYREF
  float v81; // [esp+D8h] [ebp-24h]
  float v82; // [esp+DCh] [ebp-20h]
  int v83; // [esp+E0h] [ebp-1Ch]
  int v84; // [esp+E4h] [ebp-18h]
  float v85; // [esp+E8h] [ebp-14h] BYREF
  float v86; // [esp+ECh] [ebp-10h]
  float v87; // [esp+F0h] [ebp-Ch]
  int v88; // [esp+F4h] [ebp-8h]
  int v89; // [esp+F8h] [ebp-4h]

  v3 = (int)this;
  v4 = *(int (__fastcall **)(void *))(*(_DWORD *)this + 636);
  v83 = (int)this;
  v74 = v4(this);
  *(float *)&v80 = 0.0;
  v5 = *(_DWORD *)(v3 + 252);
  v81 = 0.0;
  v82 = 0.0;
  if ( (v5 & 0x1000) != 0 )
    sub_100DAFD0(v3);
  v6 = *(float *)(v3 + 480);
  v7 = *(float *)(v3 + 484);
  v85 = *(float *)(v3 + 476);
  *(float *)&v76 = v85;
  v86 = v6;
  v87 = v7;
  v77 = v6;
  v8 = 0;
  v89 = 0;
  v78 = v7;
  v75 = 0;
  v73 = v7;
  v9 = v7;
  v71 = v85;
  v10 = v6;
  v11 = v85;
  v72 = v6;
  v79 = a2;
  while ( 1 )
  {
    if ( v11 == flt_106F1CA8 && v10 == flt_106F1CAC && v9 == flt_106F1CB0 )
    {
LABEL_45:
      sub_100DD660(v3, &v85);
      return v89;
    }
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v3);
      v9 = v87;
      v11 = v85;
      v10 = v86;
    }
    v13 = *(_DWORD *)(v3 + 252) >> 11;
    v70[0] = v11 * v79 + *(float *)(v3 + 580);
    v70[1] = v10 * v79 + *(float *)(v3 + 584);
    v70[2] = v9 * v79 + *(float *)(v3 + 588);
    if ( (v13 & 1) != 0 )
      sub_100DAE60(v3);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 492))(v3) )
      (*(void (__thiscall **)(int, int, int, float *, int, _BYTE *))(*(_DWORD *)dword_106B3CDC + 460))(
        dword_106B3CDC,
        v3,
        v3 + 580,
        v70,
        v74,
        v64);
    else
      sub_102659D0(v3, v3 + 580, v70, v74, v64);
    if ( v68 )
    {
      sub_100DD660(v3, &flt_106F1CA8);
      return 4;
    }
    if ( v67 > 0.0 )
    {
      sub_100E0D20(v3, v65);
      *(float *)&v76 = v85;
      v8 = 0;
      v77 = v86;
      v78 = v87;
    }
    if ( 1.0 == v67 )
      goto LABEL_45;
    if ( !v69 )
      break;
    if ( v66 > 0.7 )
    {
      v14 = *(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 360);
      v89 |= 1u;
      if ( v14(v3, v69) )
      {
        v15 = sub_101C5260(v3);
        if ( v15 != v69 )
        {
          v54 = a2 - (1.0 - v67) * v79 + *(float *)(dword_106B31C8 + 12);
          sub_101C46D0(v54);
        }
        sub_101C73D0(v69);
      }
    }
    if ( 0.0 == v66 )
    {
      v89 |= 2u;
      if ( a3 )
        sub_1007A030(a3, (int)v64);
    }
    sub_101C6C90(v69, v64);
    if ( (*(_BYTE *)(v3 + 252) & 1) != 0 || (**(_DWORD **)(v3 + 24) & 2) != 0 )
      goto LABEL_45;
    v79 = v79 - v67 * v79;
    if ( v8 >= 5 )
      goto LABEL_81;
    v16 = (float *)(&v58 + 3 * v8);
    *v16 = v65[3];
    ++v8;
    v29 = *(_BYTE *)(v3 + 306) == 2;
    v16[1] = v65[4];
    v16[2] = v66;
    if ( v29 )
    {
      if ( (*(_BYTE *)(v3 + 256) & 1) == 0 )
      {
        v17 = 1.0;
LABEL_36:
        if ( v8 > 0 )
        {
          v18 = &v58;
          v84 = v8;
          while ( 1 )
          {
            if ( *((float *)v18 + 2) <= 0.7 )
            {
              v56 = v17 + (v17 - *(float *)(v3 + 556)) * *(float *)(dword_106B738C + 44);
              sub_101C49D0((int)&v76, (int)v18, (int)&v80, v56);
            }
            else
            {
              v55 = v17;
              sub_101C49D0((int)&v76, (int)v18, (int)&v80, v55);
              v76 = v80;
              v77 = v81;
              v78 = v82;
            }
            v18 += 3;
            if ( !--v84 )
              break;
            v17 = 1.0;
          }
        }
        v11 = *(float *)&v80;
        v85 = *(float *)&v80;
        v86 = v81;
        v87 = v82;
        v76 = v80;
        v77 = v81;
        v78 = v82;
        v19 = v82;
        v20 = v81;
        goto LABEL_44;
      }
      v17 = 1.0;
      if ( 1.0 != *(float *)(v3 + 556) )
        goto LABEL_36;
    }
    else
    {
      v17 = 1.0;
    }
    v88 = 0;
    if ( v8 <= 0 )
    {
      v22 = v82;
      v23 = v81;
      v25 = *(float *)&v80;
      v26 = 0.0;
    }
    else
    {
      v84 = (int)&v58;
      while ( 1 )
      {
        v57 = v17;
        sub_101C49D0((int)&v76, v84, (int)&v80, v57);
        v22 = v82;
        v23 = v81;
        v24 = 0;
        v25 = *(float *)&v80;
        v26 = 0.0;
        if ( v8 >= 4 )
        {
          v27 = 2;
          v28 = &v60;
          while ( 1 )
          {
            if ( v24 != v88 && *(v28 - 1) * v23 + *(v28 - 2) * v25 + v22 * *v28 < 0.0 )
              goto LABEL_71;
            if ( v27 - 1 != v88 && v28[2] * v23 + v28[1] * v25 + v28[3] * v22 < 0.0 )
              break;
            if ( v27 != v88 && v28[5] * v23 + v28[4] * v25 + v28[6] * v22 < 0.0 )
            {
              v24 += 2;
              goto LABEL_70;
            }
            if ( v27 + 1 != v88 && v28[8] * v23 + v28[7] * v25 + v28[9] * v22 < 0.0 )
            {
              v24 += 3;
              goto LABEL_70;
            }
            v3 = v83;
            v24 += 4;
            v27 += 4;
            v28 += 12;
            if ( v24 >= v8 - 3 )
              goto LABEL_61;
          }
          ++v24;
LABEL_70:
          v3 = v83;
          goto LABEL_71;
        }
LABEL_61:
        v29 = v24 == v8;
        if ( v24 < v8 )
        {
          v30 = &v60 + 3 * v24;
          do
          {
            if ( v24 != v88 && *(v30 - 1) * v23 + *(v30 - 2) * v25 + v22 * *v30 < 0.0 )
              break;
            ++v24;
            v30 += 3;
          }
          while ( v24 < v8 );
LABEL_71:
          v29 = v24 == v8;
        }
        if ( v29 )
          break;
        v84 += 12;
        if ( ++v88 >= v8 )
          break;
        v17 = 1.0;
      }
    }
    if ( v88 == v8 )
    {
      v38 = v26;
      if ( v8 != 2 )
        goto LABEL_45;
      v39 = v60 * v61 - v63 * *(float *)&v58;
      v40 = v63 * v59 - v62 * v60;
      v41 = *(float *)&v58 * v62 - v59 * v61;
      v42 = v39 * v86 + v40 * v85 + v41 * v87;
      v43 = v40 * v42;
      v85 = v43;
      v44 = v43;
      v45 = v39;
      v11 = v44;
      v46 = v45 * v42;
      v86 = v46;
      v47 = v42 * v41;
      v87 = v47;
      v48 = v47;
      v49 = v38;
      v20 = v46;
      v50 = v49;
      v37 = v48;
      v33 = v50;
    }
    else
    {
      v31 = v26;
      v32 = v25;
      v33 = v31;
      v85 = v32;
      v34 = v32;
      v35 = v23;
      v11 = v34;
      v86 = v35;
      v36 = v35;
      v37 = v22;
      v20 = v36;
      v87 = v37;
    }
    v51 = v72 * v20 + v71 * v11 + v73 * v37;
    v52 = v51 < v33;
    v53 = v51 == v33;
    v19 = v37;
    if ( v52 || v53 )
    {
LABEL_81:
      sub_100DD660(v3, &flt_106F1CA8);
      return v89;
    }
LABEL_44:
    if ( ++v75 >= 4 )
      goto LABEL_45;
    v12 = v19;
    v10 = v20;
    v9 = v12;
  }
  sub_100DD660(v3, &v85);
  Warning("PhysicsTryMove: !trace.u.ent");
  return 4;
}
