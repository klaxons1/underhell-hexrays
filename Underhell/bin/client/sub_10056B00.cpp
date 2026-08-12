int __usercall sub_10056B00@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  double v3; // st7
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st7
  double v11; // st7
  int (__thiscall *v12)(int); // edx
  float *v13; // eax
  int (__thiscall *v14)(int); // edx
  float *v15; // eax
  double v16; // st7
  int (__thiscall *v17)(int); // eax
  float *v18; // eax
  int (__thiscall *v19)(int); // edx
  float *v20; // eax
  double v21; // st7
  float *v22; // eax
  char *v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  double v27; // st7
  int v28; // eax
  double v29; // st6
  double v30; // st5
  int i; // edx
  float *v32; // ecx
  float *v33; // eax
  float v35; // [esp+Ch] [ebp-154h]
  float v36; // [esp+Ch] [ebp-154h]
  float v37; // [esp+10h] [ebp-150h]
  float v38; // [esp+10h] [ebp-150h]
  float v39; // [esp+10h] [ebp-150h]
  float v40; // [esp+10h] [ebp-150h]
  char *v41; // [esp+10h] [ebp-150h]
  float v42[20]; // [esp+24h] [ebp-13Ch] BYREF
  _BYTE v43[12]; // [esp+74h] [ebp-ECh] BYREF
  int v44; // [esp+80h] [ebp-E0h] BYREF
  float v45; // [esp+A0h] [ebp-C0h]
  float v46[20]; // [esp+D0h] [ebp-90h] BYREF
  float v47; // [esp+120h] [ebp-40h]
  float v48; // [esp+124h] [ebp-3Ch]
  float v49; // [esp+128h] [ebp-38h] BYREF
  float v50; // [esp+12Ch] [ebp-34h]
  float v51; // [esp+130h] [ebp-30h]
  float v52; // [esp+134h] [ebp-2Ch] BYREF
  float v53; // [esp+138h] [ebp-28h]
  float v54; // [esp+13Ch] [ebp-24h]
  float v55; // [esp+140h] [ebp-20h]
  float v56; // [esp+144h] [ebp-1Ch]
  float v57; // [esp+148h] [ebp-18h]
  int v58; // [esp+14Ch] [ebp-14h]
  float v59; // [esp+150h] [ebp-10h]
  _DWORD v60[3]; // [esp+154h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+160h] [ebp+0h]

  v60[0] = a2;
  v60[1] = retaddr;
  v3 = *((float *)off_103DC81C + 4) + *(float *)(a1 + 1316);
  *(float *)(a1 + 1316) = v3;
  if ( v3 >= *(float *)(a1 + 1312) )
  {
    if ( fabs(*(float *)(a1 + 1320)) <= 0.0099999998 )
    {
      v7 = flt_103DB324;
      if ( (dword_1040C1E0 & 1) == 0 )
      {
        dword_1040C1E0 |= 1u;
        flt_1040C1DC = 0.1 * v7;
      }
      v37 = 3.141592653589793 * v7;
      v35 = v7 * -3.141592653589793;
      *(float *)(a1 + 1320) = RandomFloat(LODWORD(v35), LODWORD(v37));
      v38 = 3.141592653589793 * flt_1040C1DC;
      v36 = flt_1040C1DC * -3.141592653589793;
      *(float *)(a1 + 1324) = RandomFloat(LODWORD(v36), LODWORD(v38));
      v6 = 4.0;
    }
    else
    {
      *(float *)(a1 + 1324) = 0.0;
      *(float *)(a1 + 1320) = 0.0;
      v6 = 2.0;
    }
    v39 = v6;
    *(float *)(a1 + 1312) = RandomFloat(1.0, LODWORD(v39));
    v5 = 0.0;
    *(float *)(a1 + 1316) = 0.0;
  }
  else
  {
    v59 = v3 / *(float *)(a1 + 1312);
    v4 = (float *)sub_10034AE0((char *)(a1 - 12));
    v52 = *v4;
    v53 = v4[1];
    v54 = v4[2];
    sub_101EE980(v59);
    v52 = v59 * *(float *)(a1 + 1320) + v52;
    sub_101EE980(v59);
    v53 = v59 * *(float *)(a1 + 1324) + v53;
    sub_10034B10((float *)(a1 - 12), &v52);
    v5 = 0.0;
  }
  if ( v5 >= *(float *)(a1 + 1296) )
  {
    v16 = *((float *)off_103DC81C + 4);
    v17 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 12) + 36);
    v55 = *(float *)(a1 + 1300) * v16;
    v56 = *(float *)(a1 + 1304) * v16;
    v57 = v16 * *(float *)(a1 + 1308);
    v18 = (float *)v17(a1 - 12);
    v49 = *v18 + v55;
    v50 = v18[1] + v56;
    v19 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 12) + 36);
    v51 = v18[2] + v57;
    v20 = (float *)v19(a1 - 12);
    sub_1000FCE0((int)v60, a1, v20, &v49, 33570827, 0, 0, (int)v43);
    if ( v45 >= 1.0 )
    {
      v21 = *((float *)off_103DC81C + 4);
      v55 = *(float *)(a1 + 1300) * v21;
      v56 = *(float *)(a1 + 1304) * v21;
      v57 = v21 * *(float *)(a1 + 1308);
      v22 = (float *)sub_10034A00((char *)(a1 - 12));
      v49 = *v22 + v55;
      v50 = v22[1] + v56;
      v51 = v22[2] + v57;
      sub_10034A30((float *)(a1 - 12), &v49);
    }
    else
    {
      *(float *)(a1 + 1296) = RandomFloat(1.0, 3.0);
    }
  }
  else
  {
    v8 = *(float *)(a1 + 1296) - *((float *)off_103DC81C + 4);
    *(float *)(a1 + 1296) = v8;
    if ( v8 <= v5 )
    {
      v58 = 15;
      *(float *)(a1 + 1300) = 1.0;
      v9 = v5;
      v10 = 1.0;
      *(float *)(a1 + 1304) = v9;
      *(float *)(a1 + 1308) = v9;
      v59 = v9;
      do
      {
        v40 = v10;
        v47 = RandomFloat(-1.0, LODWORD(v40));
        v48 = RandomFloat(-1.0, 1.0);
        v11 = RandomFloat(-1.0, 1.0);
        v52 = v47;
        v53 = v48;
        v54 = v11;
        off_103EDFEC();
        v12 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 12) + 36);
        v55 = v52 * 10000.0;
        v56 = v53 * 10000.0;
        v57 = 10000.0 * v54;
        v13 = (float *)v12(a1 - 12);
        v49 = v55 + *v13;
        v50 = v13[1] + v56;
        v14 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 12) + 36);
        v51 = v13[2] + v57;
        v15 = (float *)v14(a1 - 12);
        sub_1000E430(v42, v15, &v49);
        sub_1012D400(0, 0);
        (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          v42,
          33570827,
          v46,
          v43);
        if ( *(_DWORD *)(dword_10439134 + 48) )
          sub_10130AC0((int)v43, (int)&v44, 255, 0, 0, 1, 5.0);
        if ( 1.0 == v45 || v59 >= (double)v45 )
        {
          v10 = 1.0;
        }
        else
        {
          v10 = 1.0;
          v59 = v45;
          *(float *)(a1 + 1300) = v52;
          *(float *)(a1 + 1304) = v53;
          *(float *)(a1 + 1308) = v54;
        }
        --v58;
      }
      while ( v58 );
      *(float *)(a1 + 1300) = *(float *)(a1 + 1300) * 650.0;
      *(float *)(a1 + 1304) = *(float *)(a1 + 1304) * 650.0;
      *(float *)(a1 + 1308) = 650.0 * *(float *)(a1 + 1308);
      *(float *)(a1 + 1296) = -1.0;
    }
  }
  v41 = sub_10034AE0((char *)(a1 - 12));
  v23 = sub_10034A00((char *)(a1 - 12));
  sub_101F1D80(v23, v41);
  v24 = 0;
  if ( *(int *)(a1 + 1228) > 0 )
  {
    v25 = 0;
    do
    {
      v26 = *(_DWORD *)(a1 + 1216);
      v27 = *(float *)(v26 + v25);
      v28 = *(_DWORD *)(a1 + 1236);
      v29 = *(float *)(v26 + v25 + 4);
      ++v24;
      v30 = *(float *)(v26 + v25 + 8);
      v25 += 12;
      *(float *)(v28 + v25 - 12) = v46[4] * v29 + v46[3] * v27 + v46[5] * v30 + v46[6];
      *(float *)(v28 + v25 - 8) = v46[8] * v29 + v46[7] * v27 + v46[9] * v30 + v46[10];
      *(float *)(v28 + v25 - 4) = v27 * v46[11] + v29 * v46[12] + v30 * v46[13] + v46[14];
    }
    while ( v24 < *(_DWORD *)(a1 + 1228) );
  }
  if ( *(_BYTE *)(a1 + 1328) )
  {
    *(_BYTE *)(a1 + 1328) = 0;
    v58 = 0;
    if ( *(int *)(a1 + 1228) > 0 )
    {
      v59 = 0.0;
      do
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 1188); v33[2] = v33[5] )
        {
          v32 = (float *)(LODWORD(v59) + *(_DWORD *)(a1 + 1236));
          v33 = (float *)(*(_DWORD *)(a1 + 1196) + 36 * (i + v58 * *(_DWORD *)(a1 + 1188)));
          ++i;
          v33[6] = *v32;
          v33[7] = v32[1];
          v33[8] = v32[2];
          v33[3] = v33[6];
          v33[4] = v33[7];
          v33[5] = v33[8];
          *v33 = v33[3];
          v33[1] = v33[4];
        }
        LODWORD(v59) += 12;
        ++v58;
      }
      while ( v58 < *(_DWORD *)(a1 + 1228) );
    }
  }
  return sub_1011FF80(
           *(_DWORD *)(a1 + 1196),
           *(_DWORD *)(a1 + 1208),
           a1 + 1256,
           *((float *)off_103DC81C + 4),
           0.98000002);
}
