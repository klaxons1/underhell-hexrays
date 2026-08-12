int __thiscall sub_10079690(int this, int a2, float *a3, float a4, float a5, int a6)
{
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  double v14; // st7
  int v15; // edi
  double v16; // st7
  double v17; // st6
  float v18; // [esp+8h] [ebp-1Ch]
  float v19; // [esp+8h] [ebp-1Ch]
  float v20[3]; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp+Ch]

  if ( fabs(a3[2]) > 0.1 )
  {
    v8 = *(_DWORD **)(this + 4);
    v9 = v8[593];
    if ( v9 != 36 )
    {
      v10 = 34;
      if ( a3[2] <= -0.01 )
        v10 = 35;
      if ( v9 != v10 )
        (*(void (__thiscall **)(_DWORD *, int))(*v8 + 1416))(v8, v10);
    }
    v11 = *(_DWORD **)(this + 4);
    v12 = v11[593];
    if ( v12 != 34 && v12 != 35 && v12 != 36 )
    {
      DevMsg("Climber not in a climb activity!\n");
      return -4;
    }
    if ( *(_DWORD *)(this + 52) != -1 && v12 == 34 && a6 <= 2 && fabs(*(float *)(this + 64)) > a4 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v11 + 1416))(v11, 36);
      v14 = *(float *)(this + 64) - a4;
      v15 = *(_DWORD *)(this + 4);
      v18 = v14;
      sub_100BFB10(v18);
      v19 = v14;
      sub_10031B50(v15, v19);
    }
  }
  sub_100C16C0(0.0);
  if ( *(_DWORD *)(this + 52) == -1 )
    v16 = 100.0;
  else
    v16 = 80.0;
  *(float *)&v21 = v16;
  v20[0] = *a3 * v16;
  v20[1] = a3[1] * v16;
  v20[2] = v16 * a3[2];
  sub_100DD660(v20);
  if ( a4 >= *(float *)(this + 16) * *(float *)&v21 )
  {
    *(float *)(this + 16) = 0.0;
    sub_10078210((float *)this, a5, -1.0);
    return 0;
  }
  else
  {
    v17 = a4;
    if ( a4 <= 0.01 )
      v17 = 0.0;
    *(float *)(this + 16) = *(float *)(this + 16) - v17 / *(float *)&v21;
    sub_100E10C0(a2);
    return 1;
  }
}
