void __thiscall sub_10374D60(int this, int a2, int a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // edi
  int v11; // edx
  _DWORD *v12; // ebx
  int v13; // edi
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // ebx
  double v17; // st7
  int v18; // edi
  void (__thiscall *v19)(int); // eax
  _DWORD *v20; // eax
  int v21; // ebx
  double v22; // st7
  int v23; // edi
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // ebx
  float v27; // [esp+4h] [ebp-28h]
  float v28; // [esp+4h] [ebp-28h]
  float v29; // [esp+4h] [ebp-28h]
  float v30; // [esp+4h] [ebp-28h]
  float v31; // [esp+8h] [ebp-24h]
  float v32; // [esp+18h] [ebp-14h] BYREF
  float v33; // [esp+1Ch] [ebp-10h]
  int v34; // [esp+24h] [ebp-8h]
  float v35; // [esp+28h] [ebp-4h]
  float v36; // [esp+34h] [ebp+8h]
  float v37; // [esp+34h] [ebp+8h]
  float v38; // [esp+34h] [ebp+8h]
  float v39; // [esp+34h] [ebp+8h]

  sub_10422540(a2, &v32);
  v36 = sub_100BE820(this, dword_106742F8);
  v35 = sub_100BE820(this, dword_106742F4);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v31 = 20.0;
  v5 = v32;
  if ( v4 )
  {
    sub_10424B50(v32, v36, v31);
    v27 = v5;
    sub_10424C10(v27, v36);
    v37 = v5 * 0.8 + v36;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = v33;
    sub_10424C10(v33, *(float *)(this + 708));
    v28 = v6;
    sub_10424C10(v28, v35);
    v7 = v6 + v35;
  }
  else
  {
    sub_10424B50(v32, v36, v31);
    v29 = v5;
    sub_10424C10(v29, v36);
    v37 = v5 * 0.6 + v36;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = v33;
    sub_10424C10(v33, *(float *)(this + 708));
    v30 = v8;
    sub_10424C10(v30, v35);
    v7 = v8 * 0.6 + v35;
  }
  v35 = v7;
  sub_10424CA0(v37);
  v9 = v35;
  sub_10424CA0(v35);
  v10 = dword_10700AC8;
  v35 = v9;
  v11 = *(_DWORD *)dword_10700AC8;
  v34 = dword_106742F0;
  (*(void (__thiscall **)(int))(v11 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v12 = *(_DWORD **)(this + 1100);
  if ( !v12 || !*v12 )
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  sub_100BE7D0((_DWORD *)this, (int)v12, v34, 0.0);
  v13 = dword_10700AC8;
  v14 = *(_DWORD *)dword_10700AC8;
  v34 = dword_106742EC;
  (*(void (__thiscall **)(int))(v14 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v15 = *(_DWORD **)(this + 1100);
  if ( v15 && *v15 )
    v16 = *(_DWORD *)(this + 1100);
  else
    v16 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  sub_100BE7D0((_DWORD *)this, v16, v34, 0.0);
  v17 = 45.0;
  if ( v37 <= 45.0 )
  {
    v17 = -45.0;
    if ( v37 >= -45.0 )
      v17 = v37;
  }
  v18 = dword_10700AC8;
  v19 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v34 = dword_106742F8;
  v19(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v20 = *(_DWORD **)(this + 1100);
  if ( v20 && *v20 )
    v21 = *(_DWORD *)(this + 1100);
  else
    v21 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
  v38 = v17;
  sub_100BE7D0((_DWORD *)this, v21, v34, v38);
  v22 = 45.0;
  if ( v35 <= 45.0 )
  {
    v22 = v35;
    if ( v35 < -45.0 )
      v22 = -45.0;
  }
  v23 = dword_10700AC8;
  v24 = *(_DWORD *)dword_10700AC8;
  v34 = dword_106742F4;
  (*(void (__thiscall **)(int))(v24 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v25 = *(_DWORD **)(this + 1100);
  if ( v25 && *v25 )
    v26 = *(_DWORD *)(this + 1100);
  else
    v26 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 104))(v23);
  v39 = v22;
  sub_100BE7D0((_DWORD *)this, v26, v34, v39);
}
