int __cdecl sub_1010C5F0(int a1, int a2, int a3, int a4, int a5, char a6, char a7)
{
  int v7; // ecx
  int result; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // edi
  int v18; // eax
  int v19; // eax
  float *v20; // edi
  float *v21; // esi
  float *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  float *v26; // eax
  int v27; // eax
  int v28; // esi
  float *v29; // edi
  float *v30; // esi
  float *v31; // eax
  double v32; // st6
  double v33; // st7
  double v34; // st7
  int v35; // edi
  int v36; // eax
  int v37; // esi
  int (__thiscall *v38)(int); // eax
  const char *v39; // eax
  char *v40; // eax
  double v41; // st7
  float *v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  float *v45; // eax
  double v46; // st7
  int (__thiscall *v47)(int); // edx
  float *v48; // eax
  int v49; // edx
  int v50; // eax
  float *v51; // eax
  float *v52; // edi
  float *v53; // eax
  float v54; // ecx
  float v55; // edx
  float v56; // eax
  int v57; // ecx
  int (__thiscall *v58)(int); // edx
  _DWORD *v59; // edi
  int v60; // [esp-8h] [ebp-66Ch]
  int v61; // [esp+Ch] [ebp-658h]
  char *v62; // [esp+10h] [ebp-654h]
  float v63[3]; // [esp+20h] [ebp-644h] BYREF
  char Destination[1024]; // [esp+2Ch] [ebp-638h] BYREF
  float v65; // [esp+42Ch] [ebp-238h]
  float v66; // [esp+430h] [ebp-234h]
  float v67; // [esp+434h] [ebp-230h]
  float v68; // [esp+438h] [ebp-22Ch]
  float v69; // [esp+43Ch] [ebp-228h]
  int v70; // [esp+440h] [ebp-224h]
  char v71; // [esp+444h] [ebp-220h]
  __int16 v72; // [esp+445h] [ebp-21Fh]
  int v73[36]; // [esp+44Ch] [ebp-218h] BYREF
  int v74[2]; // [esp+4DCh] [ebp-188h] BYREF
  char v75[36]; // [esp+4E4h] [ebp-180h] BYREF
  char v76[20]; // [esp+508h] [ebp-15Ch] BYREF
  char v77[20]; // [esp+51Ch] [ebp-148h] BYREF
  int v78; // [esp+530h] [ebp-134h]
  int v79[12]; // [esp+53Ch] [ebp-128h] BYREF
  _BYTE v80[48]; // [esp+56Ch] [ebp-F8h] BYREF
  _BYTE v81[48]; // [esp+59Ch] [ebp-C8h] BYREF
  _BYTE v82[12]; // [esp+5CCh] [ebp-98h] BYREF
  int v83; // [esp+5D8h] [ebp-8Ch]
  int v84[2]; // [esp+5DCh] [ebp-88h] BYREF
  int v85; // [esp+5E4h] [ebp-80h]
  int v86; // [esp+5E8h] [ebp-7Ch]
  int v87; // [esp+5ECh] [ebp-78h]
  float v88; // [esp+5F0h] [ebp-74h] BYREF
  float v89; // [esp+5F4h] [ebp-70h]
  float v90; // [esp+5F8h] [ebp-6Ch]
  float v91; // [esp+5FCh] [ebp-68h] BYREF
  float v92; // [esp+600h] [ebp-64h]
  float v93; // [esp+604h] [ebp-60h]
  int v94; // [esp+608h] [ebp-5Ch]
  int v95; // [esp+60Ch] [ebp-58h]
  float v96; // [esp+610h] [ebp-54h] BYREF
  float v97; // [esp+614h] [ebp-50h]
  float v98; // [esp+618h] [ebp-4Ch]
  float v99; // [esp+61Ch] [ebp-48h] BYREF
  __int64 v100; // [esp+620h] [ebp-44h]
  float v101; // [esp+628h] [ebp-3Ch] BYREF
  float v102; // [esp+62Ch] [ebp-38h]
  float v103; // [esp+630h] [ebp-34h]
  float v104; // [esp+634h] [ebp-30h] BYREF
  __int64 v105; // [esp+638h] [ebp-2Ch]
  int v106; // [esp+640h] [ebp-24h]
  float v107; // [esp+644h] [ebp-20h] BYREF
  unsigned __int64 v108; // [esp+648h] [ebp-1Ch]
  float v109; // [esp+650h] [ebp-14h] BYREF
  float v110; // [esp+654h] [ebp-10h]
  float v111; // [esp+658h] [ebp-Ch]
  _DWORD *v112; // [esp+65Ch] [ebp-8h]
  float *v113; // [esp+660h] [ebp-4h]

  v7 = *(_DWORD *)(dword_10436E7C + 48);
  v83 = v7;
  if ( v7 == -1 )
    goto LABEL_89;
  result = *((_DWORD *)off_103DC81C + 1);
  if ( dword_10436DCC != result )
  {
    dword_10436DC8 = 0;
    dword_10436DCC = result;
  }
  if ( dword_10436DC8 < v7 )
  {
LABEL_89:
    if ( a6 )
      v9 = -1;
    else
      v9 = *(_DWORD *)(dword_10436E34 + 48);
    if ( v9 != -1 && (a5 == -1 || v9 < a5) )
      a5 = v9;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, a1);
    if ( result )
    {
      v10 = a4;
      v95 = 0;
      v11 = a4;
      v106 = a4;
      v112 = 0;
      if ( a2 )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
        v106 = v11;
      }
      if ( v11 )
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 164))(v11);
        v112 = v12;
        if ( v12 )
          v95 = v12[299];
      }
      sub_10128850(v74);
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1);
      if ( v13 )
      {
        v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v13);
        sub_101281D0(v14, 0);
      }
      v99 = flt_10459240;
      v100 = qword_10459244;
      v15 = sub_1001E0E0((int)v74, "placementOrigin") + 1;
      if ( v15 <= 0 )
      {
        sub_101EE440(&flt_1045924C);
      }
      else
      {
        sub_10008810((int)v74, v15 - 1, (int)v80);
        sub_101EDA00(v80, 3, &v99);
      }
      v84[0] = 0;
      v84[1] = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      sub_1010C180(a3, v84, a1, *(float *)(a3 + 20), *(_DWORD *)(a3 + 24));
      if ( v86 )
      {
        v16 = 0;
        v94 = 0;
        if ( v86 > 0 )
        {
          v113 = (float *)(v84[0] + 1064);
          do
          {
            v17 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    (_DWORD *)v113 - 263);
            if ( v17 > 0 && (*((int *)off_103DC81C + 5) <= 1 || *(_DWORD *)v113 != 1 && (a7 || *(_DWORD *)v113)) )
            {
              if ( v83 != -1 && dword_10436DC8 > v83 || a5 != -1 && v16 >= a5 )
                break;
              sub_101F0B70(*(_DWORD *)(a3 + 4), *(_DWORD *)a3, v81);
              sub_10128850(v73);
              v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v17);
              if ( v18 )
              {
                v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v18);
                sub_101281D0(v19, 0);
              }
              v20 = (float *)v112;
              ++dword_10436DC8;
              v21 = v113;
              v22 = *(float **)(a3 + 4);
              v104 = flt_10459240;
              v105 = qword_10459244;
              v101 = *v22;
              v102 = v22[1];
              v103 = v22[2];
              if ( v112 && *((_BYTE *)v113 - 540) )
              {
                v62 = (char *)(v113 - 135);
                if ( *((_BYTE *)v113 - 3) )
                {
                  v23 = sub_10027D50(v112, v62);
                  if ( v23 >= 0 )
                  {
                    sub_1002DC90(v20, v23, (int)&v104, (int)&v101);
                    sub_101F0B70(&v101, &v104, v81);
                  }
                }
                else
                {
                  v24 = sub_1001E0E0((int)v73, v62) + 1;
                  if ( v24 > 0 )
                  {
                    (*(void (__thiscall **)(_DWORD *, int, _BYTE *))(*((_DWORD *)v20 + 1) + 144))(
                      (_DWORD *)v20 + 1,
                      v24,
                      v81);
                    sub_101ED7B0(v81, &v101);
                  }
                }
              }
              else
              {
                v25 = sub_1001E0E0((int)v73, "placementOrigin") + 1;
                v107 = v99;
                v108 = v100;
                if ( v25 > 0 )
                {
                  sub_10008810((int)v73, v25 - 1, (int)v80);
                  sub_101EDA00(v80, 3, &v107);
                  v107 = v107 - v99;
                  *(float *)&v108 = *(float *)&v108 - *(float *)&v100;
                  *((float *)&v108 + 1) = *((float *)&v108 + 1) - *((float *)&v100 + 1);
                }
                v88 = *(v21 - 266) - v107;
                v89 = *(v21 - 265) - *(float *)&v108;
                v90 = *(v21 - 264) - *((float *)&v108 + 1);
                sub_101ED860(&v88, v81, &v104);
              }
              v26 = *(float **)(a3 + 8);
              v96 = *v26;
              v97 = v26[1];
              v98 = v26[2];
              if ( a2 )
                (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a2 + 212))(a2, &v104, &v96);
              v27 = v95;
              if ( v95 > *(_DWORD *)(v73[0] + 224) )
                v27 = 0;
              v60 = (int)(v21 - 266);
              v28 = v106;
              v29 = sub_101044B0(v106, v60, &v104, &v101, &v96, *(_DWORD *)(a3 + 12), v27);
              if ( v29 )
              {
                if ( v28 && (*(_DWORD *)(v28 + 112) & 0x10) != 0 )
                  sub_1000DF30(v29, 16);
                if ( 0.0 != *(v113 - 3) )
                {
                  v30 = *(float **)a3;
                  v109 = v104 - **(float **)a3;
                  v110 = *(float *)&v105 - v30[1];
                  v111 = *((float *)&v105 + 1) - v30[2];
                  if ( sub_1000E3F0(&v109, &flt_10459240) )
                  {
                    v31 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v29 + 268))(v29);
                    v32 = v31[1] - v30[1];
                    v33 = v31[2] - v30[2];
                    v109 = *v31 - *v30;
                    v110 = v32;
                    v111 = v33;
                  }
                  off_103EDFEC();
                  v34 = *(v113 - 3);
                  v91 = v109 * v34;
                  v92 = v110 * v34;
                  v93 = v34 * v111;
                  sub_1000EC20((int)v29, &v91);
                }
                if ( *((_BYTE *)v113 - 2) )
                {
                  v35 = *((_DWORD *)v29 + 46);
                  if ( v35 )
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 60))(v35, 0);
                }
              }
              sub_10030220(v73);
              v16 = v94;
            }
            v113 += 267;
            v94 = ++v16;
          }
          while ( v16 < v86 );
        }
      }
      else if ( a4 )
      {
        v36 = __RTDynamicCast(
                a4,
                0,
                (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                (int)&IBreakableWithPropData `RTTI Type Descriptor',
                0);
        v37 = v36;
        if ( v36 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 52))(v36) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 68))(v37) )
            {
              v38 = *(int (__thiscall **)(int))(*(_DWORD *)v37 + 68);
              v112 = 0;
              if ( v38(v37) > 0 )
              {
                while ( a5 == -1 || (int)v112 < a5 )
                {
                  v61 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 76))(v37);
                  v39 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 52))(v37);
                  v40 = (char *)sub_1010C0C0((int)&dword_10436EF0, v39, v61);
                  sub_102282F0(Destination, v40, 0x200u);
                  v68 = 1.0;
                  v65 = RandomFloat(5.0, 10.0);
                  v66 = 0.0;
                  v67 = 0.0;
                  v70 = 1;
                  v41 = *(float *)(a3 + 20);
                  v71 = 0;
                  v69 = v41;
                  Destination[512] = 0;
                  v72 = 0;
                  v42 = sub_10056540((float *)(v10 + 352));
                  v43 = *((_DWORD *)v42 + 1);
                  v107 = *v42;
                  v108 = __PAIR64__(*((_DWORD *)v42 + 2), v43);
                  v44 = sub_1010B460(&v107);
                  v104 = 0.0;
                  *(float *)&v105 = 0.0;
                  *((float *)&v105 + 1) = 0.0;
                  v96 = 1.0;
                  v97 = 1.0;
                  v98 = 1.0;
                  *(&v104 + v44) = 0.5;
                  *(&v96 + v44) = 0.5;
                  sub_1008E9C0(v10 + 352, &v104, &v96, v63);
                  v45 = *(float **)a3;
                  v101 = v63[0] - **(float **)a3;
                  v102 = v63[1] - v45[1];
                  v103 = v63[2] - v45[2];
                  off_103EDFEC();
                  v46 = *(float *)(a3 + 20);
                  v91 = v101 * v46;
                  v47 = *(int (__thiscall **)(int))(*(_DWORD *)a4 + 40);
                  v92 = v102 * v46;
                  v93 = v46 * v103;
                  v48 = (float *)v47(a4);
                  v109 = *v48;
                  v110 = v48[1];
                  v49 = *(_DWORD *)v37;
                  v111 = v48[2];
                  v50 = (*(int (__thiscall **)(int))(v49 + 60))(v37);
                  v51 = sub_101044B0(v106, (int)v63, v63, &v109, &v91, (int)&flt_10459240, v50);
                  v52 = v51;
                  if ( v51 )
                  {
                    v53 = sub_10056540(v51 + 88);
                    v54 = *v53;
                    v55 = v53[1];
                    v56 = v53[2];
                    v88 = v54;
                    v89 = v55;
                    v90 = v56;
                    sub_101EE440(&v109);
                    sub_1010B4B0(&v88, &v107, (int)v81);
                    sub_101ED7B0(v81, &v109);
                    v57 = *((_DWORD *)v52 + 46);
                    if ( v57 )
                    {
                      (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v57 + 188))(v57, v82, 0);
                      (*(void (__thiscall **)(_DWORD, _BYTE *, float *, int))(**((_DWORD **)v52 + 46) + 180))(
                        *((_DWORD *)v52 + 46),
                        v82,
                        &v109,
                        1);
                    }
                    sub_10037CA0((int)v52, &v109);
                    if ( (*(_DWORD *)(v106 + 112) & 0x10) != 0 )
                      sub_1000DF30(v52, 16);
                  }
                  else
                  {
                    DevWarning("PropBreakableCreateAll: Could not create model %s\n", Destination);
                  }
                  v58 = *(int (__thiscall **)(int))(*(_DWORD *)v37 + 68);
                  v112 = (_DWORD *)((char *)v112 + 1);
                  v59 = v112;
                  if ( (int)v59 >= v58(v37) )
                    break;
                  v10 = a4;
                }
              }
            }
          }
        }
      }
      if ( v85 >= 0 && v84[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v84[0]);
      nullsub_4();
      if ( v78 )
        sub_10034930(v78);
      sub_100F9890(v79);
      sub_100F9DC0(v79);
      sub_1011A810(v77);
      sub_1011A810(v76);
      return sub_1011A810(v75);
    }
  }
  return result;
}
