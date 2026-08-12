void __usercall sub_101783A0(
        int a1@<ebx>,
        float a2@<edi>,
        float a3@<esi>,
        float *a4,
        int a5,
        float a6,
        int a7,
        _BYTE *a8,
        float a9)
{
  _BYTE *v9; // ebx
  double v10; // st7
  double v11; // st7
  char v12; // al
  char v13; // dl
  float v14; // esi
  int v15; // edx
  int v16; // eax
  int v17; // edx
  double v18; // st7
  double (__thiscall *v19)(int, _DWORD, _DWORD); // eax
  float v20; // [esp+4Ch] [ebp-54h]
  float v21; // [esp+54h] [ebp-4Ch]
  float v22; // [esp+5Ch] [ebp-44h]
  float v26; // [esp+78h] [ebp-28h]
  float v27; // [esp+7Ch] [ebp-24h]
  float v28; // [esp+80h] [ebp-20h]
  int v29; // [esp+84h] [ebp-1Ch] BYREF
  float v30; // [esp+88h] [ebp-18h]
  float v31; // [esp+8Ch] [ebp-14h]
  int v32; // [esp+90h] [ebp-10h] BYREF
  int v33; // [esp+94h] [ebp-Ch]
  float v34; // [esp+98h] [ebp-8h]
  int v35; // [esp+9Ch] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_Smoke", 0, "Particle/Effect_Rendering", 0, 4);
  if ( a7 > 0 )
  {
    v9 = a8;
    v35 = a7;
    do
    {
      sub_101EDFB0(a5);
      v34 = COERCE_FLOAT(sub_10115FB0());
      *(float *)&v29 = (double)SLODWORD(v34) * 0.000030518509 - 0.5;
      v34 = COERCE_FLOAT(sub_10115FB0());
      v30 = (double)SLODWORD(v34) * 0.000030518509 - 0.5;
      v34 = COERCE_FLOAT(sub_10115FB0());
      *(float *)&v29 = *(float *)&v29 + v26;
      v30 = v30 + v27;
      v31 = (double)SLODWORD(v34) * 0.000030518509 - 0.5 + v28;
      off_103EDFEC();
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              16.0,
              32.0,
              LODWORD(a2),
              LODWORD(a3),
              a1);
      *(float *)&v29 = *(float *)&v29 * v10;
      v30 = v30 * v10;
      v31 = v10 * v31;
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              4.0,
              16.0);
      v31 = v11 + v31;
      if ( v9 )
      {
        v13 = v9[1];
        v12 = v9[2];
        LOBYTE(a7) = *v9;
        BYTE1(a7) = v13;
      }
      else
      {
        v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 64, 164);
        LOBYTE(a7) = v12;
        BYTE1(a7) = v12;
      }
      v14 = a9;
      BYTE2(a7) = v12;
      if ( a9 == NAN )
        v14 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 10, 25));
      a1 = 8;
      v34 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 4));
      v15 = *(_DWORD *)dword_10413198;
      v33 = (int)((double)SLODWORD(v34) * a6);
      *(float *)&v16 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(v15 + 8))(dword_10413198, 0, 360));
      v17 = *(_DWORD *)dword_10413198;
      v34 = *(float *)&v16;
      v18 = (double)v16;
      v19 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v17 + 4);
      v34 = v18;
      a3 = v19(dword_10413198, -4.0, 4.0);
      a2 = v34;
      v22 = 1.0;
      v21 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
      v20 = (float)v33;
      sub_10178260(
        &v32,
        a4,
        (float *)&v29,
        v20,
        1,
        v21,
        COERCE__BYTE_(0.5),
        SLOBYTE(v22),
        (const char *)&a7,
        v14,
        COERCE_FLOAT("particle/particle_smokegrenade"));
      if ( v32 )
        sub_100F2FF0(v32);
      --v35;
    }
    while ( v35 );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
