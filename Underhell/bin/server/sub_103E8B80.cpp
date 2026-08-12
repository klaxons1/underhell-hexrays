void __thiscall sub_103E8B80(int this)
{
  int v2; // edi
  int v3; // eax
  int i; // ebx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  char *v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  char *v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  double v38; // st7
  double v39; // st1
  double v40; // rt1
  double v41; // st1
  double v42; // rt2
  double v43; // st1
  double v44; // st0
  unsigned int v45; // eax
  int v46; // ecx
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // ecx
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // eax
  int v61; // ecx
  unsigned int v62; // eax
  int v63; // ecx
  float v64[3]; // [esp+58h] [ebp-58h] BYREF
  float v65[3]; // [esp+64h] [ebp-4Ch] BYREF
  float v66[3]; // [esp+70h] [ebp-40h] BYREF
  float v67[3]; // [esp+7Ch] [ebp-34h] BYREF
  float v68; // [esp+88h] [ebp-28h] BYREF
  float v69; // [esp+8Ch] [ebp-24h]
  float v70; // [esp+90h] [ebp-20h]
  float v71; // [esp+94h] [ebp-1Ch] BYREF
  float v72; // [esp+98h] [ebp-18h]
  float v73; // [esp+9Ch] [ebp-14h]
  float v74; // [esp+A0h] [ebp-10h] BYREF
  float v75; // [esp+A4h] [ebp-Ch]
  float v76; // [esp+A8h] [ebp-8h]
  bool v77; // [esp+AFh] [ebp-1h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1492) + 100))(*(_DWORD *)(this + 1492));
  v3 = sub_10266940(*(_DWORD **)(this + 1492));
  v77 = *(_BYTE *)(this + 1432) && *(_BYTE *)(v2 + 669) && (*(int *)(this + 1164) >= 5 || *(float *)(v3 + 20) > 10.0);
  for ( i = 0; i < 2; ++i )
  {
    sub_10266210(*(_DWORD **)(this + 1492), i, (int)&v71);
    v5 = *(_DWORD *)(this + 4 * i + 2052);
    if ( v5 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v5 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1] )
    {
      v6 = sub_101811E0("info_particle_system", -1);
      if ( v6 )
        *(_DWORD *)(this + 4 * i + 2052) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      else
        *(_DWORD *)(this + 4 * i + 2052) = -1;
      v7 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v7 == -1 )
        continue;
      v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      v9 = v7 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v9 || !*v8 )
        continue;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] == v9 )
        v10 = *v8;
      else
        v10 = 0;
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v10 + 128))(v10, "start_active", "0");
      v11 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v12 + 128))(v12, "effect_name", "WheelDust");
      v13 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v13 >> 12 )
        v14 = 0;
      else
        v14 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 140))(v14, this, -1);
      v15 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      sub_100E10C0(v16, &flt_106F1CA8);
      v17 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v17 >> 12 )
        v18 = 0;
      else
        v18 = (char *)off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      sub_10260750(v18);
      if ( *(float *)(dword_106B31C8 + 12) > 0.5 )
      {
        v19 = *(_DWORD *)(this + 4 * i + 2052);
        if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v19 >> 12 )
          v20 = 0;
        else
          v20 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
        (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 136))(v20);
      }
    }
    v21 = *(_DWORD *)(this + 4 * i + 2060);
    if ( v21 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v21 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1] )
    {
      v22 = sub_101811E0("info_particle_system", -1);
      if ( v22 )
        *(_DWORD *)(this + 4 * i + 2060) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
      else
        *(_DWORD *)(this + 4 * i + 2060) = -1;
      v23 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v23 == -1 )
        continue;
      v24 = &off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      v25 = v23 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v25 || !*v24 )
        continue;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] == v25 )
        v26 = *v24;
      else
        v26 = 0;
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v26 + 128))(v26, "start_active", "0");
      v27 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v27 >> 12 )
        v28 = 0;
      else
        v28 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v28 + 128))(
        v28,
        "effect_name",
        "WheelSplash");
      v29 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v29 >> 12 )
        v30 = 0;
      else
        v30 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 140))(v30, this, -1);
      v31 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v31 >> 12 )
        v32 = 0;
      else
        v32 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      sub_100E10C0(v32, &flt_106F1CA8);
      v33 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v33 >> 12 )
        v34 = 0;
      else
        v34 = (char *)off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      sub_10260750(v34);
      if ( *(float *)(dword_106B31C8 + 12) > 0.5 )
      {
        v35 = *(_DWORD *)(this + 4 * i + 2060);
        if ( v35 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v35 >> 12 )
          v36 = 0;
        else
          v36 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
        (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 136))(v36);
      }
    }
    if ( v77 )
    {
      (*(void (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)this + 528))(this, &v74, &v68, v67);
      v37 = sub_10266960(*(_DWORD **)(this + 1492));
      if ( (i & 1) != 0 )
        v38 = 1.0;
      else
        v38 = -1.0;
      v39 = v68 * v38 + v74;
      v74 = v39;
      v40 = v39;
      v41 = v69 * v38 + v75;
      v75 = v41;
      v42 = v41;
      v43 = v70 * v38 + v76;
      v76 = v43;
      v44 = *(float *)(v37 + 4) * 0.5;
      v74 = v40 + v68 * v44 * v38 + v67[0];
      v75 = v42 + v69 * v44 * v38 + v67[1];
      v76 = v43 + v38 * (v70 * v44) + v67[2];
      sub_10422540(&v74, v64);
      if ( *(_BYTE *)(i + this + 1844) )
      {
        v45 = *(_DWORD *)(this + 4 * i + 2052);
        if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v45 >> 12 )
          v46 = 0;
        else
          v46 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
        sub_101ABE40(v46);
        v47 = *(_DWORD *)(this + 4 * i + 2060);
        if ( v47 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v47 >> 12 )
          v48 = 0;
        else
          v48 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
        sub_101ABD90(v48);
        v49 = *(_DWORD *)(this + 4 * i + 2060);
        if ( v49 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v49 >> 12 )
          v50 = 0;
        else
          v50 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
        sub_100E0EA0(v50, v64);
        v51 = *(_DWORD *)(this + 4 * i + 2060);
        v66[0] = v71;
        v66[1] = v72;
        v66[2] = v73 + 8.0;
        if ( v51 == -1 || off_1061BE18[4 * (v51 & 0xFFF) + 2] != v51 >> 12 )
          v52 = 0;
        else
          v52 = off_1061BE18[4 * (v51 & 0xFFF) + 1];
        sub_100E0D20(v52, v66);
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 2068) )
        {
          *(float *)(this + 2068) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                           + 4))(
                                      dword_106B31E4,
                                      0.25,
                                      1.0)
                                  + *(float *)(dword_106B31C8 + 12);
          sub_1023C380((_DWORD *)this, (int)"Physics.WaterSplash", 0.0, 0);
        }
      }
      else
      {
        v53 = *(_DWORD *)(this + 4 * i + 2060);
        if ( v53 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v53 >> 12 )
          v54 = 0;
        else
          v54 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
        sub_101ABE40(v54);
        v55 = *(_DWORD *)(this + 4 * i + 2052);
        if ( v55 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v55 >> 12 )
          v56 = 0;
        else
          v56 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
        sub_101ABD90(v56);
        v57 = *(_DWORD *)(this + 4 * i + 2052);
        if ( v57 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v57 >> 12 )
          v58 = 0;
        else
          v58 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
        sub_100E0EA0(v58, v64);
        v59 = *(_DWORD *)(this + 4 * i + 2052);
        v65[0] = v71;
        v65[1] = v72;
        v65[2] = v73 + 8.0;
        if ( v59 == -1 || off_1061BE18[4 * (v59 & 0xFFF) + 2] != v59 >> 12 )
          sub_100E0D20(0, v65);
        else
          sub_100E0D20(off_1061BE18[4 * (v59 & 0xFFF) + 1], v65);
      }
    }
    else
    {
      v60 = *(_DWORD *)(this + 4 * i + 2052);
      if ( v60 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 2] != v60 >> 12 )
        v61 = 0;
      else
        v61 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2052) & 0xFFF) + 1];
      sub_101ABE40(v61);
      v62 = *(_DWORD *)(this + 4 * i + 2060);
      if ( v62 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 2] != v62 >> 12 )
        v63 = 0;
      else
        v63 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * i + 2060) & 0xFFF) + 1];
      sub_101ABE40(v63);
    }
  }
}
