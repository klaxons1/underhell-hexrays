int __thiscall sub_10150680(int this)
{
  float *v2; // edi
  int v3; // edx
  const char *v4; // eax
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  double v9; // st7
  int v10; // ecx
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // rt1
  double v18; // rt2
  void (__thiscall *v19)(int); // edx
  float v21[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v22; // [esp+14h] [ebp-10h]
  float v23; // [esp+18h] [ebp-Ch]
  float v24; // [esp+1Ch] [ebp-8h]
  _BYTE v25[4]; // [esp+20h] [ebp-4h] BYREF

  v2 = (float *)(this + 916);
  v21[0] = *(float *)(this + 916);
  v21[1] = *(float *)(this + 920);
  v21[2] = *(float *)(this + 924);
  sub_10422220(v21, this + 916);
  sub_100E0970(this, v3, 7, 0);
  v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v25);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v4);
  if ( *(float *)(this + 108) <= 0.0 )
    *(float *)(this + 108) = 100.0;
  if ( *(float *)(this + 948) <= 0.0 )
  {
    v5 = (float *)sub_10022D70();
    *v5 = *(float *)(this + 340) - *(float *)(this + 328);
    v5[1] = *(float *)(this + 344) - *(float *)(this + 332);
    v5[2] = *(float *)(this + 348) - *(float *)(this + 336);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v22 = v6;
    v23 = v7;
    v24 = v8;
    *(float *)(this + 948) = fabs((v7 - 2.0) * v2[1])
                           + fabs((v6 - 2.0) * *v2)
                           + fabs((v8 - 2.0) * v2[2])
                           - *(float *)(this + 812);
  }
  v9 = *(float *)(this + 948);
  v10 = *(_DWORD *)(this + 252) >> 11;
  v11 = v2[1] * v9;
  v12 = v9 * v2[2];
  v13 = *(float *)(this + 944);
  v22 = *(float *)(this + 948) * *v2 * v13;
  v23 = v11 * v13;
  v24 = v12 * v13;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(this);
  v14 = *(float *)(this + 584) - v23;
  v15 = *(float *)(this + 588) - v24;
  *(float *)(this + 816) = *(float *)(this + 580) - v22;
  *(float *)(this + 820) = v14;
  *(float *)(this + 824) = v15;
  v16 = *(float *)(this + 948);
  v17 = v2[1] * v16 + *(float *)(this + 820);
  v18 = v16 * v2[2] + *(float *)(this + 824);
  *(float *)(this + 828) = v16 * *v2 + *(float *)(this + 816);
  *(float *)(this + 832) = v17;
  *(float *)(this + 836) = v18;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 884) = *(float *)(this + 580);
  *(float *)(this + 888) = *(float *)(this + 584);
  *(float *)(this + 892) = *(float *)(this + 588);
  v19 = *(void (__thiscall **)(int))(*(_DWORD *)this + 100);
  *(_DWORD *)(this + 196) = 0;
  v19(this);
  sub_10112C00(this + 320, 6);
  if ( *(char **)(this + 92) == "func_water_analog" || sub_100D6240((_DWORD *)this, "func_water_analog") )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x20);
  if ( *(char **)(this + 92) != "func_water_analog"
    && !sub_100D6240((_DWORD *)this, "func_water_analog")
    && (*(_BYTE *)(this + 248) & 8) != 0 )
  {
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
}
