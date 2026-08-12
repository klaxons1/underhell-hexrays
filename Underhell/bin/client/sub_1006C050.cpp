void __usercall sub_1006C050(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        float *a6,
        float a7,
        float a8,
        float a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13,
        int a14,
        float *a15,
        float *a16,
        float a17)
{
  double v17; // st6
  double v18; // st7
  float v19; // ebx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  double v26; // st7
  double v27; // st6
  double v28; // st6
  double v29; // st7
  int v30; // esi
  float *v31; // eax
  double v32; // st7
  float *v33; // eax
  double v34; // st6
  double v35; // st7
  double v36; // st7
  float *v37; // eax
  float *v38; // eax
  double v39; // st6
  double v40; // st7
  double v41; // st7
  float *v42; // eax
  float *v43; // eax
  double v44; // st6
  double v45; // st7
  double v46; // st7
  float *v47; // eax
  float *v48; // eax
  double v49; // st6
  double v50; // st7
  int v51; // eax
  float v52; // [esp+2Ch] [ebp-234h]
  int v55; // [esp+38h] [ebp-228h]
  _DWORD *v56[44]; // [esp+3Ch] [ebp-224h] BYREF
  char v57; // [esp+ECh] [ebp-174h]
  int v58; // [esp+F0h] [ebp-170h]
  int v59; // [esp+F4h] [ebp-16Ch]
  char v60; // [esp+F8h] [ebp-168h]
  _DWORD *v61; // [esp+FCh] [ebp-164h] BYREF
  char v62; // [esp+108h] [ebp-158h]
  int v63; // [esp+10Ch] [ebp-154h]
  int v64; // [esp+110h] [ebp-150h]
  int v65; // [esp+114h] [ebp-14Ch]
  _DWORD *v66; // [esp+118h] [ebp-148h]
  int v67; // [esp+11Ch] [ebp-144h]
  char v68; // [esp+12Ch] [ebp-134h]
  _DWORD v69[44]; // [esp+130h] [ebp-130h] BYREF
  int v70; // [esp+1E0h] [ebp-80h]
  float *v71; // [esp+1E8h] [ebp-78h]
  float *v72; // [esp+1F0h] [ebp-70h]
  int *v73; // [esp+210h] [ebp-50h]
  float v74; // [esp+224h] [ebp-3Ch] BYREF
  float v75; // [esp+228h] [ebp-38h]
  float v76; // [esp+22Ch] [ebp-34h]
  float v77; // [esp+230h] [ebp-30h]
  float v78; // [esp+234h] [ebp-2Ch] BYREF
  float v79; // [esp+238h] [ebp-28h]
  float v80; // [esp+23Ch] [ebp-24h]
  float v81; // [esp+240h] [ebp-20h]
  float v82; // [esp+244h] [ebp-1Ch] BYREF
  float v83; // [esp+248h] [ebp-18h]
  float v84; // [esp+24Ch] [ebp-14h]
  float v85; // [esp+250h] [ebp-10h]
  float v86; // [esp+254h] [ebp-Ch]
  float v87; // [esp+258h] [ebp-8h]
  float v88; // [esp+25Ch] [ebp-4h]
  float v89; // [esp+274h] [ebp+14h]

  v17 = 1.0;
  if ( a7 <= 0.0 )
  {
    v18 = 1.0;
  }
  else
  {
    v17 = a7;
    v18 = 1.0;
  }
  v89 = v17;
  v19 = a9;
  if ( a9 == 0.0 )
  {
    v52 = v18;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(LODWORD(v52));
  }
  v20 = *(_DWORD *)(a5 + 16);
  if ( v20 )
  {
    sub_10124880(LODWORD(v19));
    sub_10124650(a8);
    v21 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3, a1);
    if ( v21 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 8))(v21);
    v22 = dword_1043A340;
    if ( (dword_1043A340
       || (v22 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "sv_cheats"),
           (dword_1043A340 = v22) != 0))
      && *(_DWORD *)(*(_DWORD *)(v22 + 28) + 48)
      && *(_DWORD *)(dword_1043A72C + 48)
      || *(_DWORD *)(dword_104113F4 + 48) == 2 )
    {
      v23 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "debug/debugspritewireframe",
              "Other textures",
              1,
              0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v21 + 36))(v21, v23, 0);
    }
    else
    {
      if ( a4 )
        v55 = a4 + 4;
      else
        v55 = 0;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v21 + 36))(v21, v20, v55);
    }
    v24 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v20 + 188))(
            v20,
            "$HDRCOLORSCALE",
            &unk_104113D0);
    if ( v24 )
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v24 + 40))(
        v24,
        LODWORD(a17),
        LODWORD(a17),
        LODWORD(a17));
    v25 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v21 + 224))(v21, 1, 0, 0, 0);
    sub_10016C20((int)v56);
    v58 = v25;
    v60 = 1;
    v59 = 7;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 40))(v25, 2);
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v58 + 68))(v58, 4, 6, v56);
    v61 = v56[41];
    v66 = v56[39];
    v63 = v25 + 4;
    v62 = v57;
    v65 = 0;
    v64 = 6;
    v68 = 0;
    v67 = 0;
    sub_10016990((int)v69, v25, 4, v56);
    v67 = 0;
    sub_10016A00(v69);
    v26 = *(float *)(a5 + 40) * v89;
    v75 = *a16 * v26 + *a6;
    v76 = a16[1] * v26 + a6[1];
    v77 = v26 * a16[2] + a6[2];
    v27 = *(float *)(a5 + 44) * v89;
    v86 = *a15 * v27;
    v87 = a15[1] * v27;
    v88 = v27 * a15[2];
    v28 = *(float *)(a5 + 36) * v89;
    v83 = *a16 * v28 + *a6;
    v84 = a16[1] * v28 + a6[1];
    v85 = v28 * a16[2] + a6[2];
    v29 = v89 * *(float *)(a5 + 48);
    v79 = *a15 * v29;
    v80 = a15[1] * v29;
    v81 = v29 * a15[2];
    sub_101245D0(&a9, &v78, &v74, &v82);
    v30 = a12 | ((a11 | ((a10 | (a13 << 8)) << 8)) << 8);
    *v73 = v30;
    v31 = v72;
    v32 = v82;
    *v72 = a9;
    v31[1] = v32;
    v33 = v71;
    v34 = v87 + v76;
    v35 = v88 + v77;
    *v71 = v86 + v75;
    v33[1] = v34;
    v33[2] = v35;
    sub_10016A80(v69);
    *v73 = v30;
    v36 = v78;
    v37 = v72;
    *v72 = a9;
    v37[1] = v36;
    v38 = v71;
    v39 = v84 + v87;
    v40 = v85 + v88;
    *v71 = v83 + v86;
    v38[1] = v39;
    v38[2] = v40;
    sub_10016A80(v69);
    *v73 = v30;
    v41 = v78;
    v42 = v72;
    *v72 = v74;
    v42[1] = v41;
    v43 = v71;
    v44 = v80 + v84;
    v45 = v81 + v85;
    *v71 = v79 + v83;
    v43[1] = v44;
    v43[2] = v45;
    sub_10016A80(v69);
    *v73 = v30;
    v46 = v82;
    v47 = v72;
    *v72 = v74;
    v47[1] = v46;
    v48 = v71;
    v49 = v80 + v76;
    v50 = v81 + v77;
    *v71 = v79 + v75;
    v48[1] = v49;
    v48[2] = v50;
    sub_10016A80(v69);
    if ( v60 )
    {
      switch ( v59 )
      {
        case 4:
          v51 = 2 * v70 - 2;
          break;
        case 5:
          v51 = 2 * v70;
          break;
        case 6:
          v51 = 3 * v70 - 6;
          break;
        case 7:
          v51 = 6 * v70 / 4;
          break;
        case 8:
          v51 = 0;
          break;
        default:
          v51 = v70;
          break;
      }
      sub_10016B00(&v61, v59, v51);
    }
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v58 + 80))(v58, v70, v65, v56);
    v63 = 0;
    v64 = 0;
    v69[43] = 0;
    v69[41] = 0;
    v58 = 0;
    v69[19] = -1;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v25 + 48))(v25, -1, 0);
    sub_10016BC0(v56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 12))(v21);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 4))(v21);
  }
}
