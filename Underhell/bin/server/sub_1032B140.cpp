void __userpurge sub_1032B140(int a1@<ecx>, int a2@<edi>, int a3)
{
  float *v4; // eax
  double v5; // st6
  double v6; // st7
  int v7; // edi
  bool v8; // zf
  double (__thiscall *v9)(int); // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // rt2
  int v15; // edi
  double v16; // st7
  void (__thiscall *v17)(int); // eax
  _DWORD *v18; // eax
  int v19; // ebx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  int v23; // edi
  int v24; // edx
  _DWORD *v25; // eax
  int v26; // ebx
  float v27; // [esp+0h] [ebp-28h]
  float v28; // [esp+4h] [ebp-24h]
  float v29[3]; // [esp+14h] [ebp-14h] BYREF
  int v30; // [esp+20h] [ebp-8h]
  float v31; // [esp+24h] [ebp-4h]
  float v32; // [esp+30h] [ebp+8h]
  float v33; // [esp+30h] [ebp+8h]
  float v34; // [esp+30h] [ebp+8h]

  v31 = 3.0;
  if ( *(_DWORD *)(a1 + 3764) == 6 )
  {
    sub_1032ACF0(a1, 6, a2, a1, *(float *)&a3);
    v31 = 12.0;
  }
  else
  {
    v4 = sub_100436E0((char *)a1, v29, *(float *)&a3);
    v5 = v4[1] + *(float *)(a1 + 3628);
    v6 = v4[2] + *(float *)(a1 + 3632);
    *(float *)(a1 + 3624) = *v4 + *(float *)(a1 + 3624);
    *(float *)(a1 + 3628) = v5;
    *(float *)(a1 + 3632) = v6;
  }
  v7 = *(_DWORD *)(a1 + 424);
  if ( v7 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(_DWORD *)(a1 + 424)) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
  sub_103280A0((float *)a1, v31);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2244))(a1);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) == 0;
  v9 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 2232);
  if ( v8 )
  {
    v11 = v9(a1);
  }
  else
  {
    v10 = v9(a1);
    v11 = v10 + v10;
  }
  v31 = v11;
  if ( *(_DWORD *)(a1 + 3764) == 6 )
  {
    v31 = -1.0;
    v11 = -1.0;
  }
  v27 = v11;
  sub_103285A0((float *)a1, v27, -1.0);
  sub_10328A10((float *)a1);
  sub_1032A130((_DWORD *)a1, a3);
  v12 = 250.0;
  v13 = -150.0;
  if ( *(float *)(a1 + 3632) <= 250.0 )
  {
    if ( *(float *)(a1 + 3632) >= -150.0 )
      v13 = *(float *)(a1 + 3632);
    v14 = v13;
    v13 = -150.0;
    v12 = v14;
  }
  v15 = dword_10700AC8;
  v16 = (v12 - v13) * 0.0024999999;
  v17 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v30 = *(_DWORD *)(a1 + 3768);
  v17(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v18 = *(_DWORD **)(a1 + 1100);
  if ( v18 && *v18 )
    v19 = *(_DWORD *)(a1 + 1100);
  else
    v19 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  v32 = (3.0 * (v16 * v16) - v16 * (v16 * v16 + v16 * v16)) * 105.0 - 25.0;
  sub_100BE7D0((_DWORD *)a1, v19, v30, v32);
  v33 = sub_100BE820(a1, *(_DWORD *)(a1 + 3772));
  v28 = *(float *)(a1 + 3632) * *(float *)(a1 + 3632)
      + *(float *)(a1 + 3624) * *(float *)(a1 + 3624)
      + *(float *)(a1 + 3628) * *(float *)(a1 + 3628);
  v20 = off_10689708(v28);
  if ( v31 <= 0.0 )
    v21 = 1.0;
  else
    v21 = v20 / v31;
  v22 = v33 - v21 * 60.0;
  v34 = v22;
  if ( v22 < -180.0 )
    v34 = v22 + 360.0;
  v23 = dword_10700AC8;
  v24 = *(_DWORD *)dword_10700AC8;
  v30 = *(_DWORD *)(a1 + 3772);
  (*(void (__thiscall **)(int))(v24 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v25 = *(_DWORD **)(a1 + 1100);
  if ( v25 && *v25 )
    v26 = *(_DWORD *)(a1 + 1100);
  else
    v26 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 104))(v23);
  sub_100BE7D0((_DWORD *)a1, v26, v30, v34);
  sub_10328740((float *)a1, v26, v23);
}
