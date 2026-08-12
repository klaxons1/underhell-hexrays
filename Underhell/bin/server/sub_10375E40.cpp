void __thiscall sub_10375E40(_DWORD *this)
{
  const char *v2; // eax
  char *v3; // eax
  char *v4; // ecx
  const char *v5; // edi
  const char *v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  float *v10; // edi
  float *v11; // eax
  double v12; // st6
  double v13; // st5
  int v14; // esi
  float v15; // [esp+0h] [ebp-2Ch]
  float v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+4h] [ebp-28h]
  _BYTE v18[12]; // [esp+10h] [ebp-1Ch] BYREF
  int v19[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v20; // [esp+28h] [ebp-4h] BYREF

  sub_100422B0(this);
  dword_106E8514 = *sub_10162BE0(&v20, "weapon_striderbuster");
  dword_106E8518 = *sub_10162BE0(&v20, "npc_strider");
  dword_106E8510 = *sub_10162BE0(&v20, "npc_grenade_magna");
  dword_106E850C = *sub_10162BE0(&v20, "prop_physics");
  v2 = (const char *)*sub_10162BE0(&v20, "hunters_to_run_over");
  dword_106E8508 = (void *)v2;
  if ( !v2 )
    v2 = String;
  if ( sub_101679A0((int)v2) < 0 )
  {
    v3 = *(char **)(dword_106B31C8 + 60);
    v4 = (char *)dword_106E8508;
    v5 = (const char *)dword_106E8508;
    if ( !v3 )
      v3 = (char *)String;
    if ( !dword_106E8508 )
      v4 = (char *)String;
    sub_10167E00(v4, v3, 1);
    v6 = v5;
    if ( !v5 )
      v6 = String;
    v7 = sub_101679A0((int)v6);
    sub_101678E0(v7, 0);
    v8 = (const char *)dword_106E8508;
    if ( !dword_106E8508 )
      v8 = String;
    v9 = sub_101679A0((int)v8);
    sub_101678E0(v9, 0);
  }
  v20 = sub_100737D0(this[419]);
  v10 = (float *)sub_10073710(this[419]);
  v11 = (float *)sub_10073730(this[419]);
  v12 = v11[1] - v10[1];
  v17 = v20;
  v13 = *v11 - *v10;
  v15 = v13 * v13 + v12 * v12;
  v16 = off_10689708(v15) * 0.5;
  sub_10407E90((int)this, v16, v17);
  sub_10375B90((int)this);
  if ( 0.0 == flt_106E84A0 )
  {
    v14 = sub_101811E0("npc_hunter", -1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 96))(v14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 1416))(v14, 6);
    sub_100BCCF0((_DWORD *)v14);
    sub_100BF1B0((void *)v14, "minigunbase", (int)v19, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    flt_106E84A0 = *(float *)&v19[2] - *(float *)(v14 + 588);
    sub_100BD6D0((void *)v14, dword_10674308, (int)v18, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    sub_10421BA0(v18, v14 + 500, &unk_106E958C);
    sub_1025FAC0(v14);
  }
}
