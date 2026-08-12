int __thiscall sub_10186580(_DWORD *this)
{
  int v2; // edi
  char *v3; // eax
  _DWORD *v4; // eax
  const char *v5; // eax
  int v7; // esi
  bool v8; // zf
  float v9; // eax
  float v10; // ecx
  char *v11; // eax
  int v12; // ecx
  float v13; // edx
  int v14; // eax
  int (__thiscall *v15)(int, float *, int, _DWORD); // edx
  char v16; // al
  const char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // esi
  int v23; // ebx
  float v24; // esi
  float v25; // edx
  float v26; // eax
  int v27; // ecx
  double v28; // st4
  double v29; // st6
  double v30; // st4
  double v31; // st5
  double v32; // st6
  double v33; // st7
  float v34; // esi
  float v35; // edx
  float v36; // eax
  int v37; // ecx
  double v38; // st4
  double v39; // st6
  double v40; // st4
  double v41; // st5
  double v42; // st6
  double v43; // st7
  float v44; // [esp+18h] [ebp-84Ch]
  float v45; // [esp+18h] [ebp-84Ch]
  _DWORD v46[514]; // [esp+28h] [ebp-83Ch]
  float v47; // [esp+830h] [ebp-34h]
  float v48[3]; // [esp+834h] [ebp-30h] BYREF
  _DWORD *v49; // [esp+840h] [ebp-24h]
  float v50; // [esp+844h] [ebp-20h]
  float v51; // [esp+848h] [ebp-1Ch]
  float v52; // [esp+84Ch] [ebp-18h]
  float v53; // [esp+850h] [ebp-14h] BYREF
  float v54; // [esp+854h] [ebp-10h]
  float v55; // [esp+858h] [ebp-Ch]
  int v56; // [esp+85Ch] [ebp-8h]
  int v57; // [esp+860h] [ebp-4h]

  v49 = this;
  v2 = sub_1025FB50(1);
  v57 = 0;
  if ( !v2 )
    return 0;
  v3 = (char *)this[236];
  if ( !v3 )
    v3 = (char *)String;
  v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
  v56 = (int)v4;
  if ( !v4 )
  {
    v5 = sub_100D6390(this);
    DevWarning("Template NPC Spawner (%s) doesn't have any spawn destinations!\n", v5);
    return 0;
  }
  while ( 1 )
  {
    v7 = __RTDynamicCast(
           (int)v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPCSpawnDestination `RTTI Type Descriptor',
           0);
    if ( v7 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v7 + 808) )
    {
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v8 = this[238] == 2;
      v9 = *(float *)(v7 + 584);
      v10 = *(float *)(v7 + 588);
      v53 = *(float *)(v7 + 580);
      v54 = v9;
      v55 = v10;
      if ( v8 )
        goto LABEL_25;
      v11 = sub_10073730(0);
      v12 = *((_DWORD *)v11 + 1);
      v46[512] = *(_DWORD *)v11;
      v13 = *((float *)v11 + 2);
      v14 = *(_DWORD *)v2;
      v46[513] = v12;
      v47 = v13;
      if ( (*(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(v14 + 544))(v2, &v53, 16449, 0)
        || (v15 = *(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v2 + 544),
            v48[0] = v53,
            v48[1] = v54,
            v48[2] = v47 + v55,
            (v16 = v15(v2, v48, 16449, 0)) != 0) )
      {
        v16 = 1;
      }
      if ( this[238] )
      {
        if ( v16 )
        {
          if ( (*(_DWORD *)(v2 + 256) & 0x8000) == 0 )
            goto LABEL_26;
          v17 = (const char *)this[65];
          if ( !v17 )
            v17 = String;
          DevMsg(2, "Spawner %s spawning even though seen due to notarget\n", v17);
        }
LABEL_25:
        v18 = v57;
        v46[v57] = v7;
        v57 = v18 + 1;
        goto LABEL_26;
      }
      if ( v16 )
        goto LABEL_25;
    }
LABEL_26:
    v19 = (char *)this[236];
    if ( !v19 )
      v19 = (char *)String;
    v56 = (int)sub_1012BF20(&dword_1069E3E0, v56, v19, 0, 0, 0, 0);
    if ( !v56 )
      break;
    v4 = (_DWORD *)v56;
  }
  if ( v57 < 1 )
    return 0;
  v20 = this[239];
  if ( v20 == 2 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = v46[sub_10219A30() % v57];
      if ( (*(_DWORD *)(v22 + 252) & 0x800) != 0 )
        sub_100DAE60(v22);
      if ( sub_10185FB0(this, (float *)(v22 + 580)) )
        break;
      if ( ++v21 >= 5 )
        return 0;
    }
    return v22;
  }
  else
  {
    v23 = 0;
    if ( v20 )
    {
      v52 = 0.0;
      v51 = 0.0;
      do
      {
        v34 = *(float *)&v46[v23];
        if ( (*(_DWORD *)(LODWORD(v34) + 252) & 0x800) != 0 )
          sub_100DAE60(v46[v23]);
        v35 = *(float *)(LODWORD(v34) + 584);
        v36 = *(float *)(LODWORD(v34) + 588);
        v53 = *(float *)(LODWORD(v34) + 580);
        v37 = *(_DWORD *)(v2 + 252) >> 11;
        v54 = v35;
        v55 = v36;
        if ( (v37 & 1) != 0 )
          sub_100DAE60(v2);
        v38 = v54 - *(float *)(v2 + 584);
        v39 = v38 * v38;
        v40 = v53 - *(float *)(v2 + 580);
        v41 = v39;
        v42 = v55 - *(float *)(v2 + 588);
        v45 = v40 * v40 + v41 + v42 * v42;
        v43 = off_10689708(v45);
        v50 = v43;
        v56 = v49[237];
        if ( (!v56 || (double)v56 <= v43) && v43 > v51 && sub_10185FB0(v49, &v53) )
        {
          v52 = v34;
          v51 = v50;
        }
        ++v23;
      }
      while ( v23 < v57 );
      return LODWORD(v52);
    }
    else
    {
      v51 = 0.0;
      v52 = 3.4028235e38;
      do
      {
        v24 = *(float *)&v46[v23];
        if ( (*(_DWORD *)(LODWORD(v24) + 252) & 0x800) != 0 )
          sub_100DAE60(v46[v23]);
        v25 = *(float *)(LODWORD(v24) + 584);
        v26 = *(float *)(LODWORD(v24) + 588);
        v53 = *(float *)(LODWORD(v24) + 580);
        v27 = *(_DWORD *)(v2 + 252) >> 11;
        v54 = v25;
        v55 = v26;
        if ( (v27 & 1) != 0 )
          sub_100DAE60(v2);
        v28 = v54 - *(float *)(v2 + 584);
        v29 = v28 * v28;
        v30 = v53 - *(float *)(v2 + 580);
        v31 = v29;
        v32 = v55 - *(float *)(v2 + 588);
        v44 = v30 * v30 + v31 + v32 * v32;
        v33 = off_10689708(v44);
        v50 = v33;
        v56 = v49[237];
        if ( (!v56 || (double)v56 <= v33) && v33 < v52 && sub_10185FB0(v49, &v53) )
        {
          v51 = v24;
          v52 = v50;
        }
        ++v23;
      }
      while ( v23 < v57 );
      return LODWORD(v51);
    }
  }
}
