float *__thiscall sub_1007B0B0(_DWORD *this, float a2, float a3, int a4, int a5, int a6)
{
  int v6; // eax
  float *v7; // ebx
  float *v8; // edi
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  double v15; // st7
  int v16; // ecx
  double v17; // st7
  int v18; // ebx
  double v19; // st7
  int v20; // ecx
  double (__thiscall *v21)(int); // eax
  double v22; // st7
  double v23; // st5
  float *result; // eax
  int v25; // ecx
  double (__thiscall *v26)(int); // edx
  double v27; // st7
  double v28; // st7
  int v29; // edi
  float *v30; // eax
  int v31; // ecx
  unsigned __int8 (__thiscall *v32)(int, int *, int *, int *); // edx
  double v33; // st7
  double v34; // st6
  double v35; // st7
  double v36; // st7
  double v37; // st6
  double v38; // rtt
  double v39; // st6
  double v40; // st7
  double v41; // st5
  double v42; // st4
  double v43; // st3
  double v44; // st2
  double v45; // st1
  double v46; // st1
  double v47; // rtt
  double v48; // st1
  double v49; // rt1
  int v50; // ecx
  float *v51; // eax
  double v52; // st3
  double v53; // rt0
  double v54; // st3
  double v55; // st5
  double v56; // rt1
  double v57; // st3
  double v58; // st6
  double v59; // st0
  int v60; // edi
  double v61; // st6
  double v62; // st6
  double v63; // rt0
  int v64; // ecx
  float v65; // [esp+1Ch] [ebp-100h]
  float v66; // [esp+20h] [ebp-FCh]
  float v67; // [esp+20h] [ebp-FCh]
  float *v68; // [esp+20h] [ebp-FCh]
  float v69; // [esp+28h] [ebp-F4h]
  float v70; // [esp+28h] [ebp-F4h]
  float v71; // [esp+28h] [ebp-F4h]
  float v72; // [esp+28h] [ebp-F4h]
  float v73; // [esp+28h] [ebp-F4h]
  _BYTE v74[32]; // [esp+38h] [ebp-E4h] BYREF
  float v75; // [esp+58h] [ebp-C4h]
  float v76; // [esp+64h] [ebp-B8h]
  char v77; // [esp+6Fh] [ebp-ADh]
  int v78; // [esp+84h] [ebp-98h]
  int v79[5]; // [esp+8Ch] [ebp-90h] BYREF
  float v80; // [esp+A0h] [ebp-7Ch]
  double v81; // [esp+A4h] [ebp-78h]
  int v82[5]; // [esp+ACh] [ebp-70h] BYREF
  float v83; // [esp+C0h] [ebp-5Ch]
  float v84; // [esp+C4h] [ebp-58h]
  float v85; // [esp+C8h] [ebp-54h]
  float v86; // [esp+CCh] [ebp-50h]
  int v87; // [esp+D0h] [ebp-4Ch]
  int v88; // [esp+D4h] [ebp-48h] BYREF
  float v89; // [esp+D8h] [ebp-44h]
  float v90; // [esp+DCh] [ebp-40h]
  int v91; // [esp+E0h] [ebp-3Ch] BYREF
  int v92; // [esp+E4h] [ebp-38h] BYREF
  float v93; // [esp+E8h] [ebp-34h]
  float v94; // [esp+ECh] [ebp-30h]
  int v95; // [esp+F0h] [ebp-2Ch] BYREF
  float v96; // [esp+F4h] [ebp-28h]
  float v97; // [esp+F8h] [ebp-24h]
  float v98; // [esp+FCh] [ebp-20h]
  float v99; // [esp+100h] [ebp-1Ch]
  int v100; // [esp+104h] [ebp-18h] BYREF
  float v101; // [esp+108h] [ebp-14h]
  float v102; // [esp+10Ch] [ebp-10h]
  int v103; // [esp+110h] [ebp-Ch] BYREF
  float v104; // [esp+114h] [ebp-8h]
  float v105; // [esp+118h] [ebp-4h]
  int savedregs; // [esp+11Ch] [ebp+0h] BYREF

  v6 = a6;
  *(float *)(a6 + 40) = 0.0;
  v7 = (float *)LODWORD(a2);
  *(float *)(v6 + 44) = 0.0;
  *(float *)(v6 + 48) = 0.0;
  v8 = (float *)LODWORD(a3);
  v10 = *(float *)(LODWORD(a3) + 4) - v7[1];
  v11 = v10 * v10;
  v12 = *(float *)LODWORD(a3) - *v7;
  v13 = v11;
  v14 = *(float *)(LODWORD(a3) + 8) - v7[2];
  v69 = v12 * v12 + v13 + v14 * v14;
  v15 = off_10689708(v69);
  v16 = this[1];
  a3 = v15;
  if ( !(*(unsigned __int8 (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)v16 + 1720))(v16, v7, v8, v8) )
    goto LABEL_6;
  v98 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]);
  v17 = sub_10042670((_DWORD *)this[1]);
  v18 = a4;
  v66 = v17 * v98;
  sub_1007A2B0(this, (float *)LODWORD(a2), a4, v66, -720.0, (float *)&v92);
  v19 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]);
  v20 = this[1];
  v21 = *(double (__thiscall **)(int))(*(_DWORD *)v20 + 1724);
  *(float *)&a4 = v19 * 0.5;
  a2 = v21(v20);
  v22 = sub_10042670((_DWORD *)this[1]);
  v67 = v22 * a2 + *(float *)&a4;
  sub_1007A2B0(this, v8, v18, v67, -720.0, (float *)&v95);
  if ( !sub_1007A470((int)this, (float *)&v95, v18) )
    goto LABEL_6;
  v23 = v93;
  if ( *(float *)&v92 == *(float *)&v95 && v23 == v96 && v94 == v97 )
    goto LABEL_6;
  v70 = (*(float *)&v92 - *(float *)&v95) * (*(float *)&v92 - *(float *)&v95) + (v23 - v96) * (v23 - v96);
  if ( 0.0 == off_10689708(v70)
    || (*(float *)&a4 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1728))(this[1]),
        v25 = this[1],
        v26 = *(double (__thiscall **)(int))(*(_DWORD *)v25 + 1732),
        a2 = *(float *)(dword_106B6F0C + 44),
        v27 = v26(v25),
        v28 = v27 * a2,
        v83 = v28,
        v28 < 0.01) )
  {
LABEL_6:
    result = (float *)a6;
    *(float *)(a6 + 36) = a3;
    *result = NAN;
  }
  else
  {
    v98 = a3;
    *(float *)&v91 = 1024.0;
    a2 = 0.0;
    v87 = 0;
    v29 = -4;
    a3 = 1024.0;
    v65 = v28;
    sub_10079AD0((float *)&v103, (float *)&v92, (float *)&v95, v65, &a2, *(float *)&a4, (float *)v82);
    v84 = a2;
    do
    {
      v30 = sub_10079AD0((float *)v79, (float *)&v92, (float *)&v95, v83, &a2, *(float *)&a4, (float *)v82);
      v31 = this[1];
      v103 = *(int *)v30;
      v32 = *(unsigned __int8 (__thiscall **)(int, int *, int *, int *))(*(_DWORD *)v31 + 1720);
      v104 = v30[1];
      v105 = v30[2];
      if ( v32(v31, &v92, v82, &v95) )
      {
        v71 = (*(float *)&v92 - *(float *)&v95) * (*(float *)&v92 - *(float *)&v95) + (v93 - v96) * (v93 - v96);
        v99 = off_10689708(v71);
        v72 = v104 * v104 + *(float *)&v103 * *(float *)&v103;
        v35 = off_10689708(v72);
        v36 = v99 / v35;
        v100 = v92;
        v101 = v93;
        v102 = v94;
        v37 = 0.1 * v36;
        v86 = 0.1 * v36;
        v99 = 0.0;
        v81 = v36 - 0.01;
        if ( v81 <= 0.0 )
        {
LABEL_33:
          *(float *)&v91 = a2;
          v62 = a3 * 0.5;
          a3 = v62;
          v63 = v62;
          v34 = a2 - v62;
          v33 = v63;
          a2 = v34;
        }
        else
        {
          v80 = v83 * 0.5 * v37;
          v38 = v37;
          v39 = 0.0 * v37;
          v40 = v38;
          v85 = v39;
          v41 = v101;
          v42 = *(float *)&v100;
          v43 = *(float *)&v103;
          v44 = v104;
          v45 = v105;
          while ( 1 )
          {
            v50 = this[1] + 320;
            *(float *)&v88 = (v43 - v39) * v40 + v42;
            v89 = (v44 - v39) * v40 + v41;
            v90 = v40 * (v45 - v80) + v102;
            v68 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v50 + 8))(v50);
            v51 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
            sub_10079F00(
              (int)this,
              (int)&savedregs,
              v29,
              (int)this,
              (float *)&v100,
              (float *)&v88,
              v51,
              v68,
              v18,
              (int)v74);
            if ( v77 || v76 < 0.99 )
              break;
            if ( *(_DWORD *)(dword_1069330C + 48) )
              sub_1011BC50((int)&v100, (int)&v88, 0, 255, 0, 1, 2.0);
            v52 = *(float *)&v103 - v85;
            *(float *)&v103 = v52;
            v53 = v52;
            v54 = v104 - v85;
            v55 = v53;
            v104 = v54;
            v56 = v54;
            v57 = v105 - v83 * v86;
            v58 = v56;
            v105 = v57;
            v100 = v88;
            v101 = v89;
            v102 = v90;
            v59 = v99 + v86;
            v99 = v59;
            if ( v59 >= v81 )
              goto LABEL_33;
            v40 = v86;
            v46 = v58;
            v39 = v85;
            v47 = v46;
            v48 = v55;
            v41 = v89;
            v49 = v48;
            v42 = *(float *)&v88;
            v44 = v47;
            v45 = v57;
            v43 = v49;
          }
          v60 = v78;
          v87 = v78;
          if ( sub_100D7680(v78) )
            v29 = -3;
          else
            v29 = ((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                     dword_106B31D0,
                     *(_DWORD *)(v60 + 24)) != 0)
                - 2;
          v73 = (v97 - v102) * (v97 - v102)
              + (v96 - v101) * (v96 - v101)
              + (*(float *)&v95 - *(float *)&v100) * (*(float *)&v95 - *(float *)&v100);
          v98 = off_10689708(v73);
          v33 = a3 * 0.5;
          a3 = v33;
          v61 = a2;
          if ( v75 >= 0.0 )
            v34 = v61 + v33;
          else
            v34 = v61 - v33;
          a2 = v34;
          if ( *(_DWORD *)(dword_1069330C + 48) )
          {
            sub_1011BC50((int)&v100, (int)&v88, 255, 0, 0, 1, 2.0);
            v34 = a2;
            v33 = a3;
          }
        }
      }
      else
      {
        v33 = a3 * 0.5;
        a3 = v33;
        v34 = a2 - v33;
        a2 = v34;
      }
    }
    while ( v84 < v34 && v34 <= 1024.0 && v33 >= 16.0 );
    if ( 1024.0 == *(float *)&v91 )
    {
      result = (float *)a6;
      *(_DWORD *)(a6 + 28) = v87;
      result[4] = flt_106F1CA8;
      result[5] = flt_106F1CAC;
      result[6] = flt_106F1CB0;
      *(_DWORD *)result = v29;
      result[9] = v98;
    }
    else
    {
      result = sub_10079AD0((float *)v79, (float *)&v92, (float *)&v95, v83, (float *)&v91, *(float *)&a4, (float *)v82);
      v64 = a6;
      *(float *)(a6 + 40) = *result;
      *(float *)(v64 + 44) = result[1];
      *(float *)(v64 + 48) = result[2];
    }
  }
  return result;
}
