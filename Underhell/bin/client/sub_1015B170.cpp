void __thiscall sub_1015B170(int this, float *a2, float *a3, float *a4, float *a5)
{
  int (__stdcall *v6)(const char *); // edx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v11[3]; // [esp+14h] [ebp-18h] BYREF
  float v12; // [esp+20h] [ebp-Ch] BYREF
  float v13; // [esp+24h] [ebp-8h]
  float v14; // [esp+28h] [ebp-4h]

  v6 = *(int (__stdcall **)(const char *))(*(_DWORD *)(this + 4) + 140);
  if ( *(_BYTE *)(this + 1964) )
    v7 = v6("vehicle_gunner_eyes");
  else
    v7 = v6("vehicle_driver_eyes");
  sub_10026820((_DWORD *)this, v7, v11, (int)&v12);
  if ( a2 )
  {
    v8 = a5[1];
    sub_101F0610(a5[1], v13);
    if ( v8 <= a2[1] )
    {
      if ( v8 < *a2 )
        v8 = *a2;
    }
    else
    {
      v8 = a2[1];
    }
    a5[1] = v8 + v13;
  }
  if ( a3 )
  {
    v9 = *a5;
    sub_101F0610(*a5, v12);
    if ( v9 <= a3[1] )
    {
      if ( v9 < *a3 )
        v9 = *a3;
    }
    else
    {
      v9 = a3[1];
    }
    *a5 = v9 + v12;
  }
  if ( a4 )
  {
    v10 = a5[2];
    sub_101F0610(a5[2], v14);
    if ( v10 <= a4[1] )
    {
      if ( v10 < *a4 )
        v10 = *a4;
      a5[2] = v10 + v14;
    }
    else
    {
      a5[2] = a4[1] + v14;
    }
  }
}
