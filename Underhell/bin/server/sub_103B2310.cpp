float *__thiscall sub_103B2310(int this)
{
  int v1; // edi
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
  float v15[3]; // [esp+Ch] [ebp-18h] BYREF
  float v16[3]; // [esp+18h] [ebp-Ch] BYREF

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  v5 = sub_100BD5F0(v4, "body_height");
  v6 = dword_10700AC8;
  dword_106EAD9C = v5;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(this + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  v9 = sub_100BD5F0(v8, "yaw");
  v10 = dword_10700AC8;
  dword_106EAD58 = v9;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v11 = *(_DWORD **)(this + 1100);
  if ( v11 && *v11 )
    v12 = *(_DWORD *)(this + 1100);
  else
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  dword_106EAD54 = sub_100BD5F0(v12, "pitch");
  dword_106EAD50 = sub_100BEF30(this, "BigGun");
  v13 = sub_100BDE80(this, 6);
  sub_100BF580(this, v13, v15, v16);
  flt_106EAD5C = (v16[0] - v15[0]) * 0.5;
  return sub_10112B00((_BYTE *)(this + 320), 2, 0, 0);
}
