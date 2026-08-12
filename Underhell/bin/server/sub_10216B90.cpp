void __cdecl sub_10216B90(int a1, int a2, int a3, _DWORD *a4, int a5, char a6, char a7)
{
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  float *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  float *v23; // eax
  int v24; // esi
  int v25; // eax
  _DWORD *v26; // esi
  int v27; // eax
  float *v28; // edi
  float *v29; // eax
  double v30; // st6
  double v31; // st7
  double v32; // st7
  int v33; // esi
  int v34; // esi
  int (__thiscall *v35)(int); // edx
  const char *v36; // edi
  int v37; // eax
  char *v38; // eax
  double v39; // st7
  float *v40; // eax
  float v41; // ecx
  float v42; // edx
  float v43; // eax
  int v44; // eax
  float *v45; // eax
  double v46; // st7
  float *v47; // eax
  int v48; // edx
  int v49; // edi
  int v50; // eax
  float *v51; // edi
  int v52; // eax
  float *v53; // eax
  float v54; // ecx
  float v55; // edx
  float v56; // eax
  int v57; // ecx
  int (__thiscall *v58)(int); // edx
  int v59; // edi
  float v60; // [esp+14h] [ebp-658h]
  int v61; // [esp+18h] [ebp-654h]
  char *v62; // [esp+18h] [ebp-654h]
  int v63; // [esp+18h] [ebp-654h]
  int v64; // [esp+18h] [ebp-654h]
  float v65[3]; // [esp+28h] [ebp-644h] BYREF
  char Destination[1024]; // [esp+34h] [ebp-638h] BYREF
  float v67; // [esp+434h] [ebp-238h]
  float v68; // [esp+438h] [ebp-234h]
  float v69; // [esp+43Ch] [ebp-230h]
  float v70; // [esp+440h] [ebp-22Ch]
  float v71; // [esp+444h] [ebp-228h]
  int v72; // [esp+448h] [ebp-224h]
  char v73; // [esp+44Ch] [ebp-220h]
  __int16 v74; // [esp+44Dh] [ebp-21Fh]
  int v75[36]; // [esp+454h] [ebp-218h] BYREF
  int v76[2]; // [esp+4E4h] [ebp-188h] BYREF
  _BYTE v77[36]; // [esp+4ECh] [ebp-180h] BYREF
  _BYTE v78[20]; // [esp+510h] [ebp-15Ch] BYREF
  _BYTE v79[20]; // [esp+524h] [ebp-148h] BYREF
  int v80; // [esp+538h] [ebp-134h]
  int v81[12]; // [esp+544h] [ebp-128h] BYREF
  _BYTE v82[48]; // [esp+574h] [ebp-F8h] BYREF
  _BYTE v83[48]; // [esp+5A4h] [ebp-C8h] BYREF
  _BYTE v84[12]; // [esp+5D4h] [ebp-98h] BYREF
  int v85[3]; // [esp+5E0h] [ebp-8Ch] BYREF
  int v86; // [esp+5ECh] [ebp-80h]
  int v87; // [esp+5F0h] [ebp-7Ch]
  float v88; // [esp+5F4h] [ebp-78h] BYREF
  float v89; // [esp+5F8h] [ebp-74h]
  float v90; // [esp+5FCh] [ebp-70h]
  float v91; // [esp+600h] [ebp-6Ch] BYREF
  float v92; // [esp+604h] [ebp-68h]
  float v93; // [esp+608h] [ebp-64h]
  int v94; // [esp+60Ch] [ebp-60h]
  float v95; // [esp+610h] [ebp-5Ch] BYREF
  float v96; // [esp+614h] [ebp-58h]
  float v97; // [esp+618h] [ebp-54h]
  float v98; // [esp+61Ch] [ebp-50h] BYREF
  float v99; // [esp+620h] [ebp-4Ch]
  float v100; // [esp+624h] [ebp-48h]
  int v101; // [esp+628h] [ebp-44h]
  int v102; // [esp+62Ch] [ebp-40h] BYREF
  int v103; // [esp+630h] [ebp-3Ch]
  float v104; // [esp+634h] [ebp-38h] BYREF
  float v105; // [esp+638h] [ebp-34h]
  float v106; // [esp+63Ch] [ebp-30h]
  float v107; // [esp+640h] [ebp-2Ch] BYREF
  float v108; // [esp+644h] [ebp-28h]
  float v109; // [esp+648h] [ebp-24h]
  float v110; // [esp+64Ch] [ebp-20h] BYREF
  float v111; // [esp+650h] [ebp-1Ch]
  float v112; // [esp+654h] [ebp-18h]
  float v113; // [esp+658h] [ebp-14h] BYREF
  float v114; // [esp+65Ch] [ebp-10h]
  float v115; // [esp+660h] [ebp-Ch]
  _DWORD *v116; // [esp+664h] [ebp-8h]
  int v117; // [esp+668h] [ebp-4h]

  v7 = *(_DWORD *)(dword_106C299C + 48);
  v102 = v7;
  if ( v7 == -1 )
    goto LABEL_5;
  v8 = *(_DWORD *)(dword_106B31C8 + 4);
  if ( dword_106C28EC != v8 )
  {
    dword_106C28E8 = 0;
    dword_106C28EC = v8;
  }
  if ( dword_106C28E8 < v7 )
  {
LABEL_5:
    if ( a6 )
      v9 = -1;
    else
      v9 = *(_DWORD *)(dword_106C2954 + 48);
    if ( v9 != -1 && (a5 == -1 || v9 < a5) )
      a5 = v9;
    if ( sub_1020E0B0(a1, a2, a3, (int)a4, a5) )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0, a1) )
      {
        v94 = 0;
        v116 = a4;
        v101 = 0;
        if ( a2 )
          v116 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
        if ( v116 )
        {
          v10 = (*(int (__thiscall **)(_DWORD *))(*v116 + 208))(v116);
          v101 = v10;
          if ( v10 )
            v94 = *(_DWORD *)(v10 + 848);
        }
        sub_10246590(v76);
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, a1);
        if ( v11 )
        {
          v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0, v11);
          sub_10245F10(v12, 0);
        }
        v95 = flt_106F1CA8;
        v96 = flt_106F1CAC;
        v97 = flt_106F1CB0;
        v13 = sub_10100D60((int)v76, "placementOrigin") + 1;
        if ( v13 <= 0 )
        {
          sub_104227F0(&flt_106F1CB4);
        }
        else
        {
          sub_100BA690((int)v76, v13 - 1, (int)v82);
          sub_10421CE0(v82, 3, &v95);
        }
        v61 = *(_DWORD *)(a3 + 24);
        v60 = *(float *)(a3 + 20);
        memset(v85, 0, sizeof(v85));
        v86 = 0;
        v87 = 0;
        sub_10216470(a3, v85, a1, v60, v61);
        if ( v86 )
        {
          v103 = 0;
          if ( v86 > 0 )
          {
            v14 = (_DWORD *)(v85[0] + 1064);
            v117 = v85[0] + 1064;
            do
            {
              v15 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v14 - 263);
              if ( v15 > 0
                && (*(int *)(dword_106B31C8 + 20) <= 1 || !*(_DWORD *)(dword_106C1C44 + 48) || *v14 != 2 && (a7 || *v14)) )
              {
                if ( v102 != -1 && dword_106C28E8 > v102 || a5 != -1 && v103 >= a5 )
                  break;
                sub_10425040(*(_DWORD *)(a3 + 4), *(_DWORD *)a3, v83);
                sub_10246590(v75);
                v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v15);
                if ( v16 )
                {
                  v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0, v16);
                  sub_10245F10(v17, 0);
                }
                v18 = v101;
                ++dword_106C28E8;
                v109 = flt_106F1CB0;
                v19 = *(float **)(a3 + 4);
                v107 = flt_106F1CA8;
                v108 = flt_106F1CAC;
                v104 = *v19;
                v105 = v19[1];
                v106 = v19[2];
                if ( v101 && *((_BYTE *)v14 - 540) )
                {
                  v62 = (char *)(v14 - 135);
                  if ( *((_BYTE *)v14 - 3) )
                  {
                    v20 = sub_100BEAD0(v101, v62);
                    if ( v20 >= 0 )
                    {
                      sub_100BEB30(v18, v20, (int)&v107, (int)&v104);
                      sub_10425040(&v104, &v107, v83);
                    }
                  }
                  else
                  {
                    v21 = sub_10100D60((int)v75, v62) + 1;
                    if ( v21 > 0 )
                    {
                      (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v18 + 796))(v18, v21, v83);
                      sub_10421A90(v83, &v104);
                    }
                  }
                }
                else
                {
                  v22 = sub_10100D60((int)v75, "placementOrigin") + 1;
                  v110 = v95;
                  v111 = v96;
                  v112 = v97;
                  if ( v22 > 0 )
                  {
                    sub_100BA690((int)v75, v22 - 1, (int)v82);
                    sub_10421CE0(v82, 3, &v110);
                    v110 = v110 - v95;
                    v111 = v111 - v96;
                    v112 = v112 - v97;
                  }
                  v88 = *((float *)v14 - 266) - v110;
                  v89 = *((float *)v14 - 265) - v111;
                  v90 = *((float *)v14 - 264) - v112;
                  sub_10421B40(&v88, v83, &v107);
                }
                v23 = *(float **)(a3 + 8);
                v98 = *v23;
                v99 = v23[1];
                v100 = v23[2];
                if ( a2 )
                  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a2 + 212))(a2, &v107, &v98);
                v24 = v94;
                if ( v94 > *(_DWORD *)(v75[0] + 224) )
                  v24 = 0;
                if ( !sub_10215AF0() || (v25 = sub_10215AF0(), sub_10215A30(v25)) )
                {
                  v26 = sub_1020DEE0(
                          (int)v14,
                          (int)v116,
                          (int)(v14 - 266),
                          &v107,
                          &v104,
                          (int)&v98,
                          *(_DWORD *)(a3 + 12),
                          v24,
                          a3);
                  if ( v26 )
                  {
                    if ( sub_10215AF0() )
                    {
                      v63 = (*(int (__thiscall **)(_DWORD *))(*v26 + 208))(v26);
                      v27 = sub_10215AF0();
                      sub_10216740(v27, v63);
                    }
                    if ( v116 && (v116[48] & 0x10) != 0 )
                      sub_100EAB80(v26, 16);
                    if ( 0.0 != *((float *)v14 - 3) )
                    {
                      v28 = *(float **)a3;
                      v113 = v107 - **(float **)a3;
                      v114 = v108 - v28[1];
                      v115 = v109 - v28[2];
                      if ( sub_10018CD0(&v113, &flt_106F1CA8) )
                      {
                        v29 = (float *)(*(int (__thiscall **)(_DWORD *))(*v26 + 576))(v26);
                        v30 = v29[1] - v28[1];
                        v31 = v29[2] - v28[2];
                        v113 = *v29 - *v28;
                        v114 = v30;
                        v115 = v31;
                      }
                      off_10689714();
                      v32 = *(float *)(v117 - 12);
                      v91 = v113 * v32;
                      v92 = v114 * v32;
                      v93 = v32 * v115;
                      sub_100EA150((int)v26, &v91);
                      v14 = (_DWORD *)v117;
                    }
                    if ( *((_BYTE *)v14 - 2) )
                    {
                      v33 = v26[106];
                      if ( v33 )
                        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 60))(v33, 0);
                    }
                  }
                }
                sub_100C4910(v75);
              }
              v14 += 267;
              ++v103;
              v117 = (int)v14;
            }
            while ( v103 < v86 );
          }
        }
        else if ( a4 )
        {
          v34 = __RTDynamicCast(
                  (int)a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&IBreakableWithPropData `RTTI Type Descriptor',
                  0);
          if ( v34 )
          {
            if ( *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v34 + 52))(v34, &v102) )
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 68))(v34) )
              {
                v35 = *(int (__thiscall **)(int))(*(_DWORD *)v34 + 68);
                v117 = 0;
                if ( v35(v34) > 0 )
                {
                  do
                  {
                    if ( a5 != -1 && v117 >= a5 )
                      break;
                    v36 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v34 + 52))(v34, &v102);
                    if ( !v36 )
                      v36 = String;
                    v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 76))(v34);
                    v38 = (char *)sub_10215C30((int)&dword_106C29C8, v36, v37);
                    sub_104299C0(Destination, v38, 0x200u);
                    v70 = 1.0;
                    v67 = RandomFloat(5.0, 10.0);
                    v68 = 0.0;
                    v69 = 0.0;
                    v39 = *(float *)(a3 + 20);
                    v72 = 1;
                    v71 = v39;
                    v73 = 0;
                    Destination[512] = 0;
                    v74 = 0;
                    v40 = sub_100233A0((float *)a4 + 80);
                    v41 = *v40;
                    v42 = v40[1];
                    v43 = v40[2];
                    v110 = v41;
                    v111 = v42;
                    v112 = v43;
                    v44 = sub_102153D0(&v110);
                    v107 = 0.0;
                    v108 = 0.0;
                    v109 = 0.0;
                    v98 = 1.0;
                    v99 = 1.0;
                    v100 = 1.0;
                    *(&v107 + v44) = 0.5;
                    *(&v98 + v44) = 0.5;
                    sub_10111860((int)(a4 + 80), &v107, &v98, v65);
                    v45 = *(float **)a3;
                    v104 = v65[0] - **(float **)a3;
                    v105 = v65[1] - v45[1];
                    v106 = v65[2] - v45[2];
                    off_10689714();
                    v46 = *(float *)(a3 + 20);
                    v91 = v104 * v46;
                    v92 = v105 * v46;
                    v93 = v46 * v106;
                    v47 = (float *)sub_1001F410(a4);
                    v113 = *v47;
                    v114 = v47[1];
                    v48 = *(_DWORD *)v34;
                    v115 = v47[2];
                    v49 = (*(int (__thiscall **)(int))(v48 + 60))(v34);
                    if ( sub_10215AF0() )
                    {
                      v50 = sub_10215AF0();
                      if ( !sub_10215A30(v50) )
                        continue;
                    }
                    v51 = (float *)sub_1020DEE0(
                                     v49,
                                     (int)v116,
                                     (int)v65,
                                     v65,
                                     &v113,
                                     (int)&v91,
                                     (int)&flt_106F1CA8,
                                     v49,
                                     a3);
                    if ( v51 )
                    {
                      if ( sub_10215AF0() )
                      {
                        v64 = (*(int (__thiscall **)(float *))(*(_DWORD *)v51 + 208))(v51);
                        v52 = sub_10215AF0();
                        sub_10216740(v52, v64);
                      }
                      v53 = sub_100233A0(v51 + 80);
                      v54 = *v53;
                      v55 = v53[1];
                      v56 = v53[2];
                      v88 = v54;
                      v89 = v55;
                      v90 = v56;
                      sub_104227F0(&v113);
                      sub_10215460(&v88, &v110, (int)v83);
                      sub_10421A90(v83, &v113);
                      v57 = *((_DWORD *)v51 + 106);
                      if ( v57 )
                      {
                        (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v57 + 188))(v57, v84, 0);
                        (*(void (__thiscall **)(_DWORD, _BYTE *, float *, int))(**((_DWORD **)v51 + 106) + 180))(
                          *((_DWORD *)v51 + 106),
                          v84,
                          &v113,
                          1);
                      }
                      sub_100E0EA0((int)v51, &v113);
                      if ( (v116[48] & 0x10) != 0 )
                        sub_100EAB80(v51, 16);
                    }
                    else
                    {
                      DevWarning("PropBreakableCreateAll: Could not create model %s\n", Destination);
                    }
                    v58 = *(int (__thiscall **)(int))(*(_DWORD *)v34 + 68);
                    v59 = ++v117;
                  }
                  while ( v59 < v58(v34) );
                }
              }
            }
          }
        }
        sub_102375F0(v85);
        nullsub_4();
        if ( v80 )
          sub_10184660(v80);
        sub_101C7570(v81);
        sub_101C8650(v81);
        sub_102375F0(v79);
        sub_102375F0(v78);
        sub_102375F0(v77);
      }
    }
    else
    {
      DevMsg("Failed to create PropBreakable: would exceed MAX_EDICTS\n");
    }
  }
}
