char __usercall sub_10076F10@<al>(int a1@<ecx>, int a2@<esi>, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v8; // rt1
  double v9; // st5
  double v10; // st6
  float *v11; // esi
  float *v12; // eax
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  _DWORD *v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // eax
  float v23; // [esp+0h] [ebp-4h]
  float v24; // [esp+Ch] [ebp+8h]
  float v25; // [esp+10h] [ebp+Ch]

  v4 = 0.0;
  v5 = a3;
  v6 = a4;
  if ( a3 <= 0.0 && v6 <= 0.0 )
    return -1;
  if ( v6 < v5 )
  {
    v6 = a3;
    v5 = a4;
  }
  v8 = v6;
  v9 = v5;
  v10 = v8;
  if ( v9 >= 0.0 || (v9 = v10 - 400.0, v10 - 400.0 >= 0.0) )
    v4 = v9;
  v24 = v4 * v4;
  v25 = v10 * v10;
  v11 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 268))(a1, a2);
  v12 = (float *)sub_101422C0(a1);
  v13 = v12[1] - v11[1];
  v14 = v13 * v13;
  v15 = *v12 - *v11;
  v16 = v14;
  v17 = v12[2] - v11[2];
  v23 = v15 * v15 + v16 + v17 * v17;
  v18 = (_DWORD *)sub_100422D0();
  if ( v18 )
  {
    v19 = sub_100138E0(v18);
    v20 = v19 * v19 * v23;
  }
  else
  {
    v20 = v23;
  }
  if ( v24 >= v20 )
    return -1;
  if ( v25 <= v20 )
    return 0;
  v21 = (int)((v25 - v20) * (255.0 / (v25 - v24)));
  if ( v21 <= 255 )
    return v21 < 0 ? 0 : v21;
  else
    return -1;
}
