char __cdecl sub_1001C3D0(int a1, _DWORD *a2, int a3, float a4, float *a5, _DWORD *a6, float *a7)
{
  int v7; // ecx
  _DWORD *v8; // ebx
  double v9; // st7
  float *v10; // edx
  double v11; // st6
  double v12; // st7
  int v14; // ecx
  float *v15; // esi
  _DWORD *v16; // eax
  float *v17; // eax
  float *v18; // eax
  double v19; // st5
  double v20; // st4
  double v21; // st6
  double v22; // st2
  double v23; // st1
  int v24; // esi
  int v25; // [esp+18h] [ebp-4h] BYREF

  v25 = v7;
  v8 = a2;
  v9 = sub_1001C150((int)a2, a3, a4, &v25, (float *)&a2);
  v10 = a7;
  *a7 = v9;
  v11 = 1.0;
  if ( v9 <= 1.0 )
  {
    v11 = 0.0;
    if ( v9 >= 0.0 )
      v11 = v9;
    v12 = 0.0;
  }
  else
  {
    v12 = 0.0;
  }
  *v10 = v11;
  if ( v8[1] != 3 && v11 < 0.0001 )
    return 0;
  v14 = v8[18];
  if ( v14 && (v15 = (float *)((char *)&v8[7 * (v25 - v8[17])] + v14)) != 0 )
  {
    v16 = a6;
    if ( *(float *)&a2 >= 0.001 )
    {
      sub_101F17B0((int)(v15 + 3), (int)(v15 + 10), *(float *)&a2, (int)a6);
      v18 = a5;
      v19 = v15[8] * *(float *)&a2;
      v20 = v15[9] * *(float *)&a2;
      v21 = 1.0 - *(float *)&a2;
      v22 = v15[1] * v21;
      v23 = v15[2];
      *a5 = v15[7] * *(float *)&a2 + *v15 * v21;
      v18[1] = v19 + v22;
      v18[2] = v21 * v23 + v20;
    }
    else
    {
      *a6 = *((_DWORD *)v15 + 3);
      v16[1] = *((_DWORD *)v15 + 4);
      v16[2] = *((_DWORD *)v15 + 5);
      v16[3] = *((_DWORD *)v15 + 6);
      v17 = a5;
      *a5 = *v15;
      v17[1] = v15[1];
      v17[2] = v15[2];
    }
    return 1;
  }
  else
  {
    v24 = (int)v8 + v8[15];
    if ( v24 )
    {
      sub_1001B2C0(v25 - v8[17], v24, *(float *)&a2, a5, (int)a6);
      return 1;
    }
    else
    {
      *v10 = v12;
      return 0;
    }
  }
}
