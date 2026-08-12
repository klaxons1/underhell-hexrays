void __thiscall sub_10312310(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  const char *v8; // eax
  const char *v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  float *v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  float v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+8h] [ebp-8h]

  sub_101A8A30((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3632);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropAPC `RTTI Type Descriptor',
         0);
  if ( v4 )
    *(_DWORD *)(this + 3756) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    *(_DWORD *)(this + 3756) = -1;
  v5 = *(_DWORD *)(this + 3756);
  if ( v5 != -1
    && (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1],
        v7 = v5 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] == v7)
    && *v6 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] == v7 )
      v10 = *v6;
    else
      v10 = 0;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 140))(this, v10, -1);
    v11 = *(_DWORD *)(this + 3756);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 576))(v12);
    sub_100E0D20(this, v13);
    sub_100E11A0(this, &flt_106F1CB4);
    v14 = *(_DWORD *)(this + 3756);
    if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
    *(float *)(this + 2896) = sub_10412ED0(v15);
    v16 = *(_DWORD *)(this + 3756);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v16 >> 12 )
    {
      v18 = sub_10412ED0(0);
      sub_1001FBB0((_DWORD *)this, v18);
    }
    else
    {
      v17 = sub_10412ED0(off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1]);
      sub_1001FBB0((_DWORD *)this, v17);
    }
  }
  else
  {
    v8 = *(const char **)(this + 3624);
    if ( !v8 )
      v8 = String;
    v9 = *(const char **)(this + 260);
    if ( !v9 )
      v9 = String;
    Warning("npc_apcdriver %s couldn't find his apc named %s.\n", v9, v8);
    sub_1025FAC0(this);
  }
}
