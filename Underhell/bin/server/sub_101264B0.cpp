void __thiscall sub_101264B0(int this, int a2)
{
  double v2; // st7
  bool v4; // zf
  int v5; // edx
  double v6; // st6
  double v7; // st4
  double v8; // st5
  long double v9; // st7
  long double v10; // st7
  double v11; // st6
  _BYTE v12[8]; // [esp+4h] [ebp-C4h] BYREF
  float v13; // [esp+Ch] [ebp-BCh]
  float v14; // [esp+10h] [ebp-B8h]
  float v15; // [esp+14h] [ebp-B4h]
  float v16; // [esp+18h] [ebp-B0h]
  char v17; // [esp+34h] [ebp-94h]
  float v18; // [esp+58h] [ebp-70h] BYREF
  float v19; // [esp+5Ch] [ebp-6Ch]
  float v20; // [esp+60h] [ebp-68h]
  float v21; // [esp+64h] [ebp-64h]
  float v22; // [esp+68h] [ebp-60h]
  float v23; // [esp+6Ch] [ebp-5Ch]
  float v24; // [esp+70h] [ebp-58h]
  float v25; // [esp+74h] [ebp-54h]
  float v26; // [esp+78h] [ebp-50h]
  float v27; // [esp+7Ch] [ebp-4Ch]
  float v28; // [esp+80h] [ebp-48h]
  float v29; // [esp+84h] [ebp-44h]
  int v30; // [esp+88h] [ebp-40h]
  int v31; // [esp+8Ch] [ebp-3Ch]
  float v32; // [esp+90h] [ebp-38h]
  float v33; // [esp+94h] [ebp-34h]
  float v34; // [esp+98h] [ebp-30h]
  int v35; // [esp+9Ch] [ebp-2Ch]
  __int16 v36; // [esp+A0h] [ebp-28h]
  int v37; // [esp+A4h] [ebp-24h]
  int v38; // [esp+A8h] [ebp-20h]
  int v39; // [esp+ACh] [ebp-1Ch]
  char v40; // [esp+B0h] [ebp-18h]
  float v41; // [esp+B8h] [ebp-10h] BYREF
  float v42; // [esp+BCh] [ebp-Ch]
  float v43; // [esp+C0h] [ebp-8h]
  float v44; // [esp+C4h] [ebp-4h]
  int savedregs; // [esp+C8h] [ebp+0h] BYREF

  v2 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v4 = (*(_BYTE *)(this + 248) & 1) == 0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v31 = 0;
  v25 = 0.0;
  v35 = 0;
  v26 = 0.0;
  v36 = 0;
  v27 = 0.0;
  v37 = 0;
  v28 = 0.0;
  v38 = 0;
  v29 = 0.0;
  v39 = 0;
  v40 = 0;
  v32 = 1.0;
  v30 = 0;
  v33 = 0.0;
  v34 = 0.0;
  v44 = *(float *)(this + 800);
  if ( v4 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    {
      sub_100DAE60(this);
      v2 = 0.0;
    }
    v6 = *(float *)(this + 580);
    v18 = *(float *)(this + 580);
    v8 = *(float *)(this + 584);
    v19 = *(float *)(this + 584);
    v7 = *(float *)(this + 588);
    v20 = *(float *)(this + 588);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, this + 580, 0) & 0x4030) != 0 )
      return;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(_DWORD *)(this + 252);
    v41 = *(float *)(this + 580);
    v42 = *(float *)(this + 584);
    v43 = *(float *)(this + 588) - 4096.0;
    if ( (v5 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), &v41, 16443, this, 0, (int)v12);
    v18 = v14;
    v19 = v15;
    v20 = v16;
    if ( (v17 & 0x10) != 0 )
      v30 |= 1u;
    v2 = 0.0;
    v6 = v14;
    v7 = v16;
    v8 = v15;
  }
  if ( (*(_DWORD *)(this + 248) & 2) != 0 )
  {
    v41 = v6;
    v42 = v8;
    v43 = v7 - 4096.0;
    sub_1002A5F0((int)&savedregs, this, &v18, &v41, 16395, this, 0, (int)v12);
    v9 = 1.0 - fabs(v13 - v16) * 0.0083333338;
    if ( v9 < 0.1 )
      return;
    v10 = v9 * v44;
    v11 = 0.0;
  }
  else
  {
    v11 = v2;
    v10 = v44;
  }
  v24 = v11;
  v25 = v11;
  v26 = 1.0;
  v32 = v10;
  sub_1028E890("watersplash", &v18);
}
