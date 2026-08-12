void __usercall sub_10136C40(int a1@<ecx>, float a2@<ebx>, float a3@<ebp>, int a4@<edi>)
{
  int v4; // esi
  int v5; // edi
  float v6; // edx
  float v7; // eax
  int v8; // edx
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st2
  double v15; // st7
  double v16; // st7
  bool v18; // zf
  double (*v19)(void); // edx
  double v20; // st7
  double v21; // st6
  float v22; // ecx
  double v23; // st7
  int v24; // ecx
  float v25; // esi
  char *v26; // eax
  int v27; // eax
  int v28; // edi
  const char *v29; // esi
  float v30; // [esp+0h] [ebp-1C8h]
  int v31; // [esp+54h] [ebp-174h]
  float v32; // [esp+58h] [ebp-170h]
  _BYTE v33[12]; // [esp+5Ch] [ebp-16Ch] BYREF
  float v34; // [esp+68h] [ebp-160h] BYREF
  float v35; // [esp+6Ch] [ebp-15Ch]
  float v36; // [esp+70h] [ebp-158h]
  float v37; // [esp+88h] [ebp-140h]
  _BYTE v38[12]; // [esp+B4h] [ebp-114h] BYREF
  float v39; // [esp+C0h] [ebp-108h] BYREF
  float v40; // [esp+C4h] [ebp-104h]
  float v41; // [esp+C8h] [ebp-100h]
  float v42; // [esp+E0h] [ebp-E8h]
  int v43; // [esp+10Ch] [ebp-BCh] BYREF
  int v44; // [esp+118h] [ebp-B0h] BYREF
  float v45[16]; // [esp+124h] [ebp-A4h] BYREF
  char v46; // [esp+164h] [ebp-64h]
  bool v47; // [esp+165h] [ebp-63h]
  float v48[3]; // [esp+17Ch] [ebp-4Ch] BYREF
  float v49; // [esp+188h] [ebp-40h]
  float v50; // [esp+18Ch] [ebp-3Ch]
  float v51; // [esp+190h] [ebp-38h]
  float v52; // [esp+194h] [ebp-34h] BYREF
  float v53; // [esp+198h] [ebp-30h]
  float v54; // [esp+19Ch] [ebp-2Ch]
  float v55; // [esp+1A0h] [ebp-28h]
  float v56; // [esp+1A4h] [ebp-24h]
  float v57; // [esp+1A8h] [ebp-20h]
  float v58; // [esp+1ACh] [ebp-1Ch]
  float v59; // [esp+1B0h] [ebp-18h]
  float v60; // [esp+1B4h] [ebp-14h] BYREF
  int v61; // [esp+1B8h] [ebp-10h]
  float v62; // [esp+1BCh] [ebp-Ch]
  float v63; // [esp+1C0h] [ebp-8h]

  if ( 0.0 != *(float *)(a1 + 984) )
  {
    v18 = (*(_BYTE *)(a1 + 248) & 4) == 0;
    v63 = 0.0;
    if ( v18 )
    {
      v23 = *(float *)(dword_106B31C8 + 12);
      v62 = *(float *)&dword_106B31C8;
      v62 = v23 + *(float *)(a1 + 984) + *(float *)(a1 + 1000);
      sub_100EC4A0((int *)a1, v62, SLODWORD(v63));
    }
    else
    {
      v19 = *(double (**)(void))(*(_DWORD *)dword_106B31E4 + 4);
      v62 = *(float *)(a1 + 1000);
      *(float *)&v61 = 0.0;
      v20 = v19();
      v21 = *(float *)(dword_106B31C8 + 12);
      v60 = v22;
      v60 = v20 + v21 + *(float *)(a1 + 984);
      sub_100EC4A0((int *)a1, v60, COERCE_INT(0.0));
    }
  }
  v18 = *(_DWORD *)(a1 + 980) == 0;
  *(_DWORD *)(a1 + 968) = 1;
  if ( v18 )
  {
    if ( *(_DWORD *)(a1 + 976) )
    {
      v26 = *(char **)(a1 + 976);
      if ( !v26 )
        v26 = (char *)String;
      v27 = sub_100F9520(v26);
      v28 = v27;
      if ( v27 )
      {
        if ( (*(_DWORD *)(v27 + 252) & 0x800) != 0 )
          sub_100DAE60(v27);
        sub_101369C0(a1, SLODWORD(a3), (float *)(v28 + 580), a1, (float *)(v28 + 580));
      }
      else
      {
        v29 = *(const char **)(a1 + 976);
        if ( !v29 )
          v29 = String;
        Msg("env_beam: unknown entity \"%s\"\n", v29);
      }
    }
    else
    {
      v24 = a1;
      v25 = v62;
      v62 = a2;
      v60 = a3;
      *(float *)&v61 = v63;
      v32 = v25;
      v31 = a4;
      v4 = v24;
      v5 = 0;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        v6 = *(float *)(v4 + 584);
        v7 = *(float *)(v4 + 588);
        v52 = *(float *)(v4 + 580);
        v53 = v6;
        v8 = *(_DWORD *)dword_106B31E4;
        v54 = v7;
        v59 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, _DWORD))*(_DWORD *)(v8 + 4))(
                dword_106B31E4,
                -1.0,
                1.0,
                v31,
                LODWORD(v32));
        v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -1.0,
                1.0);
        v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               -1.0,
               1.0);
        v55 = v59;
        v56 = v58;
        v57 = v9;
        off_10689714();
        v10 = *(float *)(v4 + 1012);
        v11 = v55 * v10;
        v12 = v56 * v10 + v53;
        v13 = v10 * v57 + v54;
        v14 = v11 + v52 - v52;
        v45[4] = v14;
        v45[5] = v12 - v53;
        v45[6] = v13 - v54;
        v47 = 0.0 != (v13 - v54) * (v13 - v54) + v14 * v14 + (v12 - v53) * (v12 - v53);
        v45[14] = 0.0;
        v45[13] = 0.0;
        v45[12] = 0.0;
        v46 = 1;
        v45[10] = 0.0;
        v45[9] = 0.0;
        v45[8] = 0.0;
        v45[0] = v52;
        v45[1] = v53;
        v45[2] = v54;
        sub_10265570(v4, 0);
        (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v45,
          16395,
          &v44,
          v33);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v33, (int)&v34, 255, 0, 0, 1, 5.0);
        if ( 1.0 != v37 )
        {
          do
          {
            v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1.0,
                    1.0);
            v49 = v58;
            v50 = v59;
            v51 = v15;
          }
          while ( v59 * v56 + v58 * v55 + v15 * v57 > 0.0 );
          off_10689714();
          v16 = *(float *)(v4 + 1012);
          v48[0] = v49 * v16 + v52;
          v48[1] = v50 * v16 + v53;
          v48[2] = v16 * v51 + v54;
          sub_1001F180(v45, &v52, v48);
          sub_10265570(v4, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v45,
            16395,
            &v43,
            v38);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v38, (int)&v39, 255, 0, 0, 1, 5.0);
          if ( 1.0 != v42 )
          {
            v30 = (v34 - v39) * (v34 - v39) + (v35 - v40) * (v35 - v40) + (v36 - v41) * (v36 - v41);
            if ( *(float *)(v4 + 1012) * 0.1 <= off_10689708(v30) )
            {
              sub_1002A5F0((int)&v60, v4, &v34, &v39, 16395, v4, 0, (int)v38);
              if ( 1.0 == v42 )
                break;
            }
          }
        }
        if ( ++v5 >= 10 )
          return;
      }
      sub_10135F10(v4, (int)&v34, (int)&v39);
    }
  }
  else
  {
    sub_10136060(a1);
  }
}
