char __thiscall sub_10150F90(void *this, float *a2, float *a3)
{
  float *v4; // eax
  float *v5; // eax
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  double v10; // st7
  double v11; // st5
  double v12; // st7
  double v13; // st5
  double v14; // st4
  double v15; // st6
  double v16; // st3
  double v17; // st5
  float v19; // [esp+4h] [ebp-2Ch]
  float v20; // [esp+8h] [ebp-28h]
  float v21; // [esp+10h] [ebp-20h]
  float v22; // [esp+14h] [ebp-1Ch]
  float v23; // [esp+18h] [ebp-18h]
  float v24; // [esp+1Ch] [ebp-14h]
  float v25; // [esp+24h] [ebp-Ch]
  float v26; // [esp+28h] [ebp-8h]
  float v27; // [esp+2Ch] [ebp-4h]

  v25 = *(float *)(dword_1043CE1C + 44);
  v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 260))(this);
  v20 = v4[1];
  v19 = *v4;
  v5 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 264))(this);
  v21 = *v5;
  v22 = v5[1];
  v23 = v5[2];
  if ( *(_DWORD *)(dword_1043CDD4 + 48) )
  {
    v6 = sub_10073890();
    v19 = *(float *)(v6 + 1196);
    v20 = *(float *)(v6 + 1200);
    v7 = (float *)sub_10073890();
    v21 = v7[302];
    v22 = v7[303];
    v23 = v7[304];
  }
  v8 = sub_100422D0();
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = v23;
  if ( v23 >= *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 36))(v8) + 8) + 512.0 )
    v10 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9) + 8) + 512.0;
  v27 = v10;
  v26 = (v27 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9) + 8)) / *(float *)(dword_1043D65C + 44);
  v24 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9) - flt_1043D718 * v26;
  v11 = 0.5 * v25;
  v12 = v24 - v11;
  v13 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9) + 4) - flt_1043D71C * v26 - v11;
  v14 = v12 + v25;
  v15 = v25 + v13;
  if ( v21 < v12 )
    return 0;
  v16 = v13;
  v17 = v21;
  if ( v16 > v22 )
    return 0;
  if ( v19 > v14 )
    return 0;
  if ( v20 > v15 )
    return 0;
  if ( v19 > v12 )
    v12 = v19;
  *a2 = v12;
  if ( v20 > v16 )
    v16 = v20;
  a2[1] = v16;
  a2[2] = v27;
  if ( v14 <= v17 )
    v17 = v14;
  if ( v22 < v15 )
    v15 = v22;
  *a3 = v17 - v12;
  a3[1] = v15 - a2[1];
  return 1;
}
