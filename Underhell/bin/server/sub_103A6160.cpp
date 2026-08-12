void __thiscall sub_103A6160(int this)
{
  void (__stdcall *v2)(const char *); // edx
  int *v3; // edi
  int v4; // ebx
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // ebx
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // ebx

  if ( *(float *)(this + 3952) <= 0.0 )
  {
    DevMsg("CNPC_CScanner::Spawn: Invalid spotlight length <= 0, setting to 500\n");
    *(float *)(this + 3952) = 500.0;
  }
  if ( *(float *)(this + 3956) <= 0.0 )
  {
    DevMsg("CNPC_CScanner::Spawn: Invalid spotlight width <= 0, setting to 100\n");
    *(float *)(this + 3956) = 100.0;
  }
  if ( *(float *)(this + 3956) > 102.3 )
  {
    DevMsg(
      "CNPC_CScanner::Spawn: Invalid spotlight width %.1f (max %.1f).\n",
      *(float *)(this + 3956),
      102.3000030517578);
    *(float *)(this + 3956) = 102.3;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(void (__stdcall **)(const char *))(*(_DWORD *)this + 104);
  if ( *(_BYTE *)(this + 3968) )
    v2("models/shield_scanner.mdl");
  else
    v2("models/combine_scanner.mdl");
  v3 = (int *)(this + 220);
  v4 = (int)*(float *)(dword_106EAACC + 44);
  if ( *(_DWORD *)(this + 220) != v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v3 = v4;
  }
  if ( *(_DWORD *)(this + 216) != *v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = *v3;
  }
  *(float *)(this + 3856) = flt_106F1CA8;
  *(float *)(this + 3860) = flt_106F1CAC;
  *(float *)(this + 3864) = flt_106F1CB0;
  *(float *)(this + 3868) = 0.0;
  *(float *)(this + 3872) = *(float *)(dword_106B31C8 + 12) + 10.0;
  *(float *)(this + 3876) = *(float *)(dword_106B31C8 + 12) + 15.0;
  *(float *)(this + 3884) = 0.0;
  *(float *)(this + 3892) = flt_106F1CA8;
  *(float *)(this + 3896) = flt_106F1CAC;
  *(float *)(this + 3900) = flt_106F1CB0;
  *(float *)(this + 3904) = flt_106F1CA8;
  *(float *)(this + 3908) = flt_106F1CAC;
  *(float *)(this + 3912) = flt_106F1CB0;
  *(_DWORD *)(this + 3916) = -1;
  *(_DWORD *)(this + 3920) = -1;
  sub_10422220(this + 728, this + 3924);
  *(float *)(this + 3936) = flt_106F1CA8;
  v5 = 0;
  *(float *)(this + 3940) = flt_106F1CAC;
  *(float *)(this + 3944) = flt_106F1CB0;
  *(_DWORD *)(this + 3888) = 0;
  *(_DWORD *)(this + 3764) = 1;
  *(float *)(this + 3960) = 0.0;
  *(float *)(this + 3636) = *(float *)(this + 3924);
  *(float *)(this + 3640) = *(float *)(this + 3928);
  *(float *)(this + 3644) = *(float *)(this + 3932);
  *(float *)(this + 3948) = *(float *)(this + 3952);
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( v7 && *v7 )
    v5 = *(_DWORD *)(this + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  *(_DWORD *)(this + 3768) = sub_100BD5F0(v5, "tail_control");
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v9 = *(_DWORD **)(this + 1100);
  if ( v9 && *v9 )
    v10 = *(_DWORD *)(this + 1100);
  else
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  *(_DWORD *)(this + 3772) = sub_100BD5F0(v10, "dynamo_wheel");
  v11 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v12 = *(_DWORD **)(this + 1100);
  if ( v12 && *v12 )
    v13 = *(_DWORD *)(this + 1100);
  else
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  *(_DWORD *)(this + 3776) = sub_100BD5F0(v13, "alert_control");
  v14 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v15 = *(_DWORD **)(this + 1100);
  if ( v15 && *v15 )
    v16 = *(_DWORD *)(this + 1100);
  else
    v16 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
  *(_DWORD *)(this + 3780) = sub_100BD5F0(v16, "flex_vert");
  v17 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v18 = *(_DWORD **)(this + 1100);
  if ( v18 && *v18 )
    v19 = *(_DWORD *)(this + 1100);
  else
    v19 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 104))(v17);
  *(_DWORD *)(this + 3784) = sub_100BD5F0(v19, "flex_horz");
  sub_10020460((_DWORD *)this, 0x80000);
  *(_BYTE *)(this + 4021) = 0;
  sub_1032A400(this);
  if ( *(_BYTE *)(this + 3881) )
  {
    if ( *(_BYTE *)(this + 3882) )
      Warning("ERROR: Scanner set to never and always inspect players!\n");
  }
}
