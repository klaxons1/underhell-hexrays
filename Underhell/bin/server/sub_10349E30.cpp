int __thiscall sub_10349E30(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  _DWORD *v23; // eax
  int v24; // ebx

  if ( !byte_106E6700 )
  {
    v2 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v3 = *(_DWORD **)(this + 1100);
    if ( v3 && *v3 )
      v4 = *(_DWORD *)(this + 1100);
    else
      v4 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    v5 = sub_100BD5F0(v4, "body_accel");
    v6 = dword_10700AC8;
    dword_106E6704 = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v7 = *(_DWORD **)(this + 1100);
    if ( v7 && *v7 )
      v8 = *(_DWORD *)(this + 1100);
    else
      v8 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    v9 = sub_100BD5F0(v8, "body_sway");
    v10 = dword_10700AC8;
    dword_106E6708 = v9;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v11 = *(_DWORD **)(this + 1100);
    if ( v11 && *v11 )
      v12 = *(_DWORD *)(this + 1100);
    else
      v12 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
    v13 = sub_100BD5F0(v12, "cargo_body_accel");
    v14 = dword_10700AC8;
    dword_106E670C = v13;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v15 = *(_DWORD **)(this + 1100);
    if ( v15 && *v15 )
      v16 = *(_DWORD *)(this + 1100);
    else
      v16 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
    v17 = sub_100BD5F0(v16, "cargo_body_sway");
    v18 = dword_10700AC8;
    dword_106E6710 = v17;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v19 = *(_DWORD **)(this + 1100);
    if ( v19 && *v19 )
      v20 = *(_DWORD *)(this + 1100);
    else
      v20 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
    v21 = sub_100BD5F0(v20, "weapon_pitch");
    v22 = dword_10700AC8;
    dword_106E6714 = v21;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v23 = *(_DWORD **)(this + 1100);
    if ( v23 && *v23 )
      v24 = *(_DWORD *)(this + 1100);
    else
      v24 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 104))(v22);
    dword_106E6718 = sub_100BD5F0(v24, "weapon_yaw");
    byte_106E6700 = 1;
  }
  return sub_100249C0((_DWORD *)this);
}
