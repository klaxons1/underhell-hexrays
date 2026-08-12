void __usercall sub_10263710(float a1@<ebp>, int a2@<edi>, int *a3)
{
  float *v3; // esi
  double v4; // st7
  double v5; // st7
  int v6; // esi
  long double v7; // st7
  float *v8; // eax
  long double v9; // st7
  float *v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // eax
  double v14; // st6
  double v15; // st7
  int v16; // edi
  const char *v17; // eax
  int v18; // esi
  int i; // esi
  float *v20; // eax
  double v21; // st6
  double v22; // st4
  double v23; // st2
  double v24; // st7
  bool v25; // zf
  double v26; // st7
  _BYTE v27[12]; // [esp+34h] [ebp-12Ch] BYREF
  _BYTE v28[76]; // [esp+40h] [ebp-120h] BYREF
  int v29; // [esp+8Ch] [ebp-D4h] BYREF
  int v30; // [esp+98h] [ebp-C8h] BYREF
  float v31[16]; // [esp+A4h] [ebp-BCh] BYREF
  char v32; // [esp+E4h] [ebp-7Ch]
  bool v33; // [esp+E5h] [ebp-7Bh]
  float v34; // [esp+F8h] [ebp-68h]
  float v35; // [esp+FCh] [ebp-64h]
  float v36; // [esp+100h] [ebp-60h]
  float v37[3]; // [esp+104h] [ebp-5Ch] BYREF
  float *v38; // [esp+110h] [ebp-50h]
  float *v39; // [esp+114h] [ebp-4Ch]
  float *v40; // [esp+118h] [ebp-48h]
  float v41; // [esp+11Ch] [ebp-44h]
  float v42; // [esp+120h] [ebp-40h]
  float v43; // [esp+124h] [ebp-3Ch] BYREF
  float v44; // [esp+128h] [ebp-38h]
  float v45; // [esp+12Ch] [ebp-34h]
  float v46; // [esp+130h] [ebp-30h] BYREF
  float v47; // [esp+134h] [ebp-2Ch]
  float v48; // [esp+138h] [ebp-28h] BYREF
  float v49; // [esp+13Ch] [ebp-24h]
  float v50; // [esp+140h] [ebp-20h]
  float v51; // [esp+144h] [ebp-1Ch] BYREF
  float v52; // [esp+148h] [ebp-18h] BYREF
  int v53; // [esp+14Ch] [ebp-14h]
  float v54[4]; // [esp+150h] [ebp-10h] BYREF
  float retaddr; // [esp+160h] [ebp+0h]

  v54[1] = a1;
  v54[2] = retaddr;
  if ( dword_106BAFF4 )
  {
    Msg("Testing collision system\n");
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31EC + 124))(dword_106B31EC, String, a2);
    v3 = (float *)sub_1012BC90(&dword_1069E3E0, 0, "info_player_start");
    if ( ((_DWORD)v3[63] & 0x800) != 0 )
      sub_100DAE60((int)v3);
    v4 = 0.0;
    v48 = v3[145];
    v49 = v3[146];
    v50 = v3[147];
    if ( byte_10653C90 )
    {
      v5 = 0.0;
      dword_106CE5F4 = sub_10184390(30000);
      v40 = &v51;
      v42 = 0.0;
      *(float *)&v53 = 0.0;
      v39 = &v46;
      v41 = COERCE_FLOAT(&v52);
      v38 = v54;
      v6 = 0;
      while ( 1 )
      {
        v47 = fabs(fmod(v5 + 307807.5, 128.0));
        v42 = fabs(fmod(v42 + 191900.0, 6.283185482025146));
        *(float *)&v53 = fabs(fmod(*(float *)&v53 + 4994975.0, 3.141592741012573));
        v7 = sin(v42);
        v8 = v39;
        *v40 = cos(v42);
        *v8 = v7;
        v9 = sin(*(float *)&v53);
        v10 = v38;
        *(float *)LODWORD(v41) = cos(*(float *)&v53);
        *v10 = v9;
        v11 = dword_106CE5F4;
        v12 = v47;
        *(float *)(v6 + dword_106CE5F4) = v51 * v47 * v54[0];
        *(float *)(v6 + v11 + 4) = v46 * v12 * v54[0];
        *(float *)(v6 + v11 + 8) = v12 * v52;
        v43 = *(float *)(v6 + v11) - v48;
        v44 = *(float *)(v6 + v11 + 4) - v49;
        v45 = *(float *)(v6 + v11 + 8) - v50;
        off_10689714();
        v13 = dword_106CE5F4;
        v6 += 12;
        v14 = v44 * 1024.0 + v49;
        v15 = 1024.0 * v45 + v50;
        *(float *)(v6 + dword_106CE5F4 - 12) = v43 * 1024.0 + v48;
        *(float *)(v6 + v13 - 8) = v14;
        *(float *)(v6 + v13 - 4) = v15;
        if ( v6 >= 30000 )
          break;
        v5 = v47;
      }
      v4 = 0.0;
      byte_10653C90 = 0;
    }
    v16 = 0;
    if ( *a3 >= 2 )
    {
      v17 = String;
      if ( *a3 > 1 )
        v17 = (const char *)a3[259];
      v4 = 0.0;
      v16 = atoi(v17);
    }
    v47 = v4;
    v53 = 2;
    v34 = v4;
    v35 = v4;
    v36 = v4;
    v37[0] = 16.0;
    v37[1] = 16.0;
    v37[2] = 16.0;
    do
    {
      v41 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      if ( v16 == 1 )
      {
        v18 = 0;
        v43 = -16.0;
        v44 = -16.0;
        v45 = -16.0;
        do
        {
          sub_1001F200(v31, &v48, (float *)(v18 + dword_106CE5F4), &v43, v37);
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v31,
            -1107296257,
            &v29,
            v27);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v27, (int)v28, 255, 255, 0, 1, -1.0);
          v18 += 12;
        }
        while ( v18 < 30000 );
      }
      else
      {
        v16 = 0;
        for ( i = 0; i < 2500; ++i )
        {
          if ( !i )
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_106B31EC + 80))(10.0);
          v20 = (float *)(dword_106CE5F4 + 12 * i);
          v21 = *v20 - v48;
          v31[4] = v21;
          v22 = v20[1] - v49;
          v31[5] = v22;
          v23 = v20[2] - v50;
          v31[6] = v23;
          v33 = 0.0 != v23 * v23 + v21 * v21 + v22 * v22;
          v31[14] = 0.0;
          v31[13] = 0.0;
          v31[12] = 0.0;
          v31[10] = 0.0;
          v32 = 1;
          v31[9] = 0.0;
          v31[8] = 0.0;
          v31[0] = v48;
          v31[1] = v49;
          v31[2] = v50;
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v31,
            -1107296257,
            &v30,
            v27);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v27, (int)v28, 255, 0, 0, 1, 5.0);
          if ( !i )
            (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31EC + 84))(dword_106B31EC);
        }
      }
      v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      v25 = v53-- == 1;
      v26 = v24 - v41 + v47;
      v47 = v26;
    }
    while ( !v25 );
    flt_10653C88[v16] = v26;
    Msg("%d collisions in %.2f ms (%u dots)\n", 2500, v26 * 1000.0, 0);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31EC + 124))(dword_106B31EC, String);
    sub_1011BC50(&v48, (float *)dword_106CE5F4, 255, 0, 0, 0, 2.0);
  }
}
