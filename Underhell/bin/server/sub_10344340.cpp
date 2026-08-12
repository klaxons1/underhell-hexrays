char __thiscall sub_10344340(int this, float *a2, int a3)
{
  double v5; // st7
  float v6; // edx
  float v7; // eax
  int v8; // ecx
  int v9; // edx
  void (__thiscall *v10)(int, _DWORD *); // edx
  int *v11; // ecx
  _DWORD v13[20]; // [esp+18h] [ebp-70h] BYREF
  __int16 v14; // [esp+68h] [ebp-20h]
  char v15; // [esp+6Bh] [ebp-1Dh]
  __int16 v16; // [esp+6Ch] [ebp-1Ch]
  float v17; // [esp+70h] [ebp-18h]
  float v18; // [esp+74h] [ebp-14h]
  float v19; // [esp+78h] [ebp-10h]
  float v20; // [esp+7Ch] [ebp-Ch]
  float v21; // [esp+80h] [ebp-8h]
  float v22; // [esp+84h] [ebp-4h]
  float v23; // [esp+90h] [ebp+8h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *a2;
  v6 = *(float *)(this + 584);
  v7 = *(float *)(this + 588);
  v20 = *(float *)(this + 580);
  v21 = v6;
  v22 = v7;
  v17 = v5 - v20;
  v18 = a2[1] - v6;
  v19 = a2[2] - v7;
  off_10689714();
  v8 = *(_DWORD *)(this + 3620);
  v9 = *(_DWORD *)this;
  *(float *)&v13[17] = 1.0;
  v10 = *(void (__thiscall **)(int, _DWORD *))(v9 + 432);
  *(float *)&v13[4] = v17;
  v13[0] = 1;
  *(float *)&v13[5] = v18;
  v13[12] = 1;
  *(float *)&v13[6] = v19;
  v13[11] = v8;
  *(float *)&v13[1] = v20;
  v13[14] = 0;
  *(float *)&v13[2] = v21;
  v13[16] = 0;
  v13[19] = 0;
  *(float *)&v13[3] = v22;
  v14 = 1;
  v13[13] = 0;
  *(float *)&v13[10] = 56755.84;
  v16 = 0;
  v15 = 0;
  *(float *)&v13[7] = 0.015;
  v13[18] = this;
  *(float *)&v13[8] = 0.015;
  v13[15] = 20;
  *(float *)&v13[9] = 0.015;
  v10(this, v13);
  sub_1023C380((_DWORD *)this, (int)"NPC_Combine_Cannon.FireBullet", 0.0, 0);
  v23 = *(float *)(dword_106B31C8 + 12) + 0.1;
  if ( *(_DWORD *)(this + 1672) != LODWORD(v23) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 1672);
    }
    *(float *)(this + 1672) = v23;
  }
  *(float *)(this + 3628) = *a2;
  *(float *)(this + 3632) = a2[1];
  *(float *)(this + 3636) = a2[2];
  sub_10343950((int *)this);
  return 1;
}
