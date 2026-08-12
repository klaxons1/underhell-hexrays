int __usercall sub_1016D620@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v2; // esi
  int v3; // eax
  int result; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  float v9; // edx
  float v10; // ecx
  int v11; // edi
  int v12; // esi
  float v13; // edx
  float v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st4
  double v18; // st2
  int v19; // eax
  int v20; // eax
  double v21; // st6
  double v22; // st7
  int v23; // eax
  int v24; // esi
  float v25; // [esp+10h] [ebp-150h]
  float v26; // [esp+10h] [ebp-150h]
  _BYTE v27[12]; // [esp+1Ch] [ebp-144h] BYREF
  float v28[20]; // [esp+28h] [ebp-138h] BYREF
  int v29; // [esp+78h] [ebp-E8h] BYREF
  float v30[16]; // [esp+84h] [ebp-DCh] BYREF
  char v31; // [esp+C4h] [ebp-9Ch]
  bool v32; // [esp+C5h] [ebp-9Bh]
  _DWORD v33[3]; // [esp+DCh] [ebp-84h] BYREF
  int v34; // [esp+E8h] [ebp-78h]
  float v35; // [esp+ECh] [ebp-74h]
  float v36; // [esp+F0h] [ebp-70h]
  float v37; // [esp+F4h] [ebp-6Ch]
  float v38; // [esp+F8h] [ebp-68h]
  float v39; // [esp+FCh] [ebp-64h]
  float v40; // [esp+100h] [ebp-60h]
  float v41; // [esp+104h] [ebp-5Ch]
  float v42; // [esp+108h] [ebp-58h]
  float v43; // [esp+10Ch] [ebp-54h]
  float v44; // [esp+110h] [ebp-50h]
  int v45; // [esp+114h] [ebp-4Ch]
  float v46; // [esp+118h] [ebp-48h]
  float v47; // [esp+11Ch] [ebp-44h]
  float v48; // [esp+120h] [ebp-40h]
  float v49; // [esp+124h] [ebp-3Ch]
  float v50; // [esp+128h] [ebp-38h]
  float v51; // [esp+12Ch] [ebp-34h]
  int *v52; // [esp+130h] [ebp-30h]
  float v53; // [esp+134h] [ebp-2Ch]
  int v54; // [esp+138h] [ebp-28h]
  float v55; // [esp+13Ch] [ebp-24h]
  float v56; // [esp+140h] [ebp-20h]
  float v57; // [esp+144h] [ebp-1Ch]
  _DWORD *v58; // [esp+148h] [ebp-18h]
  int v59; // [esp+14Ch] [ebp-14h]
  float v60; // [esp+150h] [ebp-10h]
  int v61; // [esp+154h] [ebp-Ch]
  void *v62; // [esp+158h] [ebp-8h]
  void *retaddr; // [esp+160h] [ebp+0h]

  v61 = a2;
  v62 = retaddr;
  v2 = a1;
  v3 = a1[16];
  v58 = a1;
  result = sub_1016BEB0(v3);
  v5 = v2[16] <= 0;
  v54 = 0;
  if ( !v5 )
  {
    while ( 1 )
    {
      v6 = dword_106B52E0[v54];
      v60 = 0.0;
      v7 = v2[v6 + 17];
      v8 = *(_DWORD *)(v7 + 252);
      v44 = 100000.0;
      v34 = v6;
      v49 = 0.0;
      v50 = 0.0;
      v45 = 0;
      v51 = 0.0;
      v59 = 0;
      if ( (v8 & 0x800) != 0 )
        sub_100DAE60(v7);
      v9 = *(float *)(v7 + 580);
      v10 = *(float *)(v7 + 588);
      v56 = *(float *)(v7 + 584);
      v11 = 0;
      v55 = v9;
      v57 = v10;
      if ( (int)v58[81] > 0 )
      {
        v52 = v58 + 82;
        do
        {
          v12 = *v52;
          if ( (*(_DWORD *)(*v52 + 252) & 0x800) != 0 )
            sub_100DAE60(*v52);
          v13 = *(float *)(v12 + 584);
          v14 = *(float *)(v12 + 588);
          v41 = *(float *)(v12 + 580);
          v42 = v13;
          v43 = v14;
          v25 = (v41 - v55) * (v41 - v55) + (v13 - v56) * (v13 - v56) + (v14 - v57) * (v14 - v57);
          v15 = off_10689708(v25);
          v53 = v15;
          if ( v15 <= 1024.0 && v15 >= 4.0 )
          {
            if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
              sub_100DAE60(v12);
            v16 = *(float *)(v12 + 580) - v55;
            v30[4] = v16;
            v17 = *(float *)(v12 + 584) - v56;
            v30[5] = v17;
            v18 = *(float *)(v12 + 588) - v57;
            v30[6] = v18;
            v32 = 0.0 != v18 * v18 + v16 * v16 + v17 * v17;
            v30[14] = 0.0;
            v30[13] = 0.0;
            v30[12] = 0.0;
            v30[10] = 0.0;
            v31 = 1;
            v30[9] = 0.0;
            v30[8] = 0.0;
            v30[0] = v55;
            v30[1] = v56;
            v30[2] = v57;
            sub_10265570(v12, 0);
            (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
              dword_106B31F4,
              v30,
              33570827,
              &v29,
              v27);
            if ( *(_DWORD *)(dword_106CE63C + 48) )
              sub_101A0AD0((int)v27, (int)v28, 255, 0, 0, 1, 5.0);
            if ( v28[8] >= 1.0 )
            {
              ++v59;
              if ( v44 > (double)v53 )
              {
                v19 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                        dword_106B31D0,
                        *(_DWORD *)(v12 + 24));
                v44 = v53;
                v45 = v19;
              }
              v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 508))(v12);
              sub_10422220(v20, v33);
              v46 = v55 - v41;
              v47 = v56 - v42;
              v48 = v57 - v43;
              off_10689714();
              v35 = v46;
              v36 = v47;
              v37 = v48;
              v38 = *(float *)v33;
              v39 = *(float *)&v33[1];
              v40 = *(float *)&v33[2];
              off_10689714();
              off_10689714();
              v21 = (v39 * v36 + v35 * v38 + v40 * v37 + 1.0) * 0.5;
              v60 = 1.0 / sqrt(v53) * (v21 * v21) + v60;
              v49 = v46 + v49;
              v50 = v47 + v50;
              v51 = v48 + v51;
            }
          }
          ++v52;
          ++v11;
        }
        while ( v11 < v58[81] );
        if ( v59 > 0 )
        {
          v26 = v50 * v50 + v49 * v49 + v51 * v51;
          v22 = off_10689708(v26);
          v60 = v22 / (double)v59 * v60;
        }
      }
      v23 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
              dword_106B31F8,
              "hltv_rank_camera",
              0);
      v24 = v23;
      if ( v23 )
      {
        (*(void (__thiscall **)(int, const char *, float))(*(_DWORD *)v23 + 44))(
          v23,
          "rank",
          COERCE_FLOAT(LODWORD(v60)));
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 40))(v24, "index", v34);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 40))(v24, "target", v45);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v24, 0);
      }
      result = v54 + 1;
      v54 = result;
      if ( result >= v58[16] )
        break;
      v2 = v58;
    }
  }
  return result;
}
