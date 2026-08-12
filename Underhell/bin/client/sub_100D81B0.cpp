// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100D81B0@<eax>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int result; // eax
  int v7; // eax
  float v8; // ecx
  double v9; // st7
  float *v10; // edi
  double v11; // st6
  float v12; // ecx
  double v13; // st7
  float v14; // edx
  float v15; // eax
  double v16; // st6
  long double v17; // st7
  double v18; // st5
  float v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // st7
  int v25; // edi
  double v26; // st6
  double (__thiscall *v27)(int); // eax
  double v28; // st7
  double v29; // st6
  int v30; // edi
  float *v31; // eax
  float v32; // edx
  float v33; // ecx
  float v34; // eax
  float v35; // edx
  float v36; // ecx
  float v37; // eax
  int v38; // edx
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  double v43; // st7
  float *v44; // eax
  double v45; // st6
  double v46; // rt1
  double v47; // st7
  double v48; // st6
  double v49; // st5
  double v50; // st4
  float v52[22]; // [esp+28h] [ebp-15Ch] BYREF
  float v53[3]; // [esp+80h] [ebp-104h] BYREF
  float v54[19]; // [esp+8Ch] [ebp-F8h] BYREF
  float v55[3]; // [esp+D8h] [ebp-ACh] BYREF
  float v56; // [esp+E4h] [ebp-A0h] BYREF
  float v57; // [esp+E8h] [ebp-9Ch]
  float v58; // [esp+ECh] [ebp-98h]
  float v59; // [esp+F0h] [ebp-94h] BYREF
  float v60; // [esp+F4h] [ebp-90h]
  float v61; // [esp+F8h] [ebp-8Ch]
  float v62[3]; // [esp+FCh] [ebp-88h] BYREF
  float v63; // [esp+108h] [ebp-7Ch] BYREF
  float v64; // [esp+10Ch] [ebp-78h]
  float v65; // [esp+110h] [ebp-74h]
  float v66[2]; // [esp+114h] [ebp-70h] BYREF
  float v67; // [esp+11Ch] [ebp-68h]
  float v68; // [esp+120h] [ebp-64h]
  float v69; // [esp+124h] [ebp-60h] BYREF
  float v70; // [esp+128h] [ebp-5Ch]
  float v71; // [esp+12Ch] [ebp-58h]
  float v72; // [esp+130h] [ebp-54h] BYREF
  float v73; // [esp+134h] [ebp-50h]
  float v74; // [esp+138h] [ebp-4Ch]
  int v75; // [esp+13Ch] [ebp-48h]
  float v76; // [esp+140h] [ebp-44h]
  float v77; // [esp+144h] [ebp-40h]
  float v78; // [esp+148h] [ebp-3Ch]
  float v79; // [esp+14Ch] [ebp-38h]
  float v80; // [esp+150h] [ebp-34h]
  float v81; // [esp+154h] [ebp-30h]
  float v82; // [esp+158h] [ebp-2Ch] BYREF
  float v83; // [esp+15Ch] [ebp-28h]
  float v84; // [esp+160h] [ebp-24h]
  float v85; // [esp+164h] [ebp-20h]
  float v86; // [esp+168h] [ebp-1Ch] BYREF
  float v87; // [esp+16Ch] [ebp-18h]
  float v88; // [esp+170h] [ebp-14h]
  float *v89; // [esp+174h] [ebp-10h]
  int v90; // [esp+178h] [ebp-Ch]
  void *v91; // [esp+17Ch] [ebp-8h]
  void *retaddr; // [esp+184h] [ebp+0h]

  v90 = a2;
  v91 = retaddr;
  result = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 132))(a1, a3, a4);
  if ( result )
  {
    v7 = sub_100422D0();
    v75 = v7;
    if ( v7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 796))(v7) )
    {
      v9 = a1[5];
      v10 = a1 + 4;
      v11 = a1[4];
      v88 = v8;
      v88 = v9 * v9 + v11 * v11 + a1[6] * a1[6];
      v13 = off_103EDFE0(v88);
      v76 = v13;
      if ( 0.0 != v13 )
      {
        v14 = a1[5];
        v15 = a1[6];
        v86 = *v10;
        v87 = v14;
        v88 = v15;
        v85 = 0.0;
        v89 = a1 + 4;
        while ( 1 )
        {
          v16 = *(float *)(dword_10432CB4 + 44);
          v17 = *v89 / v13;
          v18 = *(&v86 + LODWORD(v85));
          v78 = *(&v86 + LODWORD(v85));
          v88 = v16 * *((float *)off_103DC81C + 4) * fabs(v17);
          v87 = v18;
          sub_101F0510(0.0, v87, v88);
          ++v89;
          LODWORD(v19) = LODWORD(v85) + 1;
          *(&v85 + LODWORD(v19)) = v78 - 0.0;
          v85 = v19;
          if ( SLODWORD(v19) >= 2 )
            break;
          v13 = v76;
        }
        v20 = v86;
        a1[1] = a1[1] + v86;
        v21 = v87;
        a1[2] = a1[2] + v87;
        v22 = v88;
        a1[3] = a1[3] + v88;
        *v10 = *v10 - v20;
        a1[5] = a1[5] - v21;
        a1[6] = a1[6] - v22;
      }
      v23 = a1[11];
      v88 = v12;
      v88 = v23 * v23 + a1[10] * a1[10];
      v24 = off_103EDFE0(v88);
      v78 = v24;
      if ( 0.0 != v24 )
      {
        v87 = a1[10];
        v25 = 0;
        v26 = a1[11];
        v89 = a1 + 10;
        v88 = v26;
        while ( 1 )
        {
          v77 = *(float *)(dword_10432CB4 + 44);
          v27 = *(double (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 352);
          v68 = *v89 / v24;
          v85 = *(&v87 + v25);
          v76 = v27(dword_1041315C);
          v88 = v76
              / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v75 + 952))(v75)
              * (fabs(v68)
               * (*((float *)off_103DC81C + 4)
                * v77));
          sub_101F0510(0.0, v85, v88);
          ++v89;
          ++v25;
          *(&v86 + v25) = v85 - 0.0;
          if ( v25 >= 2 )
            break;
          v24 = v78;
        }
        v28 = v87;
        a1[7] = a1[7] + v87;
        v29 = v88;
        a1[8] = v88 + a1[8];
        a1[10] = a1[10] - v28;
        a1[11] = a1[11] - v29;
      }
      v30 = v75;
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v75 + 532))(v75, &v72, v89);
      v31 = (float *)sub_101356F0();
      v32 = v31[1];
      v33 = *v31;
      v34 = v31[2];
      v87 = v32;
      v35 = a1[2];
      v86 = v33;
      v36 = a1[1];
      v88 = v34;
      v37 = a1[3];
      v66[1] = v35;
      v38 = *(_DWORD *)a1;
      v66[0] = v36;
      v67 = v37;
      (*(void (__thiscall **)(float *))(v38 + 8))(a1);
      v82 = v86 * 56755.84;
      v83 = v87 * 56755.84;
      v84 = 56755.84 * v88;
      v39 = (float *)sub_101356D0();
      v86 = v82 + *v39;
      v87 = v39[1] + v83;
      v40 = (float *)sub_101356D0();
      sub_1000E430(v52, v40, &v86);
      sub_1012D400(v30, 0);
      (*(void (__thiscall **)(int, float *, int, float *, float *))(*(_DWORD *)dword_104131A0 + 16))(
        dword_104131A0,
        v52,
        1174421507,
        &v82,
        v53);
      if ( *(_DWORD *)(dword_10439134 + 48) )
        sub_10130AC0((int)v53, (int)v54, 255, 0, 0, 1, 5.0);
      v41 = (float *)sub_101356D0();
      v82 = v72 - *v41;
      v83 = v73 - v41[1];
      v84 = v74 - v41[2];
      v42 = (float *)sub_101356F0();
      v77 = fabs(v42[1] * v83 + v82 * *v42 + v42[2] * v84) + 32.0;
      v79 = v54[0] - v53[0];
      v80 = v54[1] - v53[1];
      v81 = v54[2] - v53[2];
      v43 = off_103EDFEC();
      if ( v77 > v43 )
        v43 = v77;
      v79 = v79 * v43;
      v80 = v80 * v43;
      v81 = v43 * v81;
      v44 = (float *)sub_101356D0();
      v45 = v44[1] + v80;
      v46 = v44[2] + v81;
      v55[0] = *v44 + v79 - v72;
      v55[1] = v45 - v73;
      v55[2] = v46 - v74;
      sub_101EE190(v55, v62);
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v62);
      v67 = 0.0;
      v62[2] = 0.0;
      v66[0] = 0.0;
      v62[0] = 0.0;
      sub_101EE040(v66, &v69, &v59, 0);
      sub_101EE040(v62, &v63, &v56, 0);
      result = a5;
      v47 = *(float *)(a5 + 24);
      v48 = *(float *)(a5 + 28);
      v49 = v60;
      v50 = v59;
      *(float *)(a5 + 24) = (v60 * v64 + v63 * v59 + v61 * v65) * v48 + (v64 * v70 + v63 * v69 + v71 * v65) * v47;
      *(float *)(a5 + 28) = v47 * (v57 * v70 + v56 * v69 + v58 * v71) + v48 * (v50 * v56 + v49 * v57 + v61 * v58);
    }
    else
    {
      result = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, a1 + 1);
      a1[4] = 0.0;
      a1[5] = 0.0;
      a1[6] = 0.0;
    }
  }
  return result;
}
