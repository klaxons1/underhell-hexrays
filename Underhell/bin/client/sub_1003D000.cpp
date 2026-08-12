int __thiscall sub_1003D000(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD v9[3]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-10h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  *(_DWORD *)(this + 4) = &IClientRenderable::`vftable';
  *(_DWORD *)(this + 8) = &IClientNetworkable::`vftable';
  *(_DWORD *)(this + 12) = &IClientThinkable::`vftable';
  *(_DWORD *)this = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 4) = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 8) = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 12) = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  unknown_libname_2(this + 148);
  *(_DWORD *)(this + 164) = -1;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  *(_DWORD *)(this + 204) = 0;
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 324) = -1;
  *(_DWORD *)(this + 328) = -1;
  *(_DWORD *)(this + 332) = -1;
  *(_DWORD *)(this + 336) = -1;
  *(_DWORD *)(this + 340) = -1;
  *(_DWORD *)(this + 344) = -1;
  sub_1008FA70(this + 352);
  *(_DWORD *)(this + 352) = &C_BaseEntity::NetworkVar_m_Collision::`vftable';
  sub_100EA8D0(this + 444);
  *(_DWORD *)(this + 444) = &C_BaseEntity::NetworkVar_m_Particles::`vftable';
  *(_DWORD *)(this + 484) = -1;
  *(_DWORD *)(this + 488) = -1;
  v2 = this + 560;
  *(_DWORD *)(this + 560) = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)(this + 568) = 0;
  *(_DWORD *)(this + 572) = 0;
  *(_DWORD *)(this + 576) = 0x100000;
  sub_10038BE0((unsigned __int16 *)(this + 568), 4);
  *(float *)(this + 596) = 0.0;
  *(float *)(this + 584) = 0.0;
  *(_DWORD *)(this + 600) = "C_BaseEntity::m_iv_vecOrigin";
  *(_DWORD *)(this + 564) = 0;
  *(_WORD *)(this + 588) = 1;
  *(_DWORD *)(this + 580) = 0;
  *(_DWORD *)(this + 592) = 0;
  *(_DWORD *)(this + 560) = &CInterpolatedVar<Vector>::`vftable';
  sub_1010EC10(1);
  v3 = this + 616;
  *(_DWORD *)(this + 616) = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *(_DWORD *)(this + 624) = 0;
  *(_DWORD *)(this + 628) = 0;
  *(_DWORD *)(this + 632) = 0x100000;
  sub_10038BE0((unsigned __int16 *)(this + 624), 4);
  *(float *)(this + 652) = 0.0;
  *(float *)(this + 640) = 0.0;
  *(_DWORD *)(this + 656) = "C_BaseEntity::m_iv_angRotation";
  *(_DWORD *)(this + 620) = 0;
  *(_WORD *)(this + 644) = 1;
  *(_DWORD *)(this + 636) = 0;
  *(_DWORD *)(this + 648) = 0;
  *(_DWORD *)(this + 616) = &CInterpolatedVar<QAngle>::`vftable';
  sub_1010EC10(1);
  *(_DWORD *)(this + 1120) = -1;
  *(_DWORD *)(this + 1124) = -1;
  *(_DWORD *)(this + 1128) = -1;
  *(_DWORD *)(this + 1176) = 0;
  *(_DWORD *)(this + 1180) = 0;
  *(_DWORD *)(this + 1184) = 0;
  *(_DWORD *)(this + 1188) = 0;
  v4 = 0;
  *(_BYTE *)(this + 1167) = 0;
  if ( *(int *)(this + 32) <= 0 )
    goto LABEL_8;
  v5 = (_DWORD *)(*(_DWORD *)(this + 20) + 8);
  while ( *v5 != v2 )
  {
    ++v4;
    v5 += 3;
    if ( v4 >= *(_DWORD *)(this + 32) )
      goto LABEL_8;
  }
  v11 = v4;
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 28))(this + 560) & 8) != 0 )
  {
    sub_1003BDA0((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 20) + 12 * v11 + 4), 1);
LABEL_8:
    v10[1] = this + 548;
    v10[2] = this + 560;
    v10[0] = 65538;
    sub_1003BE10((int *)(this + 20), 0, v10);
    ++*(_DWORD *)(this + 40);
  }
  v6 = 0;
  if ( *(int *)(this + 32) <= 0 )
  {
LABEL_16:
    v9[1] = this + 604;
    v9[2] = this + 616;
    v9[0] = 65538;
    sub_1003BE10((int *)(this + 20), 0, v9);
    ++*(_DWORD *)(this + 40);
    goto LABEL_17;
  }
  v7 = (_DWORD *)(*(_DWORD *)(this + 20) + 8);
  while ( *v7 != v3 )
  {
    ++v6;
    v7 += 3;
    if ( v6 >= *(_DWORD *)(this + 32) )
      goto LABEL_16;
  }
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(this + 616) & 8) != 0 )
  {
    sub_1003BDA0((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 20) + 12 * v6 + 4), 1);
    goto LABEL_16;
  }
LABEL_17:
  *(_DWORD *)(this + 1116) = -1;
  *(_WORD *)(this + 86) = 0;
  *(_BYTE *)(this + 318) = 0;
  *(_BYTE *)(this + 85) = -1;
  *(_BYTE *)(this + 188) = 0;
  *(_BYTE *)(this + 323) = 0;
  if ( *(_BYTE *)(this + 1109) )
    *(_BYTE *)(this + 1109) = 0;
  if ( *(_BYTE *)(this + 1110) )
    *(_BYTE *)(this + 1110) = 0;
  *(_BYTE *)(this + 1113) = 0;
  *(float *)(this + 304) = 0.0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 192) = -1;
  *(_BYTE *)(this + 120) = 1;
  *(_DWORD *)(this + 152) = 0;
  sub_1003B170(this);
  *(_DWORD *)(this + 1172) = -1;
  *(_WORD *)(this + 168) = 1;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 176) = -1;
  *(_BYTE *)(this + 180) = 1;
  unknown_libname_5(this);
  *(_DWORD *)(this + 1168) = ((int (__thiscall *)(int (***)(), const char *))(*off_103E4FC0)[2])(
                               off_103E4FC0,
                               "ge_entglow");
  return this;
}
