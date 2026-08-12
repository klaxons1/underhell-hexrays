int __usercall sub_10019B50@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        float *a8,
        float *a9,
        float *a10,
        float a11,
        int a12,
        int a13,
        float a14,
        float a15,
        int a16,
        float *a17,
        float a18)
{
  int result; // eax
  int v19; // ecx
  int v20; // eax
  float *v21; // eax
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // rt1
  double v26; // st5
  double v27; // st4
  double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st7
  double v33; // st6
  double v34; // st6
  double v35; // st4
  double v36; // st5
  double v37; // st7
  int v38; // ebx
  int v39; // ecx
  _DWORD *v40; // eax
  int v41; // eax
  int v42; // esi
  int v43; // esi
  int v44; // edx
  float *v45; // eax
  char v46; // si
  int v47; // edx
  unsigned int v48; // esi
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  double v54; // st7
  double v55; // st6
  double v56; // rtt
  bool v57; // zf
  double v58; // st5
  double v59; // st4
  double v60; // st7
  double v61; // st4
  double v62; // st6
  double v63; // st5
  double v64; // st4
  double v65; // st3
  double v66; // st2
  double v67; // st4
  double v68; // st3
  double v69; // st3
  double v70; // st2
  double v71; // st4
  double v72; // st4
  double v73; // rtt
  double v74; // st3
  double v75; // st4
  float *v76; // eax
  char v77; // si
  int v78; // ecx
  int v79; // edx
  unsigned int v80; // esi
  float *v81; // eax
  float *v82; // eax
  float *v83; // eax
  int v84; // eax
  int v85; // esi
  _DWORD *v87[44]; // [esp+Ch] [ebp-240h] BYREF
  char v88; // [esp+BCh] [ebp-190h]
  int v89; // [esp+C0h] [ebp-18Ch]
  int v90; // [esp+C4h] [ebp-188h]
  char v91; // [esp+C8h] [ebp-184h]
  _DWORD *v92; // [esp+CCh] [ebp-180h] BYREF
  char v93; // [esp+D8h] [ebp-174h]
  int v94; // [esp+DCh] [ebp-170h]
  int v95; // [esp+E0h] [ebp-16Ch]
  int v96; // [esp+E4h] [ebp-168h]
  _DWORD *v97; // [esp+E8h] [ebp-164h]
  int v98; // [esp+ECh] [ebp-160h]
  char v99; // [esp+FCh] [ebp-150h]
  _DWORD v100[44]; // [esp+100h] [ebp-14Ch] BYREF
  int v101; // [esp+1B0h] [ebp-9Ch]
  float *v102; // [esp+1B8h] [ebp-94h]
  float *v103; // [esp+1C0h] [ebp-8Ch]
  unsigned int *v104; // [esp+1E0h] [ebp-6Ch]
  float v105; // [esp+1FCh] [ebp-50h]
  float v106; // [esp+200h] [ebp-4Ch]
  int v107; // [esp+204h] [ebp-48h]
  float v108; // [esp+208h] [ebp-44h]
  int v109; // [esp+20Ch] [ebp-40h]
  float v110; // [esp+210h] [ebp-3Ch]
  float v111; // [esp+214h] [ebp-38h]
  float v112; // [esp+218h] [ebp-34h]
  float v113; // [esp+21Ch] [ebp-30h]
  float v114; // [esp+220h] [ebp-2Ch]
  float v115; // [esp+224h] [ebp-28h]
  float v116; // [esp+228h] [ebp-24h]
  float v117; // [esp+22Ch] [ebp-20h]
  float v118; // [esp+230h] [ebp-1Ch]
  int v119; // [esp+234h] [ebp-18h]
  float v120; // [esp+238h] [ebp-14h]
  float v121; // [esp+23Ch] [ebp-10h]
  int v122; // [esp+240h] [ebp-Ch]
  int v123; // [esp+244h] [ebp-8h]
  char v124; // [esp+248h] [ebp-4h]
  __int16 v125; // [esp+249h] [ebp-3h]

  result = sub_10017240(a3, a4, a6, a7);
  if ( result )
  {
    v19 = *(_DWORD *)(result + 16);
    if ( v19 )
    {
      v20 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v19 + 188))(
              v19,
              "$hdrcolorscale",
              &unk_10403230);
      if ( v20 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 12))(v20, LODWORD(a18));
    }
    *(float *)&v119 = *a9 - *a10;
    v120 = a9[1] - a10[1];
    v121 = 0.0;
    off_103EDFEC();
    v123 = v119;
    v21 = (float *)sub_10142300();
    v116 = *v21 * *(float *)&v119;
    v117 = v21[1] * *(float *)&v119;
    v118 = *(float *)&v119 * v21[2];
    v22 = (float *)sub_101422F0();
    v23 = -v120;
    v24 = v23 * *v22 + v116;
    v25 = v22[1] * v23 + v117;
    v26 = v23 * v22[2] + v118;
    v113 = v24 * a14 + *a8;
    v114 = v25 * a14 + a8[1];
    v115 = v26 * a14 + a8[2];
    v27 = -a14;
    v106 = v27;
    v110 = v24 * v27 + *a8;
    v111 = v25 * v27 + a8[1];
    v112 = v26 * v27 + a8[2];
    v28 = 1.0 / a15;
    v108 = v28;
    v29 = v28 * (a11 - *((float *)off_103DC81C + 3));
    v30 = *a17 * v29;
    v31 = a17[1] * v29;
    v32 = v29 * a17[2];
    v33 = v30 * 255.0;
    if ( (int)v33 <= 255 )
    {
      if ( (int)v33 >= 0 )
      {
        v35 = v33;
        v34 = 255.0;
        v123 = (int)v35;
        v124 = (int)v35;
      }
      else
      {
        v34 = 255.0;
        v124 = 0;
      }
    }
    else
    {
      v34 = 255.0;
      v124 = -1;
    }
    v36 = v31 * v34;
    if ( (int)v36 <= 255 )
    {
      if ( (int)v36 >= 0 )
      {
        v123 = (int)v36;
        LOBYTE(v125) = (int)v36;
      }
      else
      {
        LOBYTE(v125) = 0;
      }
    }
    else
    {
      LOBYTE(v125) = -1;
    }
    v37 = v32 * v34;
    if ( (int)v37 <= 255 )
    {
      if ( (int)v37 >= 0 )
      {
        v123 = (int)v37;
        HIBYTE(v125) = (int)v37;
      }
      else
      {
        HIBYTE(v125) = 0;
      }
    }
    else
    {
      HIBYTE(v125) = -1;
    }
    v38 = (int)a5;
    v39 = 0;
    v122 = 0;
    v40 = a5;
    if ( a5 )
    {
      do
      {
        v40 = (_DWORD *)*v40;
        ++v39;
      }
      while ( v40 );
      v122 = v39;
    }
    v41 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3, a1);
    v42 = v41;
    v109 = v41;
    if ( v41 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 8))(v41);
    v43 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v42 + 224))(v42, 1, 0, 0, 0);
    v107 = v43;
    sub_10016C20((int)v87);
    v89 = v43;
    v91 = 1;
    v90 = 7;
    v44 = *(_DWORD *)v43;
    v123 = 4 * v122;
    v122 *= 6;
    (*(void (__thiscall **)(int, int))(v44 + 40))(v43, 2);
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v89 + 68))(v89, v123, v122, v87);
    v94 = v43 + 4;
    v95 = v122;
    v96 = 0;
    v99 = 0;
    v98 = 0;
    v92 = v87[41];
    v97 = v87[39];
    v93 = v88;
    sub_10016990((int)v100, v43, v123, v87);
    v98 = 0;
    sub_10016A00(v100);
    if ( a5 )
    {
      do
      {
        v45 = v102;
        v46 = v124;
        *v102 = v113;
        v47 = (unsigned __int8)v125;
        v45[1] = v114;
        v45[2] = v115;
        v48 = HIBYTE(v125) | ((v47 | ((*(_DWORD *)&v46 | 0xFFFFFF00) << 8)) << 8);
        *v104 = v48;
        v49 = v103;
        *v103 = 0.0;
        v49[1] = 0.0;
        sub_10016A80(v100);
        v50 = v102;
        *v102 = v110;
        v50[1] = v111;
        v50[2] = v112;
        *v104 = v48;
        v51 = v103;
        *v103 = 1.0;
        v51[1] = 0.0;
        sub_10016A80(v100);
        sub_1013B9F0(v38 + 8, a9);
        *(float *)&v119 = *a9 - *a10;
        v120 = a9[1] - a10[1];
        v121 = 0.0;
        off_103EDFEC();
        v123 = v119;
        v52 = (float *)sub_10142300();
        v116 = *v52 * *(float *)&v123;
        v117 = v52[1] * *(float *)&v123;
        v118 = *(float *)&v123 * v52[2];
        v53 = (float *)sub_101422F0();
        v54 = -v120;
        v55 = *v53 * v54 + v116;
        v56 = v53[1] * v54 + v117;
        v57 = *(_DWORD *)v38 == 0;
        v58 = v54 * v53[2] + v118;
        v113 = v55 * a14 + *(float *)(v38 + 8);
        v114 = v56 * a14 + *(float *)(v38 + 12);
        v115 = a14 * v58 + *(float *)(v38 + 16);
        v59 = v55 * v106 + *(float *)(v38 + 8);
        v110 = v59;
        v60 = v59;
        v61 = v56 * v106 + *(float *)(v38 + 12);
        v111 = v61;
        v62 = v61;
        v63 = v106 * v58 + *(float *)(v38 + 16);
        v112 = v63;
        if ( v57 )
        {
          v125 = 0;
          v124 = 0;
        }
        else
        {
          v64 = (*(float *)(v38 + 4) - *((float *)off_103DC81C + 3)) * v108;
          v65 = *a17 * v64;
          v66 = v64 * a17[2];
          v67 = a17[1] * v64;
          v105 = v66;
          v68 = v65 * 255.0;
          if ( (int)v68 <= 255 )
          {
            if ( (int)v68 >= 0 )
            {
              v70 = v68;
              v69 = 255.0;
              v123 = (int)v70;
              v124 = (int)v70;
            }
            else
            {
              v69 = 255.0;
              v124 = 0;
            }
          }
          else
          {
            v69 = 255.0;
            v124 = -1;
          }
          v71 = v67 * v69;
          if ( (int)v71 <= 255 )
          {
            if ( (int)v71 >= 0 )
            {
              v73 = v69;
              v74 = v71;
              v72 = v73;
              v123 = (int)v74;
              LOBYTE(v125) = (int)v74;
            }
            else
            {
              v72 = v69;
              LOBYTE(v125) = 0;
            }
          }
          else
          {
            v72 = v69;
            LOBYTE(v125) = -1;
          }
          v75 = v72 * v105;
          if ( (int)v75 <= 255 )
          {
            if ( (int)v75 >= 0 )
            {
              v123 = (int)v75;
              HIBYTE(v125) = (int)v75;
            }
            else
            {
              HIBYTE(v125) = 0;
            }
          }
          else
          {
            HIBYTE(v125) = -1;
          }
        }
        v76 = v102;
        v77 = v124;
        *v102 = v60;
        v78 = (unsigned __int8)v125;
        v76[1] = v62;
        v79 = HIBYTE(v125);
        v76[2] = v63;
        v80 = v79 | ((v78 | ((*(_DWORD *)&v77 | 0xFFFFFF00) << 8)) << 8);
        *v104 = v80;
        v81 = v103;
        *v103 = 1.0;
        v81[1] = 1.0;
        sub_10016A80(v100);
        v82 = v102;
        *v102 = v113;
        v82[1] = v114;
        v82[2] = v115;
        *v104 = v80;
        v83 = v103;
        *v103 = 0.0;
        v83[1] = 1.0;
        sub_10016A80(v100);
        *a10 = *a9;
        a10[1] = a9[1];
        a10[2] = a9[2];
        v38 = *(_DWORD *)v38;
      }
      while ( v38 );
      v43 = v107;
    }
    if ( v91 )
    {
      switch ( v90 )
      {
        case 4:
          v84 = 2 * v101 - 2;
          break;
        case 5:
          v84 = 2 * v101;
          break;
        case 6:
          v84 = 3 * v101 - 6;
          break;
        case 7:
          v84 = 6 * v101 / 4;
          break;
        case 8:
          v84 = 0;
          break;
        default:
          v84 = v101;
          break;
      }
      sub_10016B00(&v92, v90, v84);
    }
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v89 + 80))(v89, v101, v96, v87);
    v94 = 0;
    v95 = 0;
    v100[43] = 0;
    v100[41] = 0;
    v89 = 0;
    v100[19] = -1;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v43 + 48))(v43, -1, 0);
    sub_10016BC0(v87);
    v85 = v109;
    (*(void (__thiscall **)(int))(*(_DWORD *)v109 + 12))(v109);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 4))(v85);
  }
  return result;
}
