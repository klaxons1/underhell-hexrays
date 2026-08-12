int __thiscall sub_10108F80(int this)
{
  double v2; // st7
  bool v3; // c3
  double v4; // st7
  double v5; // st6
  const char *v6; // eax
  double v7; // st6
  double v8; // st5
  double v9; // st5
  double v10; // rt0
  int v11; // eax
  double v12; // rtt
  double v13; // st6
  double v14; // st7
  double v15; // st2
  double v16; // st5
  double v17; // st5
  double v18; // st4
  double v19; // st3
  double v20; // st1
  double v21; // st5
  double v22; // rt2
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // st1
  double v27; // st5
  double v28; // rtt
  double v29; // st7
  bool v30; // c3
  int v31; // eax
  char *v32; // eax
  int v33; // edx
  const char *v34; // eax
  int result; // eax
  float v36; // [esp+0h] [ebp-41Ch]
  char Buffer[1024]; // [esp+18h] [ebp-404h] BYREF
  char *Str; // [esp+418h] [ebp-4h] BYREF

  sub_10246A60();
  v2 = *(float *)(this + 108);
  *(_BYTE *)(this + 1280) = 1;
  v3 = 0.0 == v2;
  v4 = 0.0;
  if ( v3 )
    *(float *)(this + 108) = 100.0;
  v5 = 1.0;
  if ( *(float *)(this + 1292) < 0.0 || *(float *)(this + 1292) > 1.0 )
  {
    v6 = sub_100D6390((_DWORD *)this);
    Warning("WARNING: Momentary door (%s) start position not between 0 and 1.  Clamping.\n", v6);
    if ( *(float *)(this + 1272) <= 1.0 )
    {
      if ( *(float *)(this + 1272) >= 0.0 )
        v9 = *(float *)(this + 1272);
      else
        v9 = 0.0;
      v10 = v9;
      v8 = 0.0;
      v7 = v10;
    }
    else
    {
      v7 = 1.0;
      v8 = 0.0;
    }
    *(float *)(this + 1292) = v7;
    v5 = 1.0;
    v4 = v8;
  }
  v11 = *(_DWORD *)(this + 1284);
  if ( v11 != 1 && v11 != -1 )
    *(_DWORD *)(this + 1284) = 1;
  v12 = v5;
  v13 = v4;
  v14 = v12;
  if ( v13 > *(float *)(this + 804) )
  {
    v15 = *(float *)(this + 848);
    v16 = *(float *)(this + 844) * -1.0;
    *(float *)(this + 840) = *(float *)(this + 840) * -1.0;
    *(float *)(this + 844) = v16;
    *(float *)(this + 848) = -1.0 * v15;
    *(float *)(this + 804) = -*(float *)(this + 804);
  }
  v17 = *(float *)(this + 804);
  v18 = *(float *)(this + 840) * v17;
  v19 = *(float *)(this + 844) * v17;
  v20 = *(float *)(this + 1292);
  v21 = *(float *)(this + 736) - v17 * *(float *)(this + 848) * v20;
  v22 = *(float *)(this + 732) - v19 * v20;
  *(float *)(this + 1248) = *(float *)(this + 728) - v18 * v20;
  *(float *)(this + 1252) = v22;
  *(float *)(this + 1256) = v21;
  v23 = *(float *)(this + 804);
  v24 = *(float *)(this + 840) * v23;
  v25 = *(float *)(this + 844) * v23;
  v26 = v14 - *(float *)(this + 1292);
  v27 = v23 * *(float *)(this + 848) * v26 + *(float *)(this + 736);
  v28 = v25 * v26 + *(float *)(this + 732);
  *(float *)(this + 1260) = v24 * v26 + *(float *)(this + 728);
  *(float *)(this + 1264) = v28;
  *(float *)(this + 1268) = v27;
  *(float *)(this + 1272) = *(float *)(this + 1292);
  if ( v13 == *(float *)(this + 1292) )
  {
    v29 = v13;
    *(_DWORD *)(this + 1284) = -1;
  }
  else
  {
    v30 = *(float *)(this + 1292) == v14;
    v29 = v13;
    if ( v30 )
      *(_DWORD *)(this + 1284) = 1;
  }
  v31 = *(_DWORD *)(this + 248);
  if ( (v31 & 0x800) != 0 )
    *(_BYTE *)(this + 976) = 1;
  if ( (v31 & 0x400) != 0 )
  {
    if ( *(_DWORD *)(this + 980) )
    {
      sub_10429A00(Buffer, 0x400u, "Buttons.snd%d", *(_DWORD *)(this + 980));
      sub_10162BE0(&Str, Buffer);
      v32 = Str;
      *(_DWORD *)(this + 1276) = Str;
      if ( !v32 )
        v32 = (char *)String;
      sub_1023B8B0(v32);
      v29 = 0.0;
    }
    else
    {
      *(_DWORD *)(this + 1276) = 0;
    }
    *(_DWORD *)(this + 1244) = 0;
    if ( *(_BYTE *)(this + 1280) && v29 != *(float *)(this + 1124) )
    {
      v36 = v29;
      sub_10108AE0((int *)(this + 1124), SLOBYTE(v36), this, this);
    }
  }
  sub_10112C00(6);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    *(_DWORD *)(this + 252) |= 0x40000u;
    sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
  }
  sub_100E0970(this, v33, 7, 0);
  v34 = *(const char **)(*(int (__thiscall **)(int, char **))(*(_DWORD *)this + 28))(this, &Str);
  if ( !v34 )
    v34 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v34);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  if ( *(_BYTE *)(this + 988) )
    result = sub_10112C00(1);
  *(_BYTE *)(this + 1120) = 0;
  return result;
}
