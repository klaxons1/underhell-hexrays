void __thiscall sub_1013CBB0(int this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  int v7; // edx
  float v8; // [esp+18h] [ebp-24h]
  float v9[3]; // [esp+24h] [ebp-18h] BYREF
  float v10; // [esp+30h] [ebp-Ch] BYREF
  float v11; // [esp+34h] [ebp-8h]
  float v12; // [esp+38h] [ebp-4h]

  sub_10422220(this + 728, v9);
  v2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         200.0,
         300.0);
  v10 = v9[0] * v2;
  v11 = v9[1] * v2;
  v12 = v2 * v9[2];
  v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -100.0,
         100.0);
  v10 = v3 + v10;
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -100.0,
         100.0);
  v11 = v4 + v11;
  v5 = v12;
  if ( v12 < 0.0 )
    v6 = v5 - 200.0;
  else
    v6 = v5 + 200.0;
  v12 = v6;
  sub_100DD660(this, &v10);
  sub_100E0970(this, v7, 5, 1);
  sub_10260720(400.0);
  *(float *)(this + 552) = 400.0;
  v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v8, 0);
  sub_10112C00(this + 320, 0);
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  sub_100EAB80((_DWORD *)this, 32);
  *(float *)(this + 108) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                             dword_106B31E4,
                             0.5,
                             1.5);
  sub_100E11A0(this, &flt_106F1CB4);
}
