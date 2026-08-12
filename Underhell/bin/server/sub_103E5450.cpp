char __thiscall sub_103E5450(int this, int a2, int a3)
{
  int v3; // ebx
  float v6; // edx
  float v7; // eax
  int v8; // eax
  int v9; // ecx
  double v10; // st4
  double v11; // st5
  double v12; // st7
  int v13; // edx
  double v14; // st7
  float v15; // [esp+0h] [ebp-4Ch]
  float v16[11]; // [esp+10h] [ebp-3Ch] BYREF
  float v17; // [esp+3Ch] [ebp-10h] BYREF
  float v18; // [esp+40h] [ebp-Ch]
  float v19; // [esp+44h] [ebp-8h]
  int v20; // [esp+48h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 424);
  v20 = *(_DWORD *)(this + 424);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v6 = *(float *)(a2 + 580);
    v7 = *(float *)(a2 + 584);
    v19 = *(float *)(a2 + 588);
    v17 = v6;
    v18 = v7;
    v8 = sub_100BEF30(a2, "magnetcable_a");
    if ( v8 >= 0 )
      sub_100BD6D0((void *)a2, v8, (int)&v17, 0, 0, 0);
    memset(v16, 0, sizeof(v16));
    v9 = *(_DWORD *)(this + 252);
    v16[0] = 200000.0;
    v16[2] = 200000.0;
    if ( (v9 & 0x800) != 0 )
      sub_100DAE60(this);
    v10 = *(float *)(this + 584) - v18;
    v11 = *(float *)(this + 588) - v19;
    v15 = v11 * v11 + v10 * v10 + (*(float *)(this + 580) - v17) * (*(float *)(this + 580) - v17);
    v12 = off_10689708(v15);
    v13 = *(_DWORD *)(this + 252);
    v16[1] = v12;
    v16[3] = 2.0;
    if ( (v13 & 0x800) != 0 )
      sub_100DAE60(this);
    v16[4] = *(float *)(this + 580);
    v16[5] = *(float *)(this + 584);
    v14 = *(float *)(this + 588);
    LOWORD(v16[10]) = 256;
    v16[6] = v14;
    v16[7] = v17;
    v16[8] = v18;
    v16[9] = v19;
    *(_DWORD *)(this + 1120) = (*(int (__thiscall **)(int, int, int, float *))(*(_DWORD *)dword_106BAFF4 + 52))(
                                 dword_106BAFF4,
                                 v20,
                                 v3,
                                 v16);
    return 1;
  }
  else
  {
    Msg(" Error: Tried to create a crane_tip with a crane magnet that has no physics model.\n");
    return 0;
  }
}
