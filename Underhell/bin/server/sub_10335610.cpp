char __thiscall sub_10335610(int this)
{
  int v2; // eax
  int v3; // eax
  float *v4; // edi
  int v5; // ecx
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st6
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v20; // st7
  bool v21; // zf
  float *v22; // eax
  int (__thiscall *v23)(float *, float *, int, _DWORD); // edx
  char v24; // al
  char v25; // bl
  long double v26; // st7
  float *v27; // eax
  double v28; // st5
  double v29; // st3
  double v30; // st6
  double v31; // st3
  double v32; // st4
  double v33; // st6
  double v34; // st3
  double v35; // st5
  double v36; // st3
  double v37; // st4
  double v38; // st5
  float *v39; // eax
  double v40; // st7
  double v41; // st6
  bool v42; // bl
  int v43; // edi
  _DWORD *v44; // edi
  double v45; // st7
  int v46; // ebx
  char v47; // al
  float v48; // [esp+20h] [ebp-24h] BYREF
  float v49; // [esp+24h] [ebp-20h]
  float v50; // [esp+28h] [ebp-1Ch]
  int v51; // [esp+2Ch] [ebp-18h]
  float v52; // [esp+30h] [ebp-14h]
  float v53; // [esp+34h] [ebp-10h]
  float v54; // [esp+38h] [ebp-Ch]
  float v55; // [esp+3Ch] [ebp-8h]
  char v56; // [esp+43h] [ebp-1h]

  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    return 0;
  v2 = sub_10050FC0((_DWORD *)(this + 4508));
  if ( !v2
    || *(char **)(v2 + 92) != "info_target_command_point" && !sub_100D6240((_DWORD *)v2, "info_target_command_point") )
  {
    return 0;
  }
  if ( !sub_100296A0((_DWORD *)this) )
    return 0;
  v3 = sub_10261B20();
  v4 = (float *)v3;
  v5 = *(_DWORD *)(v3 + 252) >> 11;
  v51 = v3;
  if ( (v5 & 1) != 0 )
    sub_100DAE60(v3);
  v6 = v4[146] - *(float *)(this + 5760);
  v7 = v6 * v6;
  v8 = v4[145] - *(float *)(this + 5756);
  v9 = v7;
  v10 = v4[147] - *(float *)(this + 5764);
  v11 = v8 * v8 + v9 + v10 * v10;
  v55 = v11;
  v12 = *(float *)(dword_106E62A4 + 44) * 12.0;
  v53 = v12;
  v13 = v12 * 10.0 * (v12 * 10.0);
  v52 = v13;
  if ( v13 > v11 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v14 = *(float *)(this + 584) - *(float *)(this + 2460);
    v15 = v14 * v14;
    v16 = *(float *)(this + 580) - *(float *)(this + 2456);
    v17 = v15;
    v18 = *(float *)(this + 588) - *(float *)(this + 2464);
    if ( v16 * v16 + v17 + v18 * v18 > 14400.0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1536))(this) )
      {
        *(float *)(this + 5752) = *(float *)(dword_106E625C + 44) + *(float *)(dword_106B31C8 + 12);
        if ( *(_DWORD *)(dword_106E637C + 48) )
          DevMsg("Waiting for arrival before initiating autosummon logic\n");
        return 0;
      }
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5752) <= -0.001 )
    return 0;
  v20 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5752);
  v56 = 0;
  if ( *(float *)(dword_106E625C + 44) + *(float *)(dword_106E625C + 44) < v20 )
  {
    v21 = *(_DWORD *)(dword_106E637C + 48) == 0;
    v56 = 1;
    if ( !v21 )
      DevMsg("Auto summoning squad: long time (%f)\n", v20 + *(float *)(dword_106E625C + 44));
  }
  if ( v55 <= 144.0 )
  {
    if ( !v56 )
      return v56;
    goto LABEL_39;
  }
  v22 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 532))(v4);
  v48 = *(float *)(this + 2456) + *v22;
  v49 = v22[1] + *(float *)(this + 2460);
  v23 = *(int (__thiscall **)(float *, float *, int, _DWORD))(*(_DWORD *)v4 + 544);
  v50 = v22[2] + *(float *)(this + 2464);
  v24 = v23(v4, &v48, 16449, 0);
  v25 = v24;
  if ( v56 )
    goto LABEL_39;
  if ( v24 )
  {
    v26 = v55;
    if ( v55 <= 576.0 )
      goto LABEL_29;
    v54 = *(float *)(dword_106E62EC + 44) * 12.0;
    v27 = (float *)sub_10019640(v4);
    v28 = v27[2] - *(float *)(this + 2464);
    v29 = v27[1] - *(float *)(this + 2460);
    v30 = v29 * v29;
    v31 = *v27 - *(float *)(this + 2456);
    v32 = v30;
    v33 = v54 * v54;
    if ( v33 > v31 * v31 + v32 + v28 * v28 )
    {
      v34 = *(float *)(this + 5760) - *(float *)(this + 2460);
      v35 = v34 * v34;
      v36 = *(float *)(this + 5756) - *(float *)(this + 2456);
      v37 = v35;
      v38 = *(float *)(this + 5764) - *(float *)(this + 2464);
      if ( v36 * v36 + v37 + v38 * v38 > v33 )
      {
        v21 = *(_DWORD *)(dword_106E637C + 48) == 0;
        v56 = 1;
        if ( !v21 )
        {
          v39 = (float *)sub_10019640((_DWORD *)this);
          v48 = *v39 - *(float *)(this + 2456);
          v49 = v39[1] - *(float *)(this + 2460);
          v40 = v39[2] - *(float *)(this + 2464);
          v50 = v40;
          sub_100D7A40(&v48);
          DevMsg("Auto summoning squad: player close to command point (%f)\n", v40);
        }
        goto LABEL_39;
      }
    }
  }
  v26 = v55;
LABEL_29:
  v41 = v53;
  if ( (v41 + v41) * (v41 + v41) >= v26 )
  {
    if ( v41 * v41 >= v26 || v25 )
      return v56;
    v21 = *(_DWORD *)(dword_106E637C + 48) == 0;
    v56 = 1;
    if ( !v21 )
      DevMsg("Auto summoning squad: player far from anchor (%f)\n", (double)sqrt(v26));
  }
  else
  {
    v56 = 1;
    v42 = v52 > v26;
    if ( *(_DWORD *)(dword_106E637C + 48) )
      DevMsg("Auto summoning squad: player very far from anchor (%f)\n", (double)sqrt(v26));
    if ( !v42 )
      return v56;
  }
LABEL_39:
  v43 = 0;
  v54 = 0.0;
  if ( sub_1016BFB0(&dword_10690DF8) <= 0 )
  {
LABEL_52:
    if ( !v56 )
      goto LABEL_53;
    return v56;
  }
  while ( 1 )
  {
    v44 = *(_DWORD **)(sub_1002A680(&dword_10690DF8) + 4 * v43);
    v45 = *(float *)(dword_106E6334 + 44);
    v52 = *(float *)(dword_106E6334 + 44);
    if ( sub_100296A0(v44) )
      goto LABEL_51;
    if ( !(*(int (__thiscall **)(_DWORD *))(*v44 + 368))(v44) )
      goto LABEL_51;
    v46 = (*(int (__thiscall **)(_DWORD *))(*v44 + 368))(v44);
    if ( !(unsigned __int8)sub_103945A0(v44) )
    {
      LODWORD(v55) = dword_106B31C8 + 12;
      sub_10021820(v44);
      if ( *(float *)LODWORD(v55) - v45 > v52 )
        goto LABEL_51;
    }
    if ( v46 == v51 )
    {
      v47 = (*(int (__thiscall **)(_DWORD *, int))(*v44 + 1488))(v44, v51);
    }
    else
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v46 + 284))(v46)
        || *(_DWORD *)(sub_100D7680(v46) + 2796) != *(_DWORD *)(this + 2796)
        && (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 220))(v46) != 3 )
      {
        goto LABEL_51;
      }
      v47 = (*(int (__thiscall **)(_DWORD *, int))(*v44 + 1488))(v44, this);
    }
    if ( v47 )
      break;
LABEL_51:
    v43 = ++LODWORD(v54);
    if ( v43 >= sub_1016BFB0(&dword_10690DF8) )
      goto LABEL_52;
  }
  v56 = 0;
LABEL_53:
  if ( *(_DWORD *)(dword_106E637C + 48) )
  {
    DevMsg("Auto summon REVOKED: Combat recent \n");
    return v56;
  }
  return v56;
}
