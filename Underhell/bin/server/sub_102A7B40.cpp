void __thiscall sub_102A7B40(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st4
  double v7; // st7
  long double v8; // st4
  int v9; // edi
  int *v10; // ecx
  double v11; // st4
  double v12; // st6
  int v13; // ebx
  int v14; // edi
  _DWORD *v15; // eax
  double v16; // st7
  int v17; // edi
  int v18; // esi
  _DWORD *v19; // eax
  int v20; // ebx
  float v21; // [esp+10h] [ebp-8h]
  float v22; // [esp+10h] [ebp-8h]
  float v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+14h] [ebp-4h]

  v2 = (*(float *)(this + 52) - 100.0) * -0.0049999999;
  v3 = 2.0;
  v4 = 1.0;
  v5 = (3.0 * (v2 * v2) - v2 * (v2 * v2 * 2.0)) * 2.0 - 1.0;
  v6 = -1.0;
  if ( v5 <= 1.0 )
  {
    if ( v5 >= -1.0 )
      v6 = v5;
    v7 = -1.0;
  }
  else
  {
    v7 = -1.0;
    v6 = 1.0;
  }
  v8 = *(float *)(this + 140) * 0.2 + v6 * 0.80000001;
  *(float *)(this + 140) = v8;
  if ( fabs(v8) > 0.75 )
  {
    v9 = *(_DWORD *)(this + 4);
    v23 = *(float *)(dword_106B31C8 + 12) + 0.5;
    if ( *(_DWORD *)(v9 + 1672) != LODWORD(v23) )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(v9 + 24);
        if ( v10 )
        {
          sub_100194B0(v10, 1672);
          v7 = -1.0;
          v3 = 2.0;
          v4 = 1.0;
        }
      }
      *(float *)(v9 + 1672) = v23;
    }
  }
  v11 = (*(float *)(this + 40) - -50.0) * 0.0099999998;
  v12 = v3 * (3.0 * (v11 * v11) - v11 * (v11 * v11 * v3)) - v4;
  if ( v4 >= v12 )
  {
    if ( v12 < v7 )
      goto LABEL_16;
  }
  else
  {
    v12 = v4;
  }
  v7 = v12;
LABEL_16:
  v13 = *(_DWORD *)(this + 4);
  *(float *)(this + 144) = v7 * 0.25 + *(float *)(this + 144) * 0.75;
  v14 = dword_10700AC8;
  v21 = *(float *)(this + 140);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v13 + 1100) && sub_100D7240((void *)v13) )
    sub_100BD750((volatile signed __int32 *)v13);
  v15 = *(_DWORD **)(v13 + 1100);
  if ( !v15 || (v24 = *(_DWORD *)(v13 + 1100), !*v15) )
    v24 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
  sub_100C1460((_DWORD *)v13, v24, "lean_lateral", v21);
  v16 = *(float *)(this + 144);
  v17 = *(_DWORD *)(this + 4);
  v18 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v17 + 1100) && sub_100D7240((void *)v17) )
    sub_100BD750((volatile signed __int32 *)v17);
  v19 = *(_DWORD **)(v17 + 1100);
  if ( v19 && *v19 )
    v20 = *(_DWORD *)(v17 + 1100);
  else
    v20 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
  v22 = v16;
  sub_100C1460((_DWORD *)v17, v20, "lean_vertical", v22);
}
