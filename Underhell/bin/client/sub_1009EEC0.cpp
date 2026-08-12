void __cdecl sub_1009EEC0(float *a1)
{
  int v1; // ebx
  double v2; // st7
  double v3; // st6
  int v4; // eax
  int v5; // esi
  double (__stdcall *v6)(_DWORD, _DWORD); // eax
  double v7; // st7
  double (__stdcall *v8)(_DWORD, _DWORD); // eax
  double v9; // st7
  double (__stdcall *v10)(_DWORD, _DWORD); // eax
  double v11; // st7
  int (__thiscall *v12)(int, int, int); // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  int v17; // eax
  float v18; // [esp+68h] [ebp-38h]
  float v19; // [esp+6Ch] [ebp-34h]
  float v20[3]; // [esp+74h] [ebp-2Ch] BYREF
  float v21; // [esp+80h] [ebp-20h]
  float v22; // [esp+84h] [ebp-1Ch]
  float v23; // [esp+8Ch] [ebp-14h]
  float v24; // [esp+90h] [ebp-10h]
  float v25; // [esp+94h] [ebp-Ch]
  float v26; // [esp+98h] [ebp-8h]
  int v27; // [esp+9Ch] [ebp-4h] BYREF

  sub_100EB150(&v27, "HunterDamage");
  if ( v27 )
  {
    sub_100F3060(a1);
    (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v27 + 260) + 16))(
      v27 + 260,
      a1,
      a1 + 6,
      1.0,
      50.0,
      400.0,
      600.0,
      0.2);
    v1 = 0;
    do
    {
      v26 = COERCE_FLOAT(sub_10115FB0());
      v21 = (double)SLODWORD(v26) * 0.000030518509 * 64.0 - 32.0;
      v26 = COERCE_FLOAT(sub_10115FB0());
      v22 = (double)SLODWORD(v26) * 0.000030518509 * 64.0 - 32.0;
      v26 = COERCE_FLOAT(sub_10115FB0());
      v2 = (double)SLODWORD(v26) * 0.000030518509 * 64.0 - 32.0 + a1[2];
      v3 = a1[1] + v22;
      v20[0] = *a1 + v21;
      v20[1] = v3;
      v20[2] = v2;
      v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v5 = sub_100F2B60(64, dword_1043DF08[v4], v20);
      if ( !v5 )
        break;
      *(float *)(v5 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              2.0,
                              3.0);
      v6 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v26 = a1[6];
      v7 = v6(-1.0, 1.0);
      v8 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v23 = v7 + v26;
      v26 = a1[7];
      v9 = v8(-1.0, 1.0);
      v10 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v24 = v9 + v26;
      v26 = a1[8];
      v11 = v10(-1.0, 1.0);
      v12 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
      v25 = v11 + v26;
      *(_BYTE *)(v5 + 59) = v12(dword_10413198, 3, 8);
      v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              50.0,
              400.0);
      v14 = v23 * v13;
      v15 = v24 * v13;
      v16 = v13 * v25;
      *(float *)(v5 + 24) = v14;
      *(float *)(v5 + 28) = v15;
      *(float *)(v5 + 32) = v16;
      v26 = COERCE_FLOAT(sub_10115FB0());
      v18 = (double)SLODWORD(v26) * 0.000030518509 * 360.0;
      v26 = COERCE_FLOAT(sub_10115FB0());
      v19 = (double)SLODWORD(v26) * 0.000030518509 * 360.0;
      v17 = sub_10115FB0();
      v26 = *(float *)&v17;
      *(float *)(v5 + 36) = v18;
      *(float *)(v5 + 40) = v19;
      *(float *)(v5 + 44) = (double)v17 * 0.000030518509 * 360.0;
      ++v1;
      *(float *)(v5 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              -800.0,
                              800.0);
      *(_WORD *)(v5 + 56) = -1;
      *(_BYTE *)(v5 + 58) = -1;
      *(_WORD *)(v5 + 60) = 16191;
      *(_BYTE *)(v5 + 62) = 63;
    }
    while ( v1 < 32 );
    if ( v27 )
      sub_100F2FF0();
  }
}
