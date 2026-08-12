int __thiscall sub_103518A0(int this)
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
  int v25; // eax
  int v26; // edi
  _DWORD *v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // eax
  int v32; // ebx

  if ( !byte_106E68B4 )
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
    v5 = sub_100BD5F0(v4, "flex_horz");
    v6 = dword_10700AC8;
    dword_106E68B8 = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v7 = *(_DWORD **)(this + 1100);
    if ( v7 && *v7 )
      v8 = *(_DWORD *)(this + 1100);
    else
      v8 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    v9 = sub_100BD5F0(v8, "flex_vert");
    v10 = dword_10700AC8;
    dword_106E68BC = v9;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v11 = *(_DWORD **)(this + 1100);
    if ( v11 && *v11 )
      v12 = *(_DWORD *)(this + 1100);
    else
      v12 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
    v13 = sub_100BD5F0(v12, "pitch");
    v14 = dword_10700AC8;
    dword_106E68C0 = v13;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v15 = *(_DWORD **)(this + 1100);
    if ( v15 && *v15 )
      v16 = *(_DWORD *)(this + 1100);
    else
      v16 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
    v17 = sub_100BD5F0(v16, "yaw");
    v18 = dword_10700AC8;
    dword_106E68C4 = v17;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v19 = *(_DWORD **)(this + 1100);
    if ( v19 && *v19 )
      v20 = *(_DWORD *)(this + 1100);
    else
      v20 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
    v21 = sub_100BD5F0(v20, "fin_accel");
    v22 = dword_10700AC8;
    dword_106E68C8 = v21;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v23 = *(_DWORD **)(this + 1100);
    if ( v23 && *v23 )
      v24 = *(_DWORD *)(this + 1100);
    else
      v24 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 104))(v22);
    v25 = sub_100BD5F0(v24, "fin_sway");
    v26 = dword_10700AC8;
    dword_106E68CC = v25;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v27 = *(_DWORD **)(this + 1100);
    if ( v27 && *v27 )
      v28 = *(_DWORD *)(this + 1100);
    else
      v28 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
    v29 = sub_100BD5F0(v28, "weapon_pitch");
    v30 = dword_10700AC8;
    dword_106E68D0 = v29;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v31 = *(_DWORD **)(this + 1100);
    if ( v31 && *v31 )
      v32 = *(_DWORD *)(this + 1100);
    else
      v32 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 104))(v30);
    dword_106E68D4 = sub_100BD5F0(v32, "weapon_yaw");
    byte_106E68B4 = 1;
  }
  return sub_100249C0((_DWORD *)this);
}
