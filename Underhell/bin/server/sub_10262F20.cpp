// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10262F20@<eax>(int a1@<ebp>, int *a2)
{
  void *v2; // esp
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // eax
  long double v7; // st7
  int v8; // esi
  long double v9; // st7
  float *v10; // eax
  long double v11; // st7
  float *v12; // eax
  int v13; // eax
  long double v14; // rt1
  int v15; // eax
  double v16; // st6
  double v17; // st7
  int v18; // edi
  const char *v19; // eax
  bool v20; // zf
  float v21; // ecx
  int i; // esi
  int j; // edi
  float *v24; // esi
  int v25; // eax
  double v26; // st7
  int v27; // edx
  double v28; // st6
  int v29; // ecx
  double v30; // st5
  double v31; // rt2
  double v32; // st5
  double v33; // rtt
  double v34; // rt0
  double v35; // st5
  double v36; // st6
  double v37; // rt1
  double v38; // st5
  double v39; // st7
  int v40; // edi
  int k; // esi
  int v42; // esi
  _DWORD *v43; // edi
  double v44; // st7
  double v45; // st4
  double v46; // st5
  int m; // esi
  double v48; // st7
  _BYTE v50[34096]; // [esp+7558h] [ebp-AD5Ch] BYREF
  _DWORD v51[2500]; // [esp+FA88h] [ebp-282Ch] BYREF
  float v52[20]; // [esp+12198h] [ebp-11Ch] BYREF
  _BYTE v53[12]; // [esp+121E8h] [ebp-CCh] BYREF
  _BYTE v54[76]; // [esp+121F4h] [ebp-C0h] BYREF
  long double v55; // [esp+12240h] [ebp-74h]
  float *v56; // [esp+1224Ch] [ebp-68h]
  float *v57; // [esp+12250h] [ebp-64h]
  float *v58; // [esp+12254h] [ebp-60h]
  long double v59; // [esp+12258h] [ebp-5Ch]
  float *v60; // [esp+12264h] [ebp-50h]
  long double v61; // [esp+12268h] [ebp-4Ch]
  int v62; // [esp+12270h] [ebp-44h]
  float v63; // [esp+12274h] [ebp-40h]
  void **v64; // [esp+12278h] [ebp-3Ch] BYREF
  _BYTE *v65; // [esp+1227Ch] [ebp-38h]
  int v66; // [esp+12280h] [ebp-34h] BYREF
  float v67; // [esp+12284h] [ebp-30h]
  float v68; // [esp+12288h] [ebp-2Ch]
  float v69; // [esp+1228Ch] [ebp-28h] BYREF
  float v70; // [esp+12290h] [ebp-24h] BYREF
  float v71; // [esp+12294h] [ebp-20h] BYREF
  float v72; // [esp+12298h] [ebp-1Ch] BYREF
  float v73; // [esp+1229Ch] [ebp-18h] BYREF
  float v74; // [esp+122A0h] [ebp-14h]
  float v75; // [esp+122A4h] [ebp-10h]
  int v76; // [esp+122A8h] [ebp-Ch] BYREF
  void *v77; // [esp+122ACh] [ebp-8h]
  void *retaddr; // [esp+122B4h] [ebp+0h]

  v76 = a1;
  v77 = retaddr;
  v2 = alloca(74376);
  Msg("Testing kd-tree entity queries.");
  v3 = *(_DWORD *)(dword_106B31C8 + 20);
  v4 = 0;
  if ( v3 <= 1 )
  {
    if ( v3 >= 1 )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
      if ( v5 )
      {
        if ( (*v5 & 2) == 0 )
        {
          v6 = v5[3];
          if ( v6 )
            v4 = (*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v6 + 20))(v6, v76, v77);
          else
            v4 = 0;
        }
      }
    }
    v62 = v4;
  }
  else
  {
    v62 = 0;
  }
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v73 = *(float *)(v4 + 580);
  v74 = *(float *)(v4 + 584);
  v75 = *(float *)(v4 + 588);
  if ( byte_10653C87 )
  {
    v7 = 0.0;
    dword_106CE5F0 = sub_10184390(30000);
    v57 = &v70;
    v61 = 0.0;
    v59 = 0.0;
    v58 = &v69;
    v56 = &v71;
    v60 = &v72;
    v8 = 0;
    while ( 1 )
    {
      v55 = fabs(fmod(v7 + 307807.5, 128.0));
      v61 = fabs(fmod(v61 + 191900.0, 6.283185307179586));
      v59 = fabs(fmod(v59 + 4994975.0, 3.141592653589793));
      v63 = v61;
      v9 = sin(v63);
      v10 = v58;
      *v57 = cos(v63);
      *v10 = v9;
      v63 = v59;
      v11 = sin(v63);
      v12 = v60;
      *v56 = cos(v63);
      *v12 = v11;
      v13 = dword_106CE5F0;
      v14 = v55;
      *(float *)(v8 + dword_106CE5F0) = v70 * v55 * v72;
      *(float *)(v8 + v13 + 4) = v69 * v14 * v72;
      *(float *)(v8 + v13 + 8) = v14 * v71;
      *(float *)&v66 = *(float *)(v8 + v13) - v73;
      v67 = *(float *)(v8 + v13 + 4) - v74;
      v68 = *(float *)(v8 + v13 + 8) - v75;
      off_10689714();
      v15 = dword_106CE5F0;
      v8 += 12;
      v16 = v67 * 1024.0 + v74;
      v17 = 1024.0 * v68 + v75;
      *(float *)(v8 + dword_106CE5F0 - 12) = *(float *)&v66 * 1024.0 + v73;
      *(float *)(v8 + v15 - 8) = v16;
      *(float *)(v8 + v15 - 4) = v17;
      if ( v8 >= 30000 )
        break;
      v7 = v55;
    }
    byte_10653C87 = 0;
  }
  v18 = 0;
  if ( *a2 >= 2 )
  {
    v19 = String;
    if ( *a2 > 1 )
      v19 = (const char *)a2[259];
    v18 = atoi(v19);
  }
  vtune(1);
  v20 = *(_BYTE *)(g_VProfCurrentProfile + 4112) == 0;
  *(_DWORD *)(g_VProfCurrentProfile + 4108) = *(_DWORD *)(g_VProfCurrentProfile + 4272);
  if ( v20 )
    CVProfNode::Resume((CVProfNode *)(g_VProfCurrentProfile + 4120));
  if ( ++*(_DWORD *)(g_VProfCurrentProfile + 4108) == 1 )
    CVProfNode::EnterScope((CVProfNode *)(g_VProfCurrentProfile + 4120));
  CVProfNode::Reset((CVProfNode *)(g_VProfCurrentProfile + 4120));
  *(_DWORD *)(g_VProfCurrentProfile + 4264) = 0;
  CVProfile::MarkFrame(g_VProfCurrentProfile);
  switch ( v18 )
  {
    case 0:
      for ( i = 0; i < 30000; i += 12 )
      {
        sub_1001F180(v52, &v73, (float *)(i + dword_106CE5F0));
        sub_10265570(0, 0);
        (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v52,
          16395,
          &v66,
          v53);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v53, (int)v54, 255, 0, 0, 1, 5.0);
      }
      break;
    case 1:
      for ( j = 0; j < 30000; j += 12 )
      {
        v24 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
        sub_1001F200(v52, &v73, (float *)(j + dword_106CE5F0), (float *)(v25 + 12), v24);
        sub_10265570(v62, 0);
        (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v52,
          33570827,
          &v66,
          v53);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v53, (int)v54, 255, 255, 0, 1, -1.0);
      }
      break;
    case 2:
      v26 = v75;
      v27 = dword_106CE5F0;
      v28 = v74;
      v29 = 0;
      v30 = v73;
      while ( 1 )
      {
        *(float *)((char *)&v76 + v29 - 74368) = v30;
        *(float *)&v50[v29 + 4096] = v30;
        v34 = v30;
        v35 = v28;
        v36 = v34;
        *(float *)((char *)&v76 + v29 - 74364) = v35;
        *(float *)&v50[v29 + 4100] = v35;
        v37 = v35;
        v38 = v26;
        v39 = v37;
        *(float *)((char *)&v76 + v29 - 74360) = v38;
        *(float *)&v50[v29 + 4104] = v38;
        if ( *(float *)((char *)&v76 + v29 - 74368) > (double)*(float *)(v29 + v27) )
          *(int *)((char *)&v76 + v29 - 74368) = *(int *)(v29 + v27);
        if ( *(float *)((char *)&v76 + v29 - 74364) > (double)*(float *)(v27 + v29 + 4) )
          *(int *)((char *)&v76 + v29 - 74364) = *(int *)(v27 + v29 + 4);
        if ( *(float *)((char *)&v76 + v29 - 74360) > (double)*(float *)(v27 + v29 + 8) )
          *(int *)((char *)&v76 + v29 - 74360) = *(int *)(v27 + v29 + 8);
        if ( *(float *)&v50[v29 + 4096] < (double)*(float *)(v29 + v27) )
          *(float *)&v50[v29 + 4096] = *(float *)(v29 + v27);
        if ( *(float *)&v50[v29 + 4100] < (double)*(float *)(v27 + v29 + 4) )
          *(float *)&v50[v29 + 4100] = *(float *)(v27 + v29 + 4);
        if ( *(float *)&v50[v29 + 4104] < (double)*(float *)(v27 + v29 + 8) )
          *(float *)&v50[v29 + 4104] = *(float *)(v27 + v29 + 8);
        if ( *(float *)((char *)&v76 + v29 - 74368) > (double)*(float *)(v29 + v27) )
          *(int *)((char *)&v76 + v29 - 74368) = *(int *)(v29 + v27);
        if ( *(float *)((char *)&v76 + v29 - 74364) > (double)*(float *)(v27 + v29 + 4) )
          *(int *)((char *)&v76 + v29 - 74364) = *(int *)(v27 + v29 + 4);
        if ( *(float *)((char *)&v76 + v29 - 74360) > (double)*(float *)(v27 + v29 + 8) )
          *(int *)((char *)&v76 + v29 - 74360) = *(int *)(v27 + v29 + 8);
        if ( *(float *)&v50[v29 + 4096] < (double)*(float *)(v29 + v27) )
          *(float *)&v50[v29 + 4096] = *(float *)(v29 + v27);
        if ( *(float *)&v50[v29 + 4100] < (double)*(float *)(v27 + v29 + 4) )
          *(float *)&v50[v29 + 4100] = *(float *)(v27 + v29 + 4);
        if ( *(float *)&v50[v29 + 4104] < (double)*(float *)(v27 + v29 + 8) )
          *(float *)&v50[v29 + 4104] = *(float *)(v27 + v29 + 8);
        if ( *(float *)((char *)&v76 + v29 - 74368) > (double)*(float *)(v29 + v27) )
          *(int *)((char *)&v76 + v29 - 74368) = *(int *)(v29 + v27);
        if ( *(float *)((char *)&v76 + v29 - 74364) > (double)*(float *)(v27 + v29 + 4) )
          *(int *)((char *)&v76 + v29 - 74364) = *(int *)(v27 + v29 + 4);
        if ( *(float *)((char *)&v76 + v29 - 74360) > (double)*(float *)(v27 + v29 + 8) )
          *(int *)((char *)&v76 + v29 - 74360) = *(int *)(v27 + v29 + 8);
        if ( *(float *)&v50[v29 + 4096] < (double)*(float *)(v29 + v27) )
          *(float *)&v50[v29 + 4096] = *(float *)(v29 + v27);
        if ( *(float *)&v50[v29 + 4100] < (double)*(float *)(v27 + v29 + 4) )
          *(float *)&v50[v29 + 4100] = *(float *)(v27 + v29 + 4);
        if ( *(float *)&v50[v29 + 4104] < (double)*(float *)(v27 + v29 + 8) )
          *(float *)&v50[v29 + 4104] = *(float *)(v27 + v29 + 8);
        v29 += 12;
        if ( v29 >= 30000 )
          break;
        v31 = v38;
        v32 = v39;
        v26 = v31;
        v33 = v32;
        v30 = v36;
        v28 = v33;
      }
      v40 = 0;
      for ( k = 0; k < 30000; k += 12 )
      {
        v65 = v50;
        v67 = 0.0;
        v68 = 0.0;
        v64 = &CFlaggedEntitiesEnum::`vftable';
        v66 = 1024;
        (*(void (__thiscall **)(int, int, char *, _BYTE *, _DWORD, void ***))(*(_DWORD *)dword_106B31EC + 48))(
          dword_106B31EC,
          16,
          (char *)&v76 + k - 74368,
          &v50[k + 4096],
          0,
          &v64);
        v40 += LODWORD(v68);
      }
      goto LABEL_82;
    case 3:
      v42 = 0;
      v43 = v51;
      do
      {
        v44 = *(float *)(v42 + dword_106CE5F0);
        v75 = v21;
        v45 = *(float *)(v42 + dword_106CE5F0 + 4) - v74;
        v46 = *(float *)(v42 + dword_106CE5F0 + 8) - v21;
        v75 = v46 * v46 + v45 * v45 + (v44 - v73) * (v44 - v73);
        v42 += 12;
        *((float *)++v43 - 1) = off_10689708(v75) * 0.5;
      }
      while ( v42 < 30000 );
      v40 = 0;
      for ( m = 0; m < 2500; ++m )
      {
        v48 = *(float *)&v51[m];
        v67 = 0.0;
        v68 = 0.0;
        v75 = COERCE_FLOAT(&v64);
        v65 = v50;
        v74 = 0.0;
        v73 = v48;
        v64 = &CFlaggedEntitiesEnum::`vftable';
        v66 = 1024;
        (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_106B31EC + 52))(dword_106B31EC, 16, &v73);
        v40 += LODWORD(v68);
      }
LABEL_82:
      Msg("Count = %d\n", v40);
      break;
    default:
      break;
  }
  CVProfile::MarkFrame(g_VProfCurrentProfile);
  CVProfile::Pause(g_VProfCurrentProfile);
  CVProfile::OutputReport(g_VProfCurrentProfile, -517, 0, -1);
  return vtune(0);
}
