void __userpurge sub_1038C990(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float a5)
{
  int v6; // edi
  int v7; // ecx
  double v8; // st7
  int v9; // edx
  int v10; // eax
  float v11; // edi
  float *v12; // edi
  float *v13; // eax
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  int v18; // eax
  double v19; // st7
  double v20; // st6
  float *v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  double v26; // st7
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  _BYTE *v30; // edi
  int v31; // eax
  double v32; // st7
  double v33; // st7
  int *v34; // eax
  int v35; // edx
  int v36; // eax
  double (__thiscall *v37)(int, _DWORD, _DWORD); // eax
  double v38; // st7
  double v39; // st6
  double v40; // st5
  double v41; // st7
  double v42; // st5
  double v43; // st4
  double v44; // st4
  double v45; // st0
  int v46; // ecx
  double v47; // st7
  float v48; // [esp+24h] [ebp-12Ch]
  float v50; // [esp+30h] [ebp-120h]
  float v51; // [esp+34h] [ebp-11Ch] BYREF
  float v52; // [esp+38h] [ebp-118h]
  int v53; // [esp+3Ch] [ebp-114h]
  _BYTE v54[12]; // [esp+8Ch] [ebp-C4h] BYREF
  float v55[19]; // [esp+98h] [ebp-B8h] BYREF
  float v56; // [esp+E4h] [ebp-6Ch] BYREF
  float v57; // [esp+E8h] [ebp-68h]
  float v58; // [esp+ECh] [ebp-64h]
  int v59; // [esp+F0h] [ebp-60h]
  float v60; // [esp+F4h] [ebp-5Ch]
  float v61; // [esp+F8h] [ebp-58h]
  float v62; // [esp+FCh] [ebp-54h]
  float v63; // [esp+100h] [ebp-50h] BYREF
  float v64; // [esp+104h] [ebp-4Ch]
  float v65; // [esp+108h] [ebp-48h]
  int v66; // [esp+10Ch] [ebp-44h]
  float v67; // [esp+110h] [ebp-40h] BYREF
  float v68; // [esp+114h] [ebp-3Ch]
  float v69; // [esp+118h] [ebp-38h]
  float v70; // [esp+11Ch] [ebp-34h] BYREF
  float v71; // [esp+120h] [ebp-30h]
  float v72; // [esp+124h] [ebp-2Ch]
  float v73; // [esp+128h] [ebp-28h] BYREF
  float v74; // [esp+12Ch] [ebp-24h]
  float v75; // [esp+130h] [ebp-20h]
  float v76; // [esp+134h] [ebp-1Ch]
  float v77; // [esp+138h] [ebp-18h]
  char v78; // [esp+13Fh] [ebp-11h]
  float v79; // [esp+140h] [ebp-10h]
  int v80; // [esp+144h] [ebp-Ch]
  void *v81; // [esp+148h] [ebp-8h]
  void *retaddr; // [esp+150h] [ebp+0h]
  float v83; // [esp+154h] [ebp+4h]

  v80 = a2;
  v81 = retaddr;
  if ( *(_DWORD *)(a1 + 4268) )
  {
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a4);
    if ( !v6
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)
      || (v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1096))(v6)) == 0 )
    {
      v7 = v6;
    }
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 540))(v7, &v56, 0);
    v52 = v57 * v57 + v56 * v56 + v58 * v58;
    v8 = off_10689708(v52);
    v9 = *(_DWORD *)a1;
    v77 = v8;
    v10 = (*(int (__thiscall **)(int))(v9 + 368))(a1);
    v11 = *(float *)&v10;
    if ( !v10
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10)
      || (v79 = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v11) + 1096))(COERCE_FLOAT(LODWORD(v11)))),
          v79 == 0.0) )
    {
      v79 = v11;
    }
    v12 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, &v63);
    v13 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v79) + 576))(COERCE_FLOAT(LODWORD(v79)));
    v14 = v13[1] - v12[1];
    v15 = *v13 - *v12;
    v76 = sqrt(v15 * v15 + v14 * v14);
    v83 = sub_1038A320((void *)a1, a5, v76, v77);
    v59 = sub_10389120(a1, v83);
    v78 = sub_1038A110((void *)a1);
    if ( v78 )
    {
      v16 = 125.0;
      *(_DWORD *)(a1 + 4268) = 2;
    }
    else
    {
      v16 = 0.0;
      *(_DWORD *)(a1 + 4268) = 1;
    }
    *(float *)(a1 + 4276) = v16;
    v17 = v77;
    *(_DWORD *)(a1 + 4272) = 2;
    v51 = v17;
    v76 = COERCE_FLOAT(sub_1038A3E0((_DWORD *)a1, v76, v51));
    v18 = sub_100CF460((_DWORD *)a1);
    v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v18 + 1108))(v18);
    v20 = 1.0 - (v19 * (double)SLODWORD(v76) + 0.19999999 * v83) / v83;
    v77 = v20;
    if ( v20 < 0.5 )
    {
      v20 = 0.5;
      v77 = 0.5;
    }
    v48 = v83 * v20;
    sub_1038C750((_DWORD *)a1, v48, 0.0, 0.0, &v73, &v63);
    v21 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, &v63);
    v22 = v73 - *v21;
    v60 = v22;
    v23 = v74 - v21[1];
    v61 = v23;
    v24 = v75 - v21[2];
    v62 = v24;
    v50 = v22 * v22 + v23 * v23 + v24 * v24;
    v79 = off_10689708(v50);
    v62 = 0.0;
    v25 = off_10689714() - 50.0;
    v76 = v25;
    if ( v25 < 0.0 )
      v76 = 0.0;
    v26 = sub_103890A0(v79);
    v79 = v26 + (double)v59 * 40.0;
    if ( v78 )
    {
      v27 = (*(int (__stdcall **)(float, float, int))(*(_DWORD *)a1 + 368))(
              COERCE_FLOAT(LODWORD(v51)),
              COERCE_FLOAT(LODWORD(v52)),
              v53);
      if ( !v27
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v27 + 320))(v27)
        || (v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 1096))(v27)) == 0 )
      {
        v28 = v27;
      }
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v28 + 536))(v28, &v67);
      v29 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v30 = (_BYTE *)v29;
      if ( v29 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 320))(v29) )
        {
          v31 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 1096))(v30);
          if ( v31 )
            v30 = (_BYTE *)v31;
        }
      }
      if ( (v30[256] & 1) == 0 )
        v69 = 0.0;
      v32 = off_10689714();
      *(float *)&v66 = v32;
      v79 = v32 * 0.0099999998 * 200.0 + v79;
      v33 = v69 * 0.0;
      v70 = v68 - v33;
      v71 = v33 - v67;
      v72 = v67 * 0.0 - 0.0 * v68;
      off_10689714();
      v34 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v35 = *v34;
      v52 = COERCE_FLOAT(&v63);
      v36 = (*(int (__thiscall **)(int *))(v35 + 508))(v34);
      sub_10422220(v36, &v63);
      if ( v65 * v72 + v63 * v70 + v64 * v71 < 0.0 )
      {
        v70 = v70 * -1.0;
        v71 = v71 * -1.0;
        v72 = -1.0 * v72;
      }
      v37 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v51 = 70.0 - *(float *)&v66 * 40.0 * 0.0049999999;
      v38 = v37(dword_106B31E4, LODWORD(v51), 100.0);
      v39 = v70 * v38 + v73;
      v40 = v38 * v72;
      v41 = v71 * v38 + v74;
      v42 = v40 + v75;
    }
    else
    {
      v41 = v74;
      v39 = v73;
      v42 = v75;
    }
    v43 = v79 * v77;
    if ( v76 <= v43 )
      v43 = v76;
    v44 = -v43;
    v67 = v44 * v60 + v39;
    v68 = v61 * v44 + v41;
    v69 = v44 * v62 + v42;
    v45 = (1.0 - v77) * v79;
    v73 = v39 + v60 * v45;
    v74 = v41 + v61 * v45;
    v75 = v42 + v45 * v62;
    v63 = v67;
    v64 = v68;
    v65 = v69 - 512.0;
    sub_1001F180(&v51, &v67, &v63);
    sub_10265570(&v70, 0, 0);
    (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      &v51,
      16443,
      &v70,
      v54);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v54, (int)v55, 255, 0, 0, 1, 5.0);
    v46 = v59;
    *(float *)(a1 + 4208) = v55[0];
    v66 = v46 - 1;
    *(float *)(a1 + 4212) = v55[1];
    *(float *)(a1 + 4216) = v55[2];
    *(float *)(a1 + 4220) = v73 - *(float *)(a1 + 4208);
    *(float *)(a1 + 4224) = v74 - *(float *)(a1 + 4212);
    *(float *)(a1 + 4228) = v75 - *(float *)(a1 + 4216);
    *(float *)(a1 + 4256) = *(float *)(a1 + 4208);
    *(float *)(a1 + 4260) = *(float *)(a1 + 4212);
    *(float *)(a1 + 4264) = *(float *)(a1 + 4216);
    *(float *)(a1 + 4244) = *(float *)(a1 + 4220);
    *(float *)(a1 + 4248) = *(float *)(a1 + 4224);
    *(float *)(a1 + 4252) = *(float *)(a1 + 4228);
    v47 = 1.0 / (double)v66;
    *(float *)(a1 + 4220) = v47 * *(float *)(a1 + 4220);
    *(float *)(a1 + 4224) = v47 * *(float *)(a1 + 4224);
    *(float *)(a1 + 4228) = v47 * *(float *)(a1 + 4228);
  }
}
