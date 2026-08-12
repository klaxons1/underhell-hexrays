void __thiscall sub_103B26D0(volatile signed __int32 *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int v17[3]; // [esp+8h] [ebp-24h] BYREF
  int v18[3]; // [esp+14h] [ebp-18h] BYREF
  int v19[3]; // [esp+20h] [ebp-Ch] BYREF

  sub_100422B0(this);
  v2 = sub_100BEAD0((int)this, "combine_strider.neck_bone");
  *((_DWORD *)this + 961) = v2;
  if ( v2 == -1 )
    DevMsg("Couldn't find npc_strider bone %s, which is used as target for others\n", "combine_strider.neck_bone");
  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240((void *)this) )
    sub_100BD750(this);
  v4 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v4 && *v4 )
    v5 = *((_DWORD *)this + 275);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  v6 = sub_100BD5F0(v5, "body_height");
  v7 = dword_10700AC8;
  dword_106EAD9C = v6;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240((void *)this) )
    sub_100BD750(this);
  v8 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v8 && *v8 )
    v9 = *((_DWORD *)this + 275);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  v10 = sub_100BD5F0(v9, "yaw");
  v11 = dword_10700AC8;
  dword_106EAD58 = v10;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240((void *)this) )
    sub_100BD750(this);
  v12 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v12 && *v12 )
    v13 = *((_DWORD *)this + 275);
  else
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  dword_106EAD54 = sub_100BD5F0(v13, "pitch");
  dword_106EAD50 = sub_100BEF30((int)this, "BigGun");
  if ( 0.0 == flt_106EAD4C )
  {
    v14 = sub_101811E0("npc_strider", -1);
    *(_BYTE *)(v14 + 3848) = 1;
    sub_10260750((char *)v14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 1416))(v14, 25);
    sub_100BCCF0((_DWORD *)v14);
    sub_100BF1B0((void *)v14, "biggun", (int)v19, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    v15 = *(_DWORD *)(v14 + 252) >> 11;
    v19[0] = *(int *)(v14 + 580);
    if ( (v15 & 1) != 0 )
      sub_100DAE60(v14);
    v16 = *(_DWORD *)(v14 + 252) >> 11;
    v19[1] = *(int *)(v14 + 584);
    if ( (v16 & 1) != 0 )
      sub_100DAE60(v14);
    flt_106EAD4C = *(float *)&v19[2] - *(float *)(v14 + 588);
    sub_100BF1B0((void *)v14, "minigunbase", (int)v17, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    flt_106EAD48 = *(float *)&v17[2] - *(float *)(v14 + 588);
    sub_100BF1B0((void *)v14, "biggun", (int)v18, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    sub_10421BA0(v18, v14 + 500, &flt_106EB728);
    sub_100BF1B0((void *)v14, "minigun", (int)v18, 0, 0, 0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    sub_10421BA0(v18, v14 + 500, &flt_106EB734);
    sub_1025FAC0(v14);
  }
}
