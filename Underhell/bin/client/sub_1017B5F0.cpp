void __usercall sub_1017B5F0(int a1@<esi>, float *a2, float *a3, float *a4, int a5)
{
  float *v5; // ebx
  double v6; // st6
  double v7; // st7
  float *v8; // eax
  int v9; // edi
  int v10; // esi
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  int v14; // edx
  double (__thiscall *v15)(int, _DWORD, _DWORD); // eax
  double v16; // st7
  double v17; // st7
  double (__stdcall *v18)(_DWORD, _DWORD); // eax
  double v19; // st7
  double (__stdcall *v20)(_DWORD, _DWORD); // eax
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st6
  int v25; // eax
  double v26; // st5
  double v27; // st7
  int v28; // eax
  int v29; // [esp+60h] [ebp-A4h]
  float v30; // [esp+60h] [ebp-A4h]
  float v31; // [esp+60h] [ebp-A4h]
  int v32; // [esp+64h] [ebp-A0h]
  float v33; // [esp+64h] [ebp-A0h]
  float v34; // [esp+64h] [ebp-A0h]
  float v35; // [esp+64h] [ebp-A0h]
  _DWORD v36[10]; // [esp+68h] [ebp-9Ch] BYREF
  float v37; // [esp+90h] [ebp-74h]
  float v38; // [esp+94h] [ebp-70h]
  float v39; // [esp+98h] [ebp-6Ch]
  float v40; // [esp+9Ch] [ebp-68h]
  float v41; // [esp+A0h] [ebp-64h]
  float v42; // [esp+A4h] [ebp-60h]
  float v43; // [esp+A8h] [ebp-5Ch]
  float v44; // [esp+ACh] [ebp-58h]
  float v45; // [esp+B0h] [ebp-54h]
  float v46[3]; // [esp+BCh] [ebp-48h] BYREF
  float v47[3]; // [esp+C8h] [ebp-3Ch] BYREF
  float v48; // [esp+D4h] [ebp-30h]
  float v49; // [esp+D8h] [ebp-2Ch]
  float v50; // [esp+DCh] [ebp-28h]
  float v51; // [esp+E0h] [ebp-24h]
  float v52; // [esp+E4h] [ebp-20h]
  float v53; // [esp+E8h] [ebp-1Ch]
  float v54; // [esp+ECh] [ebp-18h] BYREF
  float v55; // [esp+F0h] [ebp-14h]
  float v56; // [esp+F4h] [ebp-10h]
  int v57; // [esp+F8h] [ebp-Ch]
  float v58; // [esp+FCh] [ebp-8h]
  int v59; // [esp+100h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_MetalSpark", 0, "Particle/Effect_Rendering", 0, 4);
  if ( !*(_DWORD *)(dword_104452C4 + 48) )
    goto LABEL_2;
  v5 = a4;
  v6 = a4[1];
  v7 = a4[2];
  v54 = *a4 + *a2;
  v55 = v6 + a2[1];
  v56 = v7 + a2[2];
  v8 = (float *)sub_100DDA40(384);
  v9 = (int)v8;
  if ( v8 )
  {
    sub_100F2BA0(v8, (int)"FX_MetalSpark 1");
    *(_DWORD *)v9 = &CTrailParticles::`vftable';
    sub_100E8AB0((void *)(v9 + 260));
    *(float *)(v9 + 380) = 0.0;
    *(_DWORD *)(v9 + 376) = 0;
    sub_100F2950((_DWORD *)v9);
    sub_100F3060(v9, &v54);
    *(_DWORD *)(v9 + 376) |= 1u;
    *(float *)(v9 + 380) = 8.0;
    *(float *)(v9 + 364) = 400.0;
    *(float *)(v9 + 368) = 0.25;
    v47[0] = v54 + 32.0;
    v47[1] = v55 + 32.0;
    v47[2] = v56 + 32.0;
    v46[0] = v54 - 32.0;
    v46[1] = v55 - 32.0;
    v46[2] = v56 - 32.0;
    sub_100EC3F0(v9 + 8, v46, v47, 1);
    v10 = 2
        * a5
        * (*(int (__thiscall **)(int, int, int, int, int, int))(*(_DWORD *)dword_10413198 + 8))(
            dword_10413198,
            4,
            8,
            a1,
            v29,
            v32);
    v59 = v10;
    if ( !dword_10445298 )
      dword_10445298 = sub_100F29B0(v9, v9, v10, "effects/spark");
    v57 = 0;
    if ( v10 <= 0 )
    {
LABEL_15:
      v38 = 0.0;
      v37 = 0.0;
      v36[0] = 0;
      v28 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "effects/yellowflare",
              "ClientEffect textures",
              1,
              0);
      v36[1] = v28;
      if ( v28 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 48))(v28);
      v41 = 1.0;
      v42 = 1.0;
      v43 = 1.0;
      *(float *)&v36[2] = v54;
      *(float *)&v36[3] = v55;
      *(float *)&v36[4] = v56;
      *(float *)&v36[5] = *v5;
      *(float *)&v36[6] = v5[1];
      *(float *)&v36[7] = v5[2];
      v39 = 1.0;
      v40 = 0.0;
      v37 = 0.1;
      v59 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      v44 = (float)v59;
      v45 = 0.0;
      v59 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 24, 28);
      *(float *)&v36[8] = (float)v59;
      *(float *)&v36[9] = 0.0;
      sub_1008DC40((int)v36);
    }
    else
    {
      while ( 1 )
      {
        v11 = sub_100F2B60(v9, v10, 56, dword_10445298, &v54);
        v10 = (int)v11;
        if ( !v11 )
          break;
        v11[11] = 0.0;
        if ( a5 <= 1 || v57 % 3 )
        {
          v33 = 0.1;
          v12 = 0.050000001;
        }
        else
        {
          v33 = 0.25;
          v12 = 0.15000001;
        }
        v30 = v12;
        v11[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    LODWORD(v30),
                    LODWORD(v33));
        v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.0,
                2.0);
        v48 = v13;
        v14 = *(_DWORD *)dword_10413198;
        v58 = *a3;
        v15 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v14 + 4);
        v16 = v13 * 0.5;
        v52 = v16;
        v53 = -v16;
        v34 = v16;
        v17 = v15(dword_10413198, LODWORD(v53), LODWORD(v34));
        v49 = v17 + v58;
        v18 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v58 = a3[1];
        v19 = v18(LODWORD(v53), LODWORD(v52));
        v50 = v19 + v58;
        v20 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v58 = a3[2];
        v21 = v20(LODWORD(v53), LODWORD(v52));
        v51 = v21 + v58;
        off_103EDFEC();
        *(float *)(v10 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 1.0,
                                 4.0);
        *(float *)(v10 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.025,
                                 0.1);
        v22 = 2.0 - v48;
        v35 = 512.0 * v22;
        v31 = v22 * 128.0;
        v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                LODWORD(v31),
                LODWORD(v35));
        v24 = v49 * v23;
        v25 = ++v57;
        v26 = v50 * v23;
        v27 = v23 * v51;
        *(float *)(v10 + 24) = v24;
        *(float *)(v10 + 28) = v26;
        *(float *)(v10 + 32) = v27;
        *(_DWORD *)(v10 + 36) = -1;
        if ( v25 >= v59 )
        {
          v5 = a4;
          goto LABEL_15;
        }
      }
    }
    sub_100F2FF0(v9);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
LABEL_2:
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
