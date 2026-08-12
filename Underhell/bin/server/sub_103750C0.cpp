void __thiscall sub_103750C0(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  double v8; // st7
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebx
  double v12; // st7
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-8h]
  float v22; // [esp+20h] [ebp-4h]
  float v23; // [esp+20h] [ebp-4h]
  float v24; // [esp+20h] [ebp-4h]
  float v25; // [esp+20h] [ebp-4h]

  v22 = sub_100BE820(this, dword_106742F8);
  v18 = sub_100BE820(this, dword_106742F4);
  sub_10424B50(0.0, v22, 3.0);
  sub_10424CA0(0.0);
  v23 = 0.0;
  sub_10424B50(0.0, v18, 2.0);
  sub_10424CA0(0.0);
  *(float *)&v16 = 0.0;
  v3 = dword_10700AC8;
  v19 = dword_106742F0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_100BE7D0((_DWORD *)this, (int)v4, v19, 0.0);
  v5 = dword_10700AC8;
  v20 = dword_106742EC;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  sub_100BE7D0((_DWORD *)this, v7, v20, 0.0);
  v8 = 45.0;
  if ( v23 <= 45.0 )
  {
    v8 = -45.0;
    if ( v23 >= -45.0 )
      v8 = v23;
  }
  v9 = dword_10700AC8;
  v21 = dword_106742F8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v10 = *(_DWORD **)(this + 1100);
  if ( v10 && *v10 )
    v11 = *(_DWORD *)(this + 1100);
  else
    v11 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  v24 = v8;
  sub_100BE7D0((_DWORD *)this, v11, v21, v24);
  v12 = 45.0;
  if ( *(float *)&v16 <= 45.0 )
  {
    v12 = *(float *)&v16;
    if ( *(float *)&v16 < -45.0 )
      v12 = -45.0;
  }
  v13 = dword_10700AC8;
  v17 = dword_106742F4;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v14 = *(_DWORD **)(this + 1100);
  if ( v14 && *v14 )
    v15 = *(_DWORD *)(this + 1100);
  else
    v15 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  v25 = v12;
  sub_100BE7D0((_DWORD *)this, v15, v17, v25);
}
