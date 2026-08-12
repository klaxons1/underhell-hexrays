char __thiscall sub_100ED860(void *this, int a2, int a3, float k, float a5)
{
  Concurrency::details::SchedulingRing *v5; // ebx
  int v6; // edi
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  const char *v10; // edi
  const char *v11; // eax
  const char *v13; // eax
  int i; // esi
  const char *v15; // eax
  int v16; // eax
  char *v17; // edx
  char v18; // cl
  const char *v19; // eax
  int v20; // eax
  char *v21; // edx
  char v22; // cl
  int v23; // ebx
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // esi
  const char *v32; // eax
  int v33; // edi
  char *v34; // eax
  int v35; // eax
  int v36; // esi
  double v37; // st7
  void *v38; // eax
  int v39; // eax
  const char *v40; // eax
  int v41; // eax
  void *v42; // eax
  const char *v43; // eax
  double v44; // st7
  int v45; // eax
  Concurrency::details::SchedulingRing *v46; // eax
  int v47; // esi
  int v48; // ecx
  int v49; // esi
  int v50; // eax
  int v51; // esi
  _DWORD *v52; // eax
  bool v53; // zf
  int v54; // esi
  const char *v55; // eax
  double v56; // st7
  double v57; // st7
  const char *v58; // [esp-4h] [ebp-140h]
  double v59; // [esp+0h] [ebp-13Ch]
  double v60; // [esp+8h] [ebp-134h]
  const char *v61; // [esp+10h] [ebp-12Ch]
  const char *v62; // [esp+10h] [ebp-12Ch]
  const char *v63; // [esp+14h] [ebp-128h]
  const char *v64; // [esp+14h] [ebp-128h]
  float v65; // [esp+14h] [ebp-128h]
  const char *v66; // [esp+18h] [ebp-124h]
  const char *v67; // [esp+18h] [ebp-124h]
  const char *v68; // [esp+18h] [ebp-124h]
  float v69; // [esp+18h] [ebp-124h]
  const char *v70; // [esp+18h] [ebp-124h]
  float v71; // [esp+18h] [ebp-124h]
  char v72[4]; // [esp+28h] [ebp-114h] BYREF
  _BYTE v73[124]; // [esp+2Ch] [ebp-110h] BYREF
  char String2[128]; // [esp+A8h] [ebp-94h] BYREF
  int v75; // [esp+128h] [ebp-14h]
  int v76; // [esp+12Ch] [ebp-10h]
  int v77; // [esp+130h] [ebp-Ch]
  int v78; // [esp+134h] [ebp-8h]
  int j; // [esp+138h] [ebp-4h]

  v5 = (Concurrency::details::SchedulingRing *)LODWORD(k);
  v6 = (int)this;
  v78 = (int)this;
  v7 = (char *)sub_104183D0(LODWORD(k));
  v8 = sub_100BDF40(v6, v7);
  v9 = a2;
  *(_DWORD *)(a2 + 24) = v8;
  *(_DWORD *)(v9 + 16) = -1;
  if ( v8 >= 0 )
  {
    *(_BYTE *)(v9 + 28) = 0;
    v76 = sub_100BDFA0(v6, v8);
    if ( v76 )
    {
      j = sub_1042ACB0("faceposer", 0);
      if ( j && sub_1042ACB0("type", 0) )
      {
        v13 = (const char *)sub_1042B460(0, (int)String);
        *(_BYTE *)(v9 + 28) = _stricmp(v13, "gesture") == 0;
      }
      strcpy(String2, "loop");
      memset(&String2[5], 0, 0x7Bu);
      strcpy(v72, "end");
      memset(v73, 0, sizeof(v73));
      for ( i = sub_1042A2F0(j); i; i = sub_1042A300(i) )
      {
        v15 = (const char *)sub_1042A070(i);
        if ( !_stricmp(v15, "startloop") )
        {
          v16 = sub_1042B460(0, (int)String);
          v17 = &String2[-v16];
          do
          {
            v18 = *(_BYTE *)v16;
            v17[v16] = *(_BYTE *)v16;
            ++v16;
          }
          while ( v18 );
        }
        else
        {
          v19 = (const char *)sub_1042A070(i);
          if ( !_stricmp(v19, "endloop") )
          {
            v20 = sub_1042B460(0, (int)String);
            v21 = &v72[-v20];
            do
            {
              v22 = *(_BYTE *)v20;
              v21[v20] = *(_BYTE *)v20;
              ++v20;
            }
            while ( v22 );
          }
        }
      }
      if ( sub_104193A0(1, String2) )
        sub_10418260(1);
      if ( sub_104193A0(0, String2) )
        sub_10418260(1);
      if ( sub_104193A0(1, v72) )
        sub_10418260(1);
      if ( sub_104193A0(0, v72) )
        sub_10418260(1);
      if ( j )
      {
        v23 = dword_10700AC8;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
        if ( !*(_DWORD *)(v6 + 1100) && sub_100D7240((void *)v6) )
          sub_100BD750((volatile signed __int32 *)v6);
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 104))(v23);
        v24 = (_DWORD *)sub_10245550(*(_DWORD *)(a2 + 24));
        v25 = v24[17];
        v26 = 0;
        v27 = 0;
        if ( v25 <= 0 )
          v27 = v25 - 1;
        v28 = v24[18];
        if ( v28 <= 0 )
          v26 = v28 - 1;
        v29 = sub_102455F0(*(_DWORD *)(a2 + 24), *(__int16 *)((char *)v24 + 2 * v27 + 2 * v26 * v25 + v24[15]));
        v75 = sub_102454D0(v29);
        v30 = sub_1042A2F0(j);
        v5 = (Concurrency::details::SchedulingRing *)LODWORD(k);
        for ( j = v30; j; j = sub_1042A300(v31) )
        {
          v31 = j;
          v32 = (const char *)sub_1042A070(j);
          if ( !_stricmp(v32, "tags") )
          {
            v33 = sub_1042A2F0(v31);
            if ( v33 )
            {
              do
              {
                v77 = *(_DWORD *)(v75 + 16) - 2;
                if ( v77 > 0 )
                {
                  k = (double)sub_1042AE10(0, 0) / (double)v77;
                  v34 = (char *)sub_1042A070(v33);
                  v35 = sub_104193A0(1, v34);
                  v36 = v35;
                  if ( v35 )
                  {
                    v37 = sub_10418240(v35);
                    if ( fabs(v37 - k) > 0.05 )
                    {
                      v67 = (const char *)sub_104183D0(v5);
                      v38 = sub_10018D60((void *)LODWORD(a5));
                      v61 = (const char *)sub_1041CAF0(a3, v38);
                      v60 = k;
                      v59 = sub_10418240(v36);
                      v39 = sub_1042A070(v33);
                      v40 = (const char *)sub_1041CAF0(a3, v39);
                      DevWarning(
                        "%s repositioned tag: %s : %.3f -> %.3f (%s:%s:%s)\n",
                        v40,
                        v58,
                        v59,
                        v60,
                        v61,
                        v63,
                        v67);
                      sub_10418250(k);
                    }
                  }
                }
                v33 = sub_1042A300(v33);
              }
              while ( v33 );
              v31 = j;
            }
          }
        }
        if ( !(unsigned __int8)sub_1041A2F0(v5) )
        {
          v41 = sub_104183D0(v5);
          v64 = (const char *)sub_104183B0(v5, v41);
          v42 = sub_10018D60((void *)LODWORD(a5));
          v43 = (const char *)sub_1041CAF0(a3, v42);
          DevWarning("out of order tags : %s : (%s:%s:%s)\n", v43, v62, v64, v68);
        }
        v6 = v78;
      }
      sub_1042B1A0(v76);
      v9 = a2;
    }
    if ( *(_BYTE *)(v9 + 28) || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 296))(v6) )
      v44 = 1.0;
    else
      v44 = 0.0;
    *(float *)(v9 + 32) = v44;
    v45 = Concurrency::details::SchedulingRing::Id(v5);
    *(_DWORD *)(v9 + 20) = sub_1041EF20(v45);
    v46 = *(Concurrency::details::SchedulingRing **)(v6 + 1604);
    v47 = 0;
    a5 = 0.0;
    for ( k = *(float *)&v46; v47 < (int)v46; ++v47 )
    {
      v48 = *(_DWORD *)(*(_DWORD *)(v6 + 1592) + 4 * v47);
      if ( v48 )
      {
        if ( v48 == a3 )
          break;
        LODWORD(a5) += sub_1041CB50();
        v46 = (Concurrency::details::SchedulingRing *)LODWORD(k);
      }
    }
    v49 = a2;
    v50 = sub_100C71D0((volatile signed __int32 *)v6, *(_DWORD *)(a2 + 24), LODWORD(a5) + *(_DWORD *)(a2 + 20));
    *(_DWORD *)(v49 + 16) = v50;
    sub_100C4F40((_DWORD *)v6, v50, 1);
    v69 = ((double (__thiscall *)(Concurrency::details::SchedulingRing *))**(_DWORD **)v5)(v5);
    sub_100C53B0((_DWORD *)v6, *(_DWORD *)(v49 + 16), v69);
    sub_100C6460((_DWORD *)v6, *(_DWORD *)(v49 + 16), 0.0);
    v51 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(v6 + 1100) && sub_100D7240((void *)v6) )
      sub_100BD750((volatile signed __int32 *)v6);
    v52 = *(_DWORD **)(v6 + 1100);
    if ( !v52 || (v53 = *v52 == 0, a5 = *(float *)(v6 + 1100), v53) )
      a5 = 0.0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 104))(v51);
    v54 = a2;
    if ( (sub_100BA270(SLODWORD(a5), *(_DWORD *)(a2 + 24)) & 1) != 0 )
    {
      v70 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &a2);
      v55 = (const char *)sub_104183D0(v5);
      DevMsg(1, "vcd error, gesture %s of model %s is marked as STUDIO_LOOPING!\n", v55, v70);
    }
    sub_100C4F10((_DWORD *)v6, *(_DWORD *)(v54 + 16), 0);
    a5 = ((double (__thiscall *)(Concurrency::details::SchedulingRing *))**(_DWORD **)v5)(v5);
    *(float *)&a2 = sub_1041CA40(a3);
    v56 = sub_10418510(v5);
    v57 = (*(float *)&a2 - v56) / a5;
    v71 = v57;
    sub_10419460(v71);
    v65 = v57;
    sub_100C6320((_DWORD *)v6, *(_DWORD *)(v54 + 16), v65, 0.0);
    sub_100C4EE0((_DWORD *)v6, *(_DWORD *)(v54 + 16), 0.0);
    return 1;
  }
  else
  {
    v10 = *(const char **)(v6 + 260);
    if ( !v10 )
      v10 = String;
    v66 = (const char *)sub_104183D0(v5);
    v11 = (const char *)sub_10018D60((void *)LODWORD(a5));
    Warning("CSceneEntity %s :\"%s\" unable to find gesture \"%s\"\n", v10, v11, v66);
    return 0;
  }
}
