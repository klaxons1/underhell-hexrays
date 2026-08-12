int __thiscall sub_10166900(int this, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  float v7; // [esp+0h] [ebp-90h]
  _BYTE v8[24]; // [esp+Ch] [ebp-84h] BYREF
  float v9; // [esp+24h] [ebp-6Ch]
  float v10; // [esp+28h] [ebp-68h]
  float v11; // [esp+2Ch] [ebp-64h]
  float v12[3]; // [esp+60h] [ebp-30h] BYREF
  float v13[3]; // [esp+6Ch] [ebp-24h] BYREF
  float v14[3]; // [esp+78h] [ebp-18h] BYREF
  float v15; // [esp+84h] [ebp-Ch]
  float v16; // [esp+88h] [ebp-8h]
  float v17; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 12) + 10.0;
  sub_100EC4A0((int *)this, v7, 0);
  if ( *(const char **)(a2 + 92) != "worldspawn" && !sub_100D6240((_DWORD *)a2, "worldspawn") )
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v4 = *(_DWORD *)(this + 252) >> 11;
  v15 = *(float *)(this + 476) * 32.0;
  v16 = *(float *)(this + 480) * 32.0;
  v17 = 32.0 * *(float *)(this + 484);
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v5 = *(_DWORD *)(this + 252) >> 11;
  v13[0] = *(float *)(this + 580) + v15;
  v13[1] = *(float *)(this + 584) + v16;
  v13[2] = *(float *)(this + 588) + v17;
  if ( (v5 & 1) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v13, 16395, this, 0, (int)v8);
  sub_10265C30(v8, *(_DWORD *)(this + 1148));
  v14[0] = v9 * -1.0;
  v14[1] = v10 * -1.0;
  v14[2] = -1.0 * v11;
  sub_10422540(v14, v12);
  sub_100E11A0(this, v12);
  sub_100DD660(this, &flt_106F1CA8);
  sub_100D7260((float *)this, &flt_106F1CB4);
  return sub_100E0970(this, v6, 0, 0);
}
