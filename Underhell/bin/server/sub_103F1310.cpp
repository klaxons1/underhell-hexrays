void __thiscall sub_103F1310(int this, char a2)
{
  int v2; // esi
  char v3; // bl
  int v4; // eax
  double v5; // st7
  int *v6; // ecx
  _DWORD *v7; // edi
  const char *v8; // eax
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  double v17; // st5
  double v18; // st3
  double v19; // st6
  double v20; // st3
  float *v21; // eax
  float v22; // ecx
  float v23; // edx
  float v24; // eax
  int v25; // edi
  int v26; // esi
  _DWORD *v27; // eax
  int *v28; // ecx
  int v29; // edi
  int *v30; // ecx
  int v31; // eax
  int v32; // edi
  int *v33; // esi
  int v34; // [esp+0h] [ebp-68h]
  _DWORD v35[8]; // [esp+14h] [ebp-54h] BYREF
  float v36[3]; // [esp+34h] [ebp-34h] BYREF
  float v37; // [esp+40h] [ebp-28h]
  float v38; // [esp+44h] [ebp-24h]
  float v39; // [esp+48h] [ebp-20h]
  int v40; // [esp+4Ch] [ebp-1Ch] BYREF
  int v41; // [esp+50h] [ebp-18h]
  int v42; // [esp+54h] [ebp-14h] BYREF
  int v43; // [esp+58h] [ebp-10h] BYREF
  int v44; // [esp+5Ch] [ebp-Ch] BYREF
  int v45; // [esp+60h] [ebp-8h]
  char v46; // [esp+67h] [ebp-1h]
  int v47; // [esp+70h] [ebp+8h]

  v2 = this;
  v3 = 0;
  v45 = this;
  v46 = 0;
  if ( !*(_BYTE *)(this + 2100) || !a2 && *(float *)(this + 2104) > (double)*(float *)(dword_106B31C8 + 12) )
    return;
  v5 = *(float *)(dword_106B31C8 + 12) + 1.5;
  v41 = *(_DWORD *)(this + 2124);
  v4 = v41;
  *(float *)(this + 2104) = v5;
  if ( v4 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 2124);
    }
    *(_DWORD *)(v2 + 2124) = 0;
  }
  v7 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, 0);
  v47 = (int)v7;
  sub_10162C20(&v44, (char)"info_radar_target");
  sub_10162C20(&v43, (char)"npc_strider");
  sub_10162C20(&v42, (char)"npc_hunter");
  if ( (dword_106EEB1C & 0x1000) != 0 )
  {
    v8 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v8 = *(const char **)(dword_106EEB24 + 36);
    if ( !v8 )
      v8 = String;
  }
  sub_10162C20(&v40, (char)v8);
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v37 = v10;
  v38 = v11;
  v39 = v12;
  if ( v7 )
  {
    while ( 1 )
    {
      v13 = v7[23];
      v14 = -1;
      if ( v13 == v44 )
        break;
      if ( !*(_BYTE *)(v2 + 2101) )
        goto LABEL_52;
      if ( v13 == v43 )
      {
        v27 = (_DWORD *)__RTDynamicCast(
                          (int)v7,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                          (int)&CNPC_Strider `RTTI Type Descriptor',
                          0);
        if ( !v27 || !sub_103B0F10(v27) )
          v14 = 5;
      }
      if ( v7[23] != v42 )
        goto LABEL_29;
      v14 = 4;
LABEL_30:
      v21 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 576))(v7);
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v36[0] = v22;
      v36[1] = v23;
      v34 = *(_DWORD *)(v2 + 2124);
      v36[2] = v24;
      sub_103EF8F0((char *)(v2 + 2128), v34, v36);
      v25 = *(_DWORD *)(v2 + 2124);
      v26 = v45 + 2416;
      if ( *(_DWORD *)(v45 + 2416 + 4 * v25) != v14 )
      {
        if ( *(_BYTE *)(v45 + 84) )
        {
          *(_BYTE *)(v45 + 88) |= 1u;
        }
        else
        {
          v28 = *(int **)(v45 + 24);
          if ( v28 )
            sub_100194B0(v28, 4 * v25 + 2416);
        }
        *(_DWORD *)(v26 + 4 * v25) = v14;
      }
      v2 = v45;
      v29 = *(_DWORD *)(v45 + 2124) + 1;
      if ( *(_DWORD *)(v45 + 2124) != v29 )
      {
        if ( *(_BYTE *)(v45 + 84) )
        {
          *(_BYTE *)(v45 + 88) |= 1u;
        }
        else
        {
          v30 = *(int **)(v45 + 24);
          if ( v30 )
            sub_100194B0(v30, 2124);
        }
        *(_DWORD *)(v2 + 2124) = v29;
      }
      if ( *(_DWORD *)(v2 + 2124) == 24 )
      {
LABEL_53:
        v3 = v46;
        goto LABEL_54;
      }
      v7 = (_DWORD *)v47;
LABEL_52:
      v47 = sub_1012BC10(&dword_1069E3E0, (int)v7);
      if ( !v47 )
        goto LABEL_53;
      v7 = (_DWORD *)v47;
    }
    v15 = __RTDynamicCast(
            (int)v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CRadarTarget `RTTI Type Descriptor',
            0);
    v16 = v15;
    if ( !v15 || *(_BYTE *)(v15 + 800) )
      goto LABEL_51;
    if ( *(float *)(v15 + 812) >= 0.0 )
    {
      if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
        sub_100DAE60(v15);
      v17 = v39 - *(float *)(v16 + 588);
      v18 = v38 - *(float *)(v16 + 584);
      v19 = v18 * v18;
      v20 = v37 - *(float *)(v16 + 580);
      if ( *(float *)(v16 + 812) * *(float *)(v16 + 812) < v20 * v20 + v19 + v17 * v17 )
      {
LABEL_51:
        v2 = v45;
        goto LABEL_52;
      }
    }
    v14 = *(_DWORD *)(v16 + 804);
    if ( v14 == 2 )
      v46 = 1;
    if ( *(_DWORD *)(v16 + 808) == 1 )
      *(float *)(v16 + 812) = -1.0;
    v2 = v45;
LABEL_29:
    if ( v14 == -1 )
      goto LABEL_52;
    goto LABEL_30;
  }
LABEL_54:
  if ( *(_DWORD *)(v2 + 2124) > v41 )
  {
    if ( !v3 )
      sub_1023C380((_DWORD *)v2, (int)"JNK_Radar_Ping_Friendly", 0.0, 0);
    v31 = sub_102F3640();
    v32 = v31;
    if ( !v3 )
    {
      if ( v31 && (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 1092))(v31) )
        (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v32 + 2344))(
          v32,
          "TLK_PASSENGER_NEW_RADAR_CONTACT",
          0,
          0,
          0,
          0);
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  if ( v3 )
LABEL_62:
    *(float *)(v2 + 2104) = *(float *)(dword_106B31C8 + 12) + 0.5;
LABEL_63:
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v33 = (int *)sub_10261B20();
  else
    v33 = 0;
  sub_10219BB0(v35);
  v35[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v35, v33);
  sub_10154B40((int)v35, "UpdateJalopyRadar");
  sub_10154BB0(0);
  sub_10154B90();
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
}
