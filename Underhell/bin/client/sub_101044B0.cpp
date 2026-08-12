float *__cdecl sub_101044B0(int a1, int a2, float *a3, float *a4, float *a5, int a6, int a7)
{
  float *v8; // eax
  float *v9; // esi
  int v10; // eax
  int v11; // ebx
  void (__thiscall **v12)(float *, _DWORD); // ecx
  double (__thiscall *v13)(int); // eax
  int v14; // ebx
  double (__thiscall *v15)(int); // eax
  double (__thiscall *v16)(int); // eax
  int v17; // eax
  bool v18; // zf
  int v19; // edi
  double v20; // st7
  double v21; // st6
  void (__thiscall *v22)(int, float *, int); // edx
  double v23; // st5
  double v24; // st7
  float v25; // [esp+20h] [ebp-24h]
  float v26; // [esp+20h] [ebp-24h]
  float v27; // [esp+20h] [ebp-24h]
  float v28[3]; // [esp+30h] [ebp-14h] BYREF
  int v29; // [esp+3Ch] [ebp-8h]
  void (__thiscall **v30)(float *, _DWORD); // [esp+40h] [ebp-4h]

  if ( dword_104363D4 < *(_DWORD *)(dword_1043627C + 48) )
  {
    v8 = (float *)sub_10034900(0x808u);
    if ( v8 && (v9 = sub_10103D30(v8)) != 0 )
    {
      v10 = __RTDynamicCast(
              a1,
              0,
              (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
              (int)&C_PhysPropClientside `RTTI Type Descriptor',
              0);
      v11 = v10;
      v29 = v10;
      if ( v10 )
      {
        sub_1000DEF0(v9, *(_DWORD *)(v10 + 112));
        v12 = (void (__thiscall **)(float *, _DWORD))*((_DWORD *)v9 + 490);
        *((_DWORD *)v9 + 496) = *(_DWORD *)(v11 + 1984) & 0xFFFFFFF7;
        v13 = *(double (__thiscall **)(int))(*(_DWORD *)(v11 + 1960) + 12);
        v14 = v11 + 1960;
        v30 = v12;
        v25 = v13(v14);
        (*v30)(v9 + 490, LODWORD(v25));
        v15 = *(double (__thiscall **)(int))(*(_DWORD *)v14 + 16);
        v30 = (void (__thiscall **)(float *, _DWORD))*((_DWORD *)v9 + 490);
        v26 = v15(v14);
        v30[1](v9 + 490, LODWORD(v26));
        v16 = *(double (__thiscall **)(int))(*(_DWORD *)v14 + 20);
        v30 = (void (__thiscall **)(float *, _DWORD))*((_DWORD *)v9 + 490);
        v27 = v16(v14);
        v30[2](v9 + 490, LODWORD(v27));
        sub_10047F80(v9, v29);
      }
      v17 = sub_100AF260((_BYTE *)(a2 + 12));
      sub_10034E80(v9, v17);
      sub_10034A30(v9, a3);
      sub_10034B10(v9, a4);
      sub_10038390(v9, a1);
      (*(void (__thiscall **)(float *, int))(*((_DWORD *)v9 + 490) + 96))(v9 + 490, 3);
      if ( !sub_101034A0((int)v9) )
        goto LABEL_21;
      *((_DWORD *)v9 + 299) = a7;
      *((_DWORD *)v9 + 34) = (int)*(float *)(a2 + 1048);
      if ( 0.0 == *(float *)(a2 + 1048) )
      {
        v18 = *((_DWORD *)v9 + 184) == 17;
        *((_BYTE *)v9 + 134) = 0;
        if ( v18 )
          sub_1000FCA0(v9, 0);
      }
      if ( *(float *)(a2 + 1036) > 0.0 )
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 764))(v9, *(float *)(a2 + 1036));
      if ( *(float *)(a2 + 1040) > 0.0 && *(float *)(a2 + 1040) <= (double)*(float *)(a2 + 1044) )
        (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)v9 + 744))(
          v9,
          *(float *)(a2 + 1040),
          *(float *)(a2 + 1044));
      if ( *(_BYTE *)(a2 + 1060) )
        DevMsg("BreakModelCreateSingle: clientside doesn't support ragdoll breakmodels.\n");
      v19 = *((_DWORD *)v9 + 46);
      if ( v19 )
      {
        v20 = RandomFloat(-0.025, 0.025);
        v21 = *a5 * v20;
        v22 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)v19 + 208);
        v23 = a5[1] * v20;
        v24 = v20 * a5[2];
        v28[0] = v21 + *a5;
        v28[1] = v23 + a5[1];
        v28[2] = v24 + a5[2];
        v22(v19, v28, a6);
        return v9;
      }
      else
      {
LABEL_21:
        (*(void (__thiscall **)(float *))(*((_DWORD *)v9 + 2) + 4))(v9 + 2);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevMsg("Warning! Client physic props overflow *max %i).\n", *(_DWORD *)(dword_1043627C + 48));
    return 0;
  }
}
