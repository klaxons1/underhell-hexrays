void __thiscall sub_101054E0(int this, int a2)
{
  double v3; // st7
  char v4; // al
  double v5; // st7
  double v6; // st5
  long double v7; // st4
  double v8; // st5
  long double v9; // st7
  long double v10; // st5
  char v11; // al
  float v12; // [esp+4h] [ebp-18h]
  float v13; // [esp+10h] [ebp-Ch]

  sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
    v3 = *(float *)(this + 1208);
    v4 = *(_BYTE *)(this + 1204);
    *(float *)(this + 1244) = *(float *)(this + 1208);
    v13 = v3;
    *(_BYTE *)(this + 1240) = v4;
    sub_101053E0((_DWORD *)(this - 8), v13);
  }
  if ( *(_BYTE *)(this + 1240) != *(_BYTE *)(this + 1204) )
  {
    v5 = sub_100A4EE0(this + 1252, *((float *)off_103DC81C + 3)) + *(float *)(this + 1244);
    v6 = 1.0;
    if ( v5 >= 0.0 )
    {
      if ( v5 > 1.0 )
        v5 = v5 - 1.0;
    }
    else
    {
      v5 = v5 + 1.0;
    }
    v7 = v5 - *(float *)(this + 1208);
    if ( *(_BYTE *)(this + 1216) )
    {
      if ( v5 >= 0.5 )
        v6 = -1.0;
      v8 = v5 + v6;
      v9 = v7;
      v10 = v8 - *(float *)(this + 1208);
      if ( fabs(v10) <= fabs(v7) )
        v9 = v10;
    }
    else
    {
      v9 = v7;
    }
    v12 = v9;
    sub_100A4E80((float *)(this + 1252), v12, 0.0, *(float *)(this + 1212), 0);
    v11 = *(_BYTE *)(this + 1204);
    *(float *)(this + 1244) = *(float *)(this + 1208);
    *(_BYTE *)(this + 1240) = v11;
  }
}
