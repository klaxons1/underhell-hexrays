void __userpurge sub_1014D2D0(int a1@<ecx>, _DWORD *a2@<esi>, char a3)
{
  double v4; // st7
  float *v5; // eax
  double v6; // st6
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  float *v13; // eax
  double v14; // st5
  double v15; // rt2
  double v16; // st5
  double v17; // rtt
  double v18; // st5
  float *v19; // eax
  double v20; // st5
  double v21; // rtt
  double v22; // st5
  float *v23; // eax
  double v24; // rt0
  double v25; // st5
  float *v26; // eax
  float *v27; // eax
  double v28; // st5
  double v29; // rtt
  double v30; // st5
  double v31; // rt0
  double v32; // st5
  float *v33; // eax
  float *v34; // eax
  double v35; // st5
  double v36; // rtt
  double v37; // st5
  double v38; // rt0
  double v39; // st5
  float *v40; // eax
  int v41; // eax
  _DWORD v43[44]; // [esp+34h] [ebp-254h] BYREF
  char v44; // [esp+E4h] [ebp-1A4h]
  int v45; // [esp+E8h] [ebp-1A0h]
  int v46; // [esp+ECh] [ebp-19Ch]
  char v47; // [esp+F0h] [ebp-198h]
  _DWORD v48[3]; // [esp+F4h] [ebp-194h] BYREF
  char v49; // [esp+100h] [ebp-188h]
  int v50; // [esp+104h] [ebp-184h]
  int v51; // [esp+108h] [ebp-180h]
  int v52; // [esp+10Ch] [ebp-17Ch]
  int v53; // [esp+110h] [ebp-178h]
  int v54; // [esp+114h] [ebp-174h]
  char v55; // [esp+124h] [ebp-164h]
  _DWORD v56[41]; // [esp+128h] [ebp-160h] BYREF
  int v57; // [esp+1CCh] [ebp-BCh]
  int v58; // [esp+1D4h] [ebp-B4h]
  int v59; // [esp+1D8h] [ebp-B0h]
  float *v60; // [esp+1E0h] [ebp-A8h]
  float *v61; // [esp+1E8h] [ebp-A0h]
  int *v62; // [esp+208h] [ebp-80h]
  float v63; // [esp+21Ch] [ebp-6Ch]
  int v64; // [esp+220h] [ebp-68h] BYREF
  int v65; // [esp+224h] [ebp-64h] BYREF
  int v66; // [esp+228h] [ebp-60h]
  int v67; // [esp+22Ch] [ebp-5Ch]
  float v68; // [esp+230h] [ebp-58h] BYREF
  float v69; // [esp+234h] [ebp-54h]
  float v70; // [esp+238h] [ebp-50h]
  float v71; // [esp+23Ch] [ebp-4Ch]
  float v72; // [esp+240h] [ebp-48h]
  float v73; // [esp+244h] [ebp-44h]
  float v74; // [esp+248h] [ebp-40h] BYREF
  float v75; // [esp+24Ch] [ebp-3Ch]
  float v76; // [esp+250h] [ebp-38h]
  float v77; // [esp+254h] [ebp-34h] BYREF
  float v78; // [esp+258h] [ebp-30h]
  float v79; // [esp+25Ch] [ebp-2Ch]
  float v80; // [esp+260h] [ebp-28h] BYREF
  float v81; // [esp+264h] [ebp-24h]
  float v82; // [esp+268h] [ebp-20h]
  float v83; // [esp+26Ch] [ebp-1Ch] BYREF
  float v84; // [esp+270h] [ebp-18h]
  float v85; // [esp+274h] [ebp-14h]
  float v86; // [esp+278h] [ebp-10h]
  float v87; // [esp+27Ch] [ebp-Ch]
  float v88; // [esp+280h] [ebp-8h]
  float v89; // [esp+284h] [ebp-4h]
  int v90; // [esp+290h] [ebp+8h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    v68 = *(float *)(a1 + 20);
    v69 = *(float *)(a1 + 24);
    v4 = *(float *)(a1 + 28);
  }
  else
  {
    v5 = sub_101422C0();
    v6 = *(float *)(a1 + 8) - v5[1];
    v4 = *(float *)(a1 + 12) - v5[2];
    v68 = *(float *)(a1 + 4) - *v5;
    v69 = v6;
  }
  v70 = v4;
  off_103EDFEC();
  v7 = sub_101422E0();
  v8 = v7[1] * v69 + *v7 * v68 + v7[2] * v70;
  v63 = v8;
  if ( v8 > flt_1042F8B0 )
  {
    sub_100AFE60(a1, &v68, a3);
    if ( 0.0 != *(float *)(a1 + 148) )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v10 = v9;
      v67 = v9;
      if ( v9 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v66 = 0;
      if ( *(int *)(a1 + 136) > 0 )
      {
        v90 = a1 + 40;
        do
        {
          (*(void (__thiscall **)(int, float, int, int *, int *, float *, _DWORD *))(*(_DWORD *)a1 + 8))(
            a1,
            COERCE_FLOAT(LODWORD(v63)),
            v90,
            &v64,
            &v65,
            &v77,
            a2);
          (*(void (__thiscall **)(int, float *, int, int, float *, float *, float *))(*(_DWORD *)a1 + 12))(
            a1,
            &v68,
            v64,
            v65,
            &v83,
            &v80,
            &v74);
          v11 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                  dword_1047C96C,
                  "sun/overlay",
                  "ClientEffect textures",
                  1,
                  0);
          v12 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v10 + 224))(v10, 0, 0, 0, v11);
          sub_10016C20((int)v43);
          v45 = v12;
          v47 = 1;
          v46 = 7;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 2);
          (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v45 + 68))(v45, 4, 6, v43);
          v50 = v12 + 4;
          v53 = v43[39];
          v52 = 0;
          v51 = 6;
          v55 = 0;
          v48[0] = v43[41];
          v49 = v44;
          v54 = 0;
          sub_10016990((int)v56, v12, 4, v43);
          v54 = 0;
          sub_10016A00(v56);
          v13 = v60;
          v14 = v83 - v74 + v80;
          v71 = v14;
          v15 = v14;
          v16 = v84 - v75 + v81;
          v72 = v16;
          v17 = v16;
          v18 = v85 - v76 + v82;
          v73 = v18;
          *v60 = v15;
          v13[1] = v17;
          v13[2] = v18;
          v88 = v79 * 255.0 + 8388608.0;
          v89 = v78 * 255.0 + 8388608.0;
          v87 = 255.0 * v77 + 8388608.0;
          v86 = 8388863.0;
          *v62 = LOBYTE(v88) | ((LOBYTE(v89) | ((LOBYTE(v87) | (LOBYTE(v86) << 8)) << 8)) << 8);
          v19 = v61;
          *v61 = 0.0;
          v19[1] = 1.0;
          sub_10016A80(v56);
          v20 = v74 + v83 + v80;
          v71 = v20;
          v21 = v20;
          v22 = v75 + v84 + v81;
          v72 = v22;
          v23 = v60;
          v24 = v22;
          v25 = v76 + v85 + v82;
          v73 = v25;
          *v60 = v21;
          v23[1] = v24;
          v23[2] = v25;
          v86 = v79 * 255.0 + 8388608.0;
          v87 = v78 * 255.0 + 8388608.0;
          v89 = 255.0 * v77 + 8388608.0;
          v88 = 8388863.0;
          *v62 = LOBYTE(v86) | ((LOBYTE(v87) | ((LOBYTE(v89) | (LOBYTE(v88) << 8)) << 8)) << 8);
          v26 = v61;
          *v61 = 1.0;
          v26[1] = 1.0;
          sub_10016A80(v56);
          v27 = v60;
          v28 = v74 + v83 - v80;
          v71 = v28;
          v29 = v28;
          v30 = v75 + v84 - v81;
          v72 = v30;
          v31 = v30;
          v32 = v76 + v85 - v82;
          v73 = v32;
          *v60 = v29;
          v27[1] = v31;
          v27[2] = v32;
          v86 = v79 * 255.0 + 8388608.0;
          v87 = v78 * 255.0 + 8388608.0;
          v89 = 255.0 * v77 + 8388608.0;
          v88 = 8388863.0;
          *v62 = LOBYTE(v86) | ((LOBYTE(v87) | ((LOBYTE(v89) | (LOBYTE(v88) << 8)) << 8)) << 8);
          v33 = v61;
          *v61 = 1.0;
          v33[1] = 0.0;
          sub_10016A80(v56);
          v34 = v60;
          v35 = v83 - v74 - v80;
          v71 = v35;
          v36 = v35;
          v37 = v84 - v75 - v81;
          v72 = v37;
          v38 = v37;
          v39 = v85 - v76 - v82;
          v73 = v39;
          *v60 = v36;
          v34[1] = v38;
          v34[2] = v39;
          v86 = v79 * 255.0 + 8388608.0;
          v87 = v78 * 255.0 + 8388608.0;
          v89 = 255.0 * v77 + 8388608.0;
          v88 = 8388863.0;
          *v62 = LOBYTE(v86) | ((LOBYTE(v87) | ((LOBYTE(v89) | (LOBYTE(v88) << 8)) << 8)) << 8);
          v40 = v61;
          *v61 = 0.0;
          v40[1] = 0.0;
          sub_10016A80(v56);
          if ( v47 )
          {
            switch ( v46 )
            {
              case 4:
                v41 = 2 * v59 - 2;
                break;
              case 5:
                v41 = 2 * v59;
                break;
              case 6:
                v41 = 3 * v59 - 6;
                break;
              case 7:
                v41 = 6 * v59 / 4;
                break;
              case 8:
                v41 = 0;
                break;
              default:
                v41 = v59;
                break;
            }
            sub_10016B00(v48, v46, v41);
          }
          a2 = v43;
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v45 + 80))(v45, v59, v52);
          v50 = 0;
          v51 = 0;
          v58 = 0;
          v57 = 0;
          v56[19] = -1;
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v45 + 48))(v45, -1, 0);
          v45 = 0;
          if ( v57 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v57 + 8))(v57) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v57 + 16))(v57);
          if ( v50 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v50 + 8))(v50) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 16))(v50);
          v90 += 24;
          v10 = v67;
          ++v66;
        }
        while ( v66 < *(_DWORD *)(a1 + 136) );
      }
      if ( v10 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
      }
    }
  }
}
