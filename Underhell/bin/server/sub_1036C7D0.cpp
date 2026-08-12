int *__thiscall sub_1036C7D0(int this, int a2)
{
  float v3; // edx
  float v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void (__thiscall *v9)(int, _BYTE *); // edx
  int v11; // [esp-4h] [ebp-DCh]
  float v12; // [esp+8h] [ebp-D0h]
  _BYTE v13[16]; // [esp+10h] [ebp-C8h] BYREF
  float v14; // [esp+20h] [ebp-B8h]
  float v15; // [esp+24h] [ebp-B4h]
  float v16; // [esp+28h] [ebp-B0h]
  _BYTE v17[12]; // [esp+60h] [ebp-78h] BYREF
  float v18; // [esp+6Ch] [ebp-6Ch]
  float v19; // [esp+70h] [ebp-68h]
  float v20; // [esp+74h] [ebp-64h]
  float v21; // [esp+78h] [ebp-60h]
  float v22; // [esp+7Ch] [ebp-5Ch]
  float v23; // [esp+80h] [ebp-58h]
  float v24; // [esp+8Ch] [ebp-4Ch]
  float v25[3]; // [esp+B4h] [ebp-24h] BYREF
  float v26; // [esp+C0h] [ebp-18h]
  float v27; // [esp+C4h] [ebp-14h]
  float v28; // [esp+C8h] [ebp-10h]
  float v29; // [esp+CCh] [ebp-Ch]
  float v30; // [esp+D0h] [ebp-8h]
  float v31; // [esp+D4h] [ebp-4h]
  int savedregs; // [esp+D8h] [ebp+0h] BYREF

  if ( *(_DWORD *)(this + 2324) == 7 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v12 = *(float *)(this + 480) * *(float *)(this + 480)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 484) * *(float *)(this + 484);
    if ( off_10689708(v12) > 250.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v3 = *(float *)(this + 476);
      v4 = *(float *)(this + 480);
      v31 = *(float *)(this + 484);
      v29 = v3;
      v30 = v4;
      off_10689714();
      v5 = *(_DWORD *)(this + 252) >> 11;
      v26 = v29 * 100.0;
      v27 = v30 * 100.0;
      v28 = 100.0 * v31;
      if ( (v5 & 1) != 0 )
        sub_100DAE60(this);
      v6 = *(_DWORD *)(this + 252) >> 11;
      v25[0] = v26 + *(float *)(this + 580);
      v25[1] = *(float *)(this + 584) + v27;
      v25[2] = *(float *)(this + 588) + v28;
      if ( (v6 & 1) != 0 )
        sub_100DAE60(this);
      sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v25, 16395, this, 0, (int)v17);
      if ( 1.0 != v24 && v21 * v29 + v22 * v30 + v23 * v31 < -0.8 )
      {
        v11 = sub_10280AC0();
        v7 = sub_10280AC0();
        sub_10248110((int)v13, v7, v11, 100.0, 1, 0);
        v8 = *(_DWORD *)this;
        v14 = v18;
        v9 = *(void (__thiscall **)(int, _BYTE *))(v8 + 1048);
        v15 = v19;
        v16 = v20;
        v9(this, v13);
      }
    }
  }
  return sub_100DA300((_DWORD *)this, a2);
}
