// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10177740(int a1@<ebp>, int a2)
{
  int v2; // edi
  int v3; // edx
  double v4; // st7
  double v5; // st7
  double v6; // rt1
  double v7; // st5
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // rt2
  double v12; // st5
  double v13; // rtt
  double v14; // st5
  float *v15; // ecx
  float *v16; // eax
  float *v17; // edi
  int v18; // eax
  float *v19; // eax
  float *v20; // edi
  double v21; // st7
  double v22; // st5
  double v23; // st4
  char v24; // al
  double v25; // st7
  int v26; // ecx
  float v27[3]; // [esp+34h] [ebp-134h] BYREF
  float v28[8]; // [esp+40h] [ebp-128h] BYREF
  float v29; // [esp+60h] [ebp-108h]
  _DWORD v30[3]; // [esp+90h] [ebp-D8h] BYREF
  float v31[16]; // [esp+9Ch] [ebp-CCh] BYREF
  char v32; // [esp+DCh] [ebp-8Ch]
  bool v33; // [esp+DDh] [ebp-8Bh]
  float v34; // [esp+F4h] [ebp-74h] BYREF
  float v35; // [esp+F8h] [ebp-70h]
  float v36; // [esp+FCh] [ebp-6Ch]
  float v37[3]; // [esp+100h] [ebp-68h] BYREF
  float v38; // [esp+10Ch] [ebp-5Ch]
  float v39; // [esp+110h] [ebp-58h]
  int v40; // [esp+118h] [ebp-50h] BYREF
  float v41; // [esp+11Ch] [ebp-4Ch]
  int v42; // [esp+120h] [ebp-48h]
  float v43; // [esp+124h] [ebp-44h]
  int v44; // [esp+128h] [ebp-40h]
  int v45; // [esp+12Ch] [ebp-3Ch]
  float v46; // [esp+130h] [ebp-38h] BYREF
  float v47; // [esp+134h] [ebp-34h]
  float v48; // [esp+138h] [ebp-30h]
  int i; // [esp+13Ch] [ebp-2Ch]
  int v50; // [esp+140h] [ebp-28h]
  float *v51; // [esp+144h] [ebp-24h] BYREF
  float v52; // [esp+148h] [ebp-20h] BYREF
  float v53; // [esp+14Ch] [ebp-1Ch]
  int v54; // [esp+150h] [ebp-18h]
  float v55; // [esp+154h] [ebp-14h]
  int v56; // [esp+158h] [ebp-10h]
  int v57; // [esp+15Ch] [ebp-Ch]
  void *v58; // [esp+160h] [ebp-8h]
  void *retaddr; // [esp+168h] [ebp+0h]

  v57 = a1;
  v58 = retaddr;
  v45 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(a2 + 24));
  v50 = *(_DWORD *)(a2 + 36);
  v44 = 2 * v50 / 3;
  v2 = 0;
  v43 = RandomFloat(0.0, 360.0);
  for ( i = 0; v2 < v50; i = v2 )
  {
    v55 = NAN;
    do
    {
      ++LODWORD(v55);
      if ( v2 >= v44 )
      {
        v56 = sub_10115FB0();
        v38 = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        v56 = sub_10115FB0();
        v39 = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        v56 = sub_10115FB0();
        v4 = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        v46 = v38;
        v47 = v39;
      }
      else
      {
        v3 = *(_DWORD *)(a2 + 20);
        v40 = *(_DWORD *)(a2 + 12);
        v42 = v3;
        v41 = *(float *)(a2 + 16);
        v56 = v2 * (360 / v50);
        v56 = (unsigned __int16)(int)(((double)v56 + v43) * 182.04445);
        v55 = COERCE_FLOAT(&v46);
        v41 = (double)v56 * 0.0054931641 + v41;
        sub_101EDFB0(&v40);
        v4 = RandomFloat(-1.0, 1.0);
      }
      v48 = v4;
      off_103EDFEC();
      v5 = *(float *)(a2 + 56);
      v6 = v5 * v48;
      v7 = v46 * v5;
      v8 = v47 * v5 + *(float *)(a2 + 4);
      v9 = v6 + *(float *)(a2 + 8);
      v10 = v7 + *(float *)a2 - *(float *)a2;
      v31[4] = v10;
      v11 = v10;
      v12 = v8 - *(float *)(a2 + 4);
      v31[5] = v12;
      v13 = v12;
      v14 = v9 - *(float *)(a2 + 8);
      v31[6] = v14;
      v33 = 0.0 != v11 * v11 + v13 * v13 + v14 * v14;
      v31[14] = 0.0;
      v31[13] = 0.0;
      v55 = 0.0;
      v31[12] = 0.0;
      v54 = v45;
      v31[10] = 0.0;
      v31[9] = 0.0;
      v32 = 1;
      v31[8] = 0.0;
      v31[0] = *(float *)a2;
      v31[1] = *(float *)(a2 + 4);
      v31[2] = *(float *)(a2 + 8);
      sub_1012D400(v30, v45, 0);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
        dword_104131A0,
        v31,
        1174421507,
        v30,
        v27);
      v15 = (float *)dword_10439134;
      if ( *(_DWORD *)(dword_10439134 + 48) )
        sub_10130AC0(v27, v28, 255, 0, 0, 1, 5.0);
    }
    while ( v29 >= 1.0 && SLODWORD(v55) < 3 );
    if ( v29 < 1.0 && !(unsigned __int8)sub_1017AD20(v28, 0) )
    {
      v52 = v28[0];
      v55 = COERCE_FLOAT(&v34);
      v16 = sub_101356E0();
      sub_101EDFB0(v16);
      v55 = 0.0;
      v52 = v52 - v34 * 8.0;
      v53 = COERCE_FLOAT(&v52) - v35 * 8.0;
      *(float *)&v54 = COERCE_FLOAT(v37) - 8.0 * v36;
      v37[0] = -v34;
      v37[1] = -v35;
      v37[2] = -v36;
      ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD, int, _DWORD))(*off_103DFD80)[7])(
        off_103DFD80,
        LODWORD(v53),
        v54,
        0);
      sub_100F32D0(&v51, (int)"dust");
      sub_100F3060((int)v51, &v52);
      v55 = COERCE_FLOAT(&v52);
      v17 = v51;
      v18 = sub_100F29B0((int)v17, (int)v17, a2, "effects/tesla_glow_noz");
      v19 = sub_100F2B60((int)v17, a2, 60, v18, (float *)LODWORD(v55));
      v20 = v19;
      if ( v19 )
      {
        v19[11] = 0.0;
        v19[10] = RandomFloat(0.5, 1.0);
        v20[6] = flt_10459240;
        *(_QWORD *)(v20 + 7) = qword_10459244;
        v21 = RandomFloat(0.75, 1.25);
        if ( v21 <= 1.0 )
          v22 = v21;
        else
          v22 = 1.0;
        v56 = (int)(v22 * 255.0);
        *((_BYTE *)v20 + 48) = v56;
        if ( v21 <= 1.0 )
          v23 = v21;
        else
          v23 = 1.0;
        v56 = (int)(v23 * 255.0);
        *((_BYTE *)v20 + 49) = v56;
        if ( v21 > 1.0 )
          v21 = 1.0;
        v56 = (int)(v21 * 255.0);
        *((_BYTE *)v20 + 50) = v56;
        v56 = (int)RandomFloat(6.0, 13.0);
        v24 = v56;
        *((_BYTE *)v20 + 53) = v56;
        *((_BYTE *)v20 + 54) = v24 - 2;
        *(_WORD *)((char *)v20 + 51) = 2815;
        v20[9] = RandomFloat(0.0, 360.0);
        v20[14] = 0.0;
      }
      v15 = v51;
      if ( v51 )
        sub_100F2FF0((int)v51);
      v2 = i;
    }
    v55 = *(float *)(a2 + 52);
    v54 = 256;
    v25 = *(float *)(a2 + 32);
    LODWORD(v53) = a2 + 40;
    v52 = *(float *)&v15;
    v26 = *(_DWORD *)(a2 + 28);
    v52 = v25;
    sub_101768D0(v45, (float *)a2, v28, v26, v52, (float *)(a2 + 40), 256, v55);
    ++v2;
  }
}
