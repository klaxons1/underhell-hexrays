char __thiscall sub_103467B0(int this)
{
  volatile signed __int32 v2; // edi
  int v3; // eax
  volatile signed __int32 v4; // edx
  double v5; // st7
  int v6; // edi
  _DWORD *v7; // ebx
  int v8; // ebx
  double v9; // st7
  int v10; // edi
  void (__thiscall *v11)(int); // eax
  _DWORD *v12; // eax
  bool v13; // zf
  double (__thiscall *v14)(int); // eax
  double v15; // st7
  int v16; // edi
  _DWORD *v17; // ebx
  int v18; // ebx
  double v19; // st7
  int v20; // edi
  void (__thiscall *v21)(int); // eax
  _DWORD *v22; // eax
  float v24; // [esp+10h] [ebp-74h]
  float v25; // [esp+10h] [ebp-74h]
  float v26; // [esp+14h] [ebp-70h]
  float v27; // [esp+14h] [ebp-70h]
  _BYTE v28[48]; // [esp+20h] [ebp-64h] BYREF
  _BYTE v29[12]; // [esp+50h] [ebp-34h] BYREF
  _BYTE v30[12]; // [esp+5Ch] [ebp-28h] BYREF
  float v31[3]; // [esp+68h] [ebp-1Ch] BYREF
  float v32; // [esp+74h] [ebp-10h]
  int v33; // [esp+78h] [ebp-Ch]
  float v34; // [esp+7Ch] [ebp-8h]
  char v35; // [esp+83h] [ebp-1h]

  v2 = *(_DWORD *)this;
  v35 = 0;
  v3 = sub_100BEF30(this, "eyes");
  (*(void (__thiscall **)(int, int, _BYTE *))(v2 + 796))(this, v3, v28);
  sub_10422220(this + 3672, v30);
  sub_10421C60(v30, v28, v29);
  sub_10422540(v29, v31);
  v4 = *(_DWORD *)this;
  v33 = SLODWORD(v31[0]);
  v26 = ((double (__thiscall *)(int))*(_DWORD *)(v4 + 1700))(this) * 0.1;
  v5 = *(float *)&v33;
  sub_10424B50(*(float *)&v33, 0.0, v26);
  v27 = v5;
  sub_10424CA0(v27);
  v34 = v5;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( !v7 || !*v7 )
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  v8 = sub_100BD5F0((int)v7, "aim_pitch");
  v9 = sub_100BE820(this, v8);
  v10 = dword_10700AC8;
  v11 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v32 = v9 + v34 * 0.66666669;
  v11(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v12 = *(_DWORD **)(this + 1100);
  if ( !v12 || (v13 = *v12 == 0, v33 = *(int *)(this + 1100), v13) )
    *(float *)&v33 = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  sub_100BE7D0((_DWORD *)this, v33, v8, v32);
  if ( fabs(v34) > 0.1 )
    v35 = 1;
  v14 = *(double (__thiscall **)(int))(*(_DWORD *)this + 1700);
  v32 = v31[1];
  v24 = v14(this) * 0.1;
  v15 = v32;
  sub_10424B50(v32, 0.0, v24);
  v25 = v15;
  sub_10424CA0(v25);
  v34 = v15;
  v16 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v17 = *(_DWORD **)(this + 1100);
  if ( !v17 || !*v17 )
    v17 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
  v18 = sub_100BD5F0((int)v17, "aim_yaw");
  v19 = sub_100BE820(this, v18);
  v20 = dword_10700AC8;
  v21 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v32 = v19 + v34 * 0.66666669;
  v21(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v22 = *(_DWORD **)(this + 1100);
  if ( !v22 || (v13 = *v22 == 0, v33 = *(int *)(this + 1100), v13) )
    *(float *)&v33 = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 104))(v20);
  sub_100BE7D0((_DWORD *)this, v33, v18, v32);
  if ( fabs(v34) <= 0.1 )
  {
    if ( !v35 )
      goto LABEL_32;
  }
  else
  {
    v35 = 1;
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3660) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_CombineCamera.Move", 0.0, 0);
    *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
LABEL_32:
  sub_100BCCF0((_DWORD *)this);
  return v35;
}
