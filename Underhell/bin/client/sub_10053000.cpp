void __usercall sub_10053000(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float *a4, float *a5, float a6, float a7)
{
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v11; // st6
  double v13; // st5
  double v14; // st7
  int v15; // ebx
  double v16; // st7
  double v17; // st5
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st5
  int v23; // eax
  double v24; // st7
  int (__thiscall *v25)(int); // edx
  int v26; // eax
  int v29; // [esp+6Ch] [ebp-64h] BYREF
  int v30; // [esp+70h] [ebp-60h]
  float v31; // [esp+78h] [ebp-58h]
  float v32; // [esp+7Ch] [ebp-54h]
  float v33; // [esp+80h] [ebp-50h]
  float v34; // [esp+84h] [ebp-4Ch]
  float v35; // [esp+88h] [ebp-48h]
  float v36; // [esp+8Ch] [ebp-44h]
  float v37; // [esp+90h] [ebp-40h]
  float v38; // [esp+94h] [ebp-3Ch]
  float v39; // [esp+98h] [ebp-38h]
  char v40; // [esp+9Ch] [ebp-34h]
  char v41; // [esp+9Dh] [ebp-33h]
  char v42; // [esp+9Eh] [ebp-32h]
  char v43; // [esp+9Fh] [ebp-31h]
  char v44; // [esp+A0h] [ebp-30h]
  char v45; // [esp+A1h] [ebp-2Fh]
  char v46; // [esp+A2h] [ebp-2Eh]
  char v47; // [esp+A3h] [ebp-2Dh]
  float v48; // [esp+A4h] [ebp-2Ch]
  float v49[3]; // [esp+A8h] [ebp-28h] BYREF
  float v50; // [esp+B4h] [ebp-1Ch] BYREF
  float v51; // [esp+B8h] [ebp-18h]
  float v52; // [esp+BCh] [ebp-14h]
  float v53; // [esp+C0h] [ebp-10h]
  int v54; // [esp+C4h] [ebp-Ch]
  int v55; // [esp+C8h] [ebp-8h]
  float v56; // [esp+CCh] [ebp-4h]
  int v57; // [esp+D8h] [ebp+8h]
  int v58; // [esp+DCh] [ebp+Ch]
  int v59; // [esp+E4h] [ebp+14h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_Dust", 0, "Particle/Effect_Rendering", 0, 4);
  v7 = a6;
  v8 = (int)(0.5 * a6);
  v55 = v8;
  if ( v8 >= 1 )
  {
    if ( v8 > 32 )
      v55 = 32;
  }
  else
  {
    v55 = 1;
  }
  v9 = a7 * 0.1;
  v56 = v9;
  if ( v9 >= 0.0 )
  {
    if ( v9 > 48.0 )
      v56 = 48.0;
  }
  else
  {
    v56 = 1.0;
  }
  v11 = *a5 * v7;
  v13 = a5[1] * v7;
  v14 = v7 * a5[2];
  v50 = v11 + *a4;
  v51 = v13 + a4[1];
  v52 = v14 + a4[2];
  (*(void (__thiscall **)(int, float *, float *, int, int, int, int))(*(_DWORD *)dword_1041315C + 4))(
    dword_1041315C,
    v49,
    &v50,
    1,
    a2,
    a3,
    a1);
  v15 = 0;
  v47 = 0;
  v59 = 0;
  if ( v55 > 0 )
  {
    v16 = a6 * 0.25;
    *(float *)&v57 = -v16;
    *(float *)&v58 = v16 - -v16;
    v53 = v56 * 0.5;
    do
    {
      v54 = sub_10115FB0();
      v50 = (double)v54 * 0.000030518509 * *(float *)&v58 + *(float *)&v57;
      v54 = sub_10115FB0();
      v51 = (double)v54 * 0.000030518509 * *(float *)&v58 + *(float *)&v57;
      v54 = sub_10115FB0();
      v17 = a6 * a5[2] + a4[2];
      v18 = a5[1] * a6 + a4[1];
      v50 = *a5 * a6 + *a4 + v50;
      v51 = v18 + v51;
      v52 = (double)v54 * 0.000030518509 * *(float *)&v58 + *(float *)&v57 + v17;
      v33 = v52;
      v31 = v50;
      v32 = v51;
      v39 = 0.0;
      v38 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.40000001,
              1.0,
              v29,
              v30);
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              LODWORD(v53),
              LODWORD(v56));
      v20 = *a5 * v19;
      v30 = 64;
      v21 = v19 * a5[1];
      v22 = (double)v59;
      v34 = v20 * v22;
      v35 = v21 * v22;
      v36 = 0.0;
      v23 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 48, 64);
      v24 = (double)v23;
      v30 = 128;
      v29 = 64;
      v40 = (int)(v49[0] * v24 + (double)(v23 + 16));
      v41 = (int)(v49[1] * v24 + (double)(v23 + 8));
      v54 = (int)(v24 + v49[2] * v24);
      v42 = v54;
      v43 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 64, 128);
      v44 = 0;
      v45 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 8);
      v46 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 24, 48);
      v37 = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      v48 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -0.5,
              0.5);
      v25 = *(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8);
      v30 = 0;
      v29 = 1;
      v26 = v25(dword_10413198);
      sub_100F12D0(&v29, dword_1043DF20[v26], 0);
      v59 = ++v15;
    }
    while ( v15 < v55 );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
