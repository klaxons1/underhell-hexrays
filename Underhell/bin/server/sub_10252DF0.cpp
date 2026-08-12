void __thiscall sub_10252DF0(int this)
{
  int v2; // ebx
  int v3; // esi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  const char *v10; // eax
  float *v11; // eax
  float *v12; // esi
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  double v18; // st4
  double v19; // st6
  double v20; // st4
  double v21; // st5
  double v22; // st6
  double v23; // st7
  double v24; // st7
  float v25; // [esp+4h] [ebp-81Ch]
  const char *v26; // [esp+4h] [ebp-81Ch]
  float v27; // [esp+4h] [ebp-81Ch]
  float v28; // [esp+4h] [ebp-81Ch]
  _DWORD v29[514]; // [esp+14h] [ebp-80Ch] BYREF
  float v30; // [esp+81Ch] [ebp-4h]

  v30 = 1024.0;
  v2 = 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10261520(this + 580, 1024.0, 0);
  v3 = sub_1025EEE0(v29);
  if ( !v3 )
    goto LABEL_15;
  do
  {
    if ( (*(_DWORD *)(v3 + 256) & 0x2080) == 0
      && (*(char **)(v3 + 92) == "path_track" || sub_100D6240((_DWORD *)v3, "path_track")) )
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v4 = *(float *)(this + 584) - *(float *)(v3 + 584);
      v5 = v4 * v4;
      v6 = *(float *)(this + 580) - *(float *)(v3 + 580);
      v7 = v5;
      v8 = *(float *)(this + 588) - *(float *)(v3 + 588);
      v25 = v6 * v6 + v7 + v8 * v8;
      v9 = off_10689708(v25);
      if ( v30 > v9 )
      {
        v30 = v9;
        v2 = v3;
      }
    }
    ++v29[0];
    v3 = sub_1025EEE0(v29);
  }
  while ( v3 );
  if ( v2 )
  {
    v26 = sub_100D6390((_DWORD *)v2);
    v10 = sub_100D6390((_DWORD *)this);
    DevMsg(2, "TRAIN: %s, Nearest track is %s\n", v10, v26);
    v11 = (float *)sub_101ACC90((_DWORD *)v2);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(float *)(this + 720) - v11[180];
      v14 = v13 * v13;
      v15 = *(float *)(this + 716) - v11[179];
      v16 = v14;
      v17 = *(float *)(this + 724) - v11[181];
      v27 = v15 * v15 + v16 + v17 * v17;
      v30 = off_10689708(v27);
      v18 = *(float *)(this + 720) - *(float *)(v2 + 720);
      v19 = v18 * v18;
      v20 = *(float *)(this + 716) - *(float *)(v2 + 716);
      v21 = v19;
      v22 = *(float *)(this + 724) - *(float *)(v2 + 724);
      v28 = v20 * v20 + v21 + v22 * v22;
      v23 = off_10689708(v28);
      if ( v23 > v30 )
        v2 = (int)v12;
    }
    v24 = *(float *)(this + 108);
    *(_DWORD *)(this + 800) = v2;
    if ( 0.0 != v24 )
    {
      sub_100D8290((float *)this, 0.1);
      *(_DWORD *)(this + 4) = sub_102526E0;
    }
  }
  else
  {
LABEL_15:
    Msg("Can't find a nearby track !!!\n");
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
}
