void __thiscall sub_10145130(int this, int a2, float a3)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7
  float v7; // [esp+14h] [ebp-90h]
  float v8[24]; // [esp+2Ch] [ebp-78h] BYREF
  float v9[3]; // [esp+8Ch] [ebp-18h] BYREF
  float v10; // [esp+98h] [ebp-Ch]
  float v11; // [esp+9Ch] [ebp-8h]
  float v12; // [esp+A0h] [ebp-4h]
  int v13; // [esp+ACh] [ebp+8h]
  float v14; // [esp+B0h] [ebp+Ch]

  if ( !*(_DWORD *)(dword_10698344 + 48) )
  {
    (*(void (__thiscall **)(_DWORD, int, float *, _DWORD))(**(_DWORD **)(this + 36) + 32))(
      *(_DWORD *)(this + 36),
      a2,
      v9,
      0);
    v4 = sub_10219A30();
    v10 = (double)v4 * 0.000030518509 + (double)v4 * 0.000030518509 - 1.0;
    v5 = sub_10219A30();
    v11 = (double)v5 * 0.000030518509 + (double)v5 * 0.000030518509 - 1.0;
    v13 = sub_10219A30();
    v12 = (double)v13 * 0.000030518509 + (double)v13 * 0.000030518509 - 1.0;
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.30000001,
            1.0);
    off_10689714();
    if ( LOBYTE(a3) )
    {
      v14 = 1.0;
    }
    else
    {
      v7 = (float)*(int *)(this + 40);
      v6 = sub_10134630(v7, 5.0, *(float *)(this + 72), 0.0, 1.0);
      v14 = v6;
      if ( 0.0 == v6 )
        return;
    }
    sub_1001F130(v8);
    v8[0] = v9[0];
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[6] = v10;
    v8[7] = v11;
    v8[8] = v12;
    v8[14] = v14;
    sub_1028E890("WheelDust", v8);
  }
}
