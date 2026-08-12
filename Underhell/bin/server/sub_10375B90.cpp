void __thiscall sub_10375B90(int this)
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
  int v18; // eax
  float v19; // [esp+0h] [ebp-2Ch]
  float v20; // [esp+10h] [ebp-1Ch] BYREF
  float v21; // [esp+14h] [ebp-18h]
  float v22; // [esp+18h] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-10h] BYREF
  float v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  if ( dword_106742F4 == -1 )
  {
    v2 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v3 = *(_DWORD **)(this + 1100);
    if ( v3 && *v3 )
    {
      v4 = *(_DWORD *)(this + 1100);
    }
    else
    {
      v26 = 0;
      v4 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    v5 = sub_100BD5F0(v4, "aim_yaw");
    v6 = dword_10700AC8;
    dword_106742EC = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v7 = *(_DWORD **)(this + 1100);
    if ( v7 && *v7 )
    {
      v8 = *(_DWORD *)(this + 1100);
    }
    else
    {
      v26 = 0;
      v8 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    v9 = sub_100BD5F0(v8, "aim_pitch");
    v10 = dword_10700AC8;
    dword_106742F0 = v9;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v11 = *(_DWORD **)(this + 1100);
    if ( v11 && *v11 )
    {
      v12 = *(_DWORD *)(this + 1100);
    }
    else
    {
      v26 = 0;
      v12 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
    v13 = sub_100BD5F0(v12, "body_yaw");
    v14 = dword_10700AC8;
    dword_106742F4 = v13;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v15 = *(_DWORD **)(this + 1100);
    if ( v15 && *v15 )
    {
      v16 = *(_DWORD *)(this + 1100);
    }
    else
    {
      v26 = 0;
      v16 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
    dword_106742F8 = sub_100BD5F0(v16, "body_pitch");
    dword_10674308 = sub_100BEF30(this, "top_eye");
    dword_1067430C = sub_100BEF30(this, "bottom_eye");
    dword_106742FC = sub_100BEF30(this, "stagger_yaw");
    dword_10674300 = sub_100BEF30(this, "head_center");
    dword_10674304 = sub_100BEF30(this, "head_radius_measure");
    sub_100BD6D0((void *)this, dword_10674300, (int)&v23, 0, 0, 0);
    sub_100BD6D0((void *)this, dword_10674304, (int)&v20, 0, 0, 0);
    v19 = (v25 - v22) * (v25 - v22) + (v24 - v21) * (v24 - v21) + (v23 - v20) * (v23 - v20);
    flt_106E8550 = off_10689708(v19);
    v17 = sub_100BDCE0(this, dword_106E84BC);
    dword_106E8548 = sub_100BF3D0(this, v17);
    v18 = sub_100BDCE0(this, 18);
    dword_106E854C = sub_100BF3D0(this, v18);
    sub_10112B00((_BYTE *)(this + 320), 2, 0, 0);
  }
}
