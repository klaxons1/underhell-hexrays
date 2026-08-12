void __thiscall sub_1004F650(void *this, char *String2, int a3, int a4)
{
  int v4; // edi
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // edi
  int *v13; // edi
  char *v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edi
  float v19; // edx
  float v20; // eax
  int v21; // ecx
  double v22; // st4
  double v23; // st6
  double v24; // st4
  double v25; // st5
  double v26; // st6
  double v27; // st6
  double v28; // st4
  double v29; // rt1
  char *v30; // eax
  int v31; // eax
  float *v32; // esi
  const char *v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int *v36; // ecx
  const char *v37; // eax
  float v38; // [esp+Ch] [ebp-1Ch] BYREF
  int v39; // [esp+10h] [ebp-18h]
  float v40; // [esp+14h] [ebp-14h]
  float v41; // [esp+18h] [ebp-10h]
  float v42; // [esp+1Ch] [ebp-Ch]
  float *v43; // [esp+20h] [ebp-8h]
  int v44; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF
  float v46; // [esp+38h] [ebp+10h]

  v4 = (int)this;
  v44 = (int)this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CAI_AssaultBehavior::SetParameters", 0, "NPCs", 0, 4);
  sub_1004CBB0((void **)v4);
  v5 = String2;
  if ( !String2 )
    v5 = (char *)String;
  v6 = sub_1012BF20(0, v5, 0, 0, 0, 0);
  v7 = __RTDynamicCast(
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CRallyPoint `RTTI Type Descriptor',
         0);
  v8 = 0;
  v9 = -1;
  v43 = 0;
  if ( !a4 )
  {
    if ( !v7 )
      goto LABEL_43;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v7 + 848);
      if ( v16 == -1
        || off_1061BE18[4 * (*(_DWORD *)(v7 + 848) & 0xFFF) + 2] != v16 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(v7 + 848) & 0xFFF) + 1] )
      {
        v17 = *(_DWORD *)(v7 + 812);
        if ( v17 <= v9 )
        {
          if ( v17 != v9 )
            goto LABEL_39;
          v18 = *(_DWORD *)(v4 + 4);
          if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
            sub_100DAE60(v18);
          v19 = *(float *)(v18 + 584);
          v20 = *(float *)(v18 + 588);
          v40 = *(float *)(v18 + 580);
          v21 = *(_DWORD *)(v7 + 252) >> 11;
          v41 = v19;
          v42 = v20;
          if ( (v21 & 1) != 0 )
            sub_100DAE60(v7);
          v22 = *(float *)(v7 + 584) - v41;
          v23 = v22 * v22;
          v24 = *(float *)(v7 + 580) - v40;
          v25 = v23;
          v26 = *(float *)(v7 + 588) - v42;
          v46 = v24 * v24 + v25 + v26 * v26;
          if ( ((_DWORD)v43[63] & 0x800) != 0 )
            sub_100DAE60(v43);
          v27 = v43[146] - v41;
          v4 = v44;
          v28 = v43[145] - v40;
          v29 = v43[147] - v42;
          if ( v28 * v28 + v27 * v27 + v29 * v29 <= v46 )
            goto LABEL_39;
        }
        else
        {
          v9 = *(_DWORD *)(v7 + 812);
        }
        v43 = (float *)v7;
      }
LABEL_39:
      v30 = String2;
      if ( !String2 )
        v30 = (char *)String;
      v31 = sub_1012BF20(v7, v30, 0, 0, 0, 0);
      v7 = __RTDynamicCast(
             v31,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRallyPoint `RTTI Type Descriptor',
             0);
      if ( !v7 )
        goto LABEL_42;
    }
  }
  if ( a4 != 1 )
  {
    DevMsg("ERROR: INVALID RALLY POINT SELECTION METHOD. Assault will not function.\n");
LABEL_43:
    v33 = *(const char **)(*(_DWORD *)(v4 + 4) + 260);
    if ( !v33 )
      v33 = String;
    DevMsg("%s Didn't find a best rally point!\n", v33);
    goto LABEL_53;
  }
  *(float *)&v10 = 0.0;
  v38 = 0.0;
  v39 = 0;
  v40 = 0.0;
  v41 = 0.0;
  v42 = 0.0;
  if ( v7 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v7 + 848);
      if ( v11 == -1
        || off_1061BE18[4 * (*(_DWORD *)(v7 + 848) & 0xFFF) + 2] != v11 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(v7 + 848) & 0xFFF) + 1] )
      {
        v12 = v10;
        if ( v10 + 1 > v8 )
        {
          sub_102ABFC0(v10 - v8 + 1);
          *(float *)&v10 = v41;
        }
        ++v10;
        v41 = *(float *)&v10;
        v42 = v38;
        if ( v10 - v12 - 1 > 0 )
          memcpy((void *)(LODWORD(v38) + 4 * v12 + 4), (const void *)(LODWORD(v38) + 4 * v12), 4 * (v10 - v12 - 1));
        v13 = (int *)(LODWORD(v38) + 4 * v12);
        if ( v13 )
          *v13 = v7;
      }
      v14 = String2;
      v4 = v44;
      if ( !String2 )
        v14 = (char *)String;
      v15 = sub_1012BF20(v7, v14, 0, 0, 0, 0);
      v7 = __RTDynamicCast(
             v15,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRallyPoint `RTTI Type Descriptor',
             0);
      if ( !v7 )
        break;
      v8 = v39;
    }
    if ( v10 > 0 )
      v43 = *(float **)(LODWORD(v38)
                      + 4
                      * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                          dword_106B31E4,
                          0,
                          v10 - 1));
  }
  sub_102375F0(&v38);
LABEL_42:
  v32 = v43;
  if ( !v43 )
    goto LABEL_43;
  sub_1004C2F0(v43, *(_DWORD *)(v4 + 4));
  v34 = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v32 + 8))(v32);
  v35 = v34;
  *(_DWORD *)(v4 + 24) = v34;
  if ( v34 != -1 && (v36 = &off_1061BE18[4 * (v34 & 0xFFF) + 1], v36[1] == v35 >> 12) && *v36 )
  {
    *(_DWORD *)(v4 + 28) = a3;
    sub_1004EA50(v4, (int)&savedregs, (float *)v4);
  }
  else
  {
    v37 = String2;
    if ( !String2 )
      v37 = String;
    DevMsg("**ERROR: Can't find a rally point named '%s'\n", v37);
    *(_DWORD *)(v4 + 28) = 0;
    sub_1004C190((int *)v4, (int)"Can't find rally point");
  }
LABEL_53:
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
