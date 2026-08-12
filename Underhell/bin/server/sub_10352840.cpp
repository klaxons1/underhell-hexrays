char __thiscall sub_10352840(int this, int a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st5
  double v6; // st5
  double v7; // st6
  double v8; // st7
  double v9; // st6
  bool v10; // c0
  bool v11; // c3
  double v12; // st6
  double v13; // st5
  double v14; // st7
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // ebx
  int v18; // edi
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // ebx
  _BYTE v23[12]; // [esp+10h] [ebp-1Ch] BYREF
  float v24; // [esp+1Ch] [ebp-10h] BYREF
  float v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+34h] [ebp+8h]
  float v28; // [esp+34h] [ebp+8h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421C60(a2, this + 500, v23);
  sub_10422540(v23, &v24);
  v3 = v25;
  sub_10424CA0(v25);
  v25 = v3;
  v4 = v24;
  sub_10424CA0(v24);
  v24 = v4;
  if ( v4 > *(float *)(this + 4204) )
  {
    v5 = *(float *)(this + 4204) + 12.0;
    if ( v5 > v4 )
      v5 = v4;
    *(float *)(this + 4204) = v5;
  }
  if ( *(float *)(this + 4204) <= v4 )
  {
    v8 = 12.0;
  }
  else
  {
    v6 = *(float *)(this + 4204) - 12.0;
    if ( v6 >= v4 )
    {
      v8 = 12.0;
      *(float *)(this + 4204) = v6;
    }
    else
    {
      v7 = v4;
      v8 = 12.0;
      *(float *)(this + 4204) = v7;
    }
  }
  v9 = *(float *)(this + 4208);
  v10 = v25 < v9;
  v11 = v25 == v9;
  v12 = v25;
  if ( !v10 && !v11 )
  {
    v13 = *(float *)(this + 4208) + v8;
    if ( v13 > v12 )
      v13 = v25;
    *(float *)(this + 4208) = v13;
  }
  if ( v12 < *(float *)(this + 4208) )
  {
    v14 = *(float *)(this + 4208) - v8;
    if ( v12 <= v14 )
      *(float *)(this + 4208) = v14;
    else
      *(float *)(this + 4208) = v12;
  }
  v15 = dword_10700AC8;
  v16 = *(_DWORD *)dword_10700AC8;
  v27 = -*(float *)(this + 4204);
  v26 = dword_106E68D0;
  (*(void (__thiscall **)(int))(v16 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v17 = *(_DWORD **)(this + 1100);
  if ( !v17 || !*v17 )
    v17 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  sub_100BE7D0((_DWORD *)this, (int)v17, v26, v27);
  v18 = dword_10700AC8;
  v28 = *(float *)(this + 4208);
  v19 = *(_DWORD *)dword_10700AC8;
  v26 = dword_106E68D4;
  (*(void (__thiscall **)(int))(v19 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v20 = *(_DWORD **)(this + 1100);
  if ( v20 && *v20 )
    v21 = *(_DWORD *)(this + 1100);
  else
    v21 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
  sub_100BE7D0((_DWORD *)this, v21, v26, v28);
  return 1;
}
