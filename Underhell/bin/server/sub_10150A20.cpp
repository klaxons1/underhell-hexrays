int __thiscall sub_10150A20(int this)
{
  int result; // eax
  int v3; // edi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  int v14; // edi
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  double v20; // st7
  double v21; // [esp+Ch] [ebp-214h]
  double v22; // [esp+Ch] [ebp-214h]
  float v23; // [esp+10h] [ebp-210h]
  float v24; // [esp+10h] [ebp-210h]
  float v25; // [esp+10h] [ebp-210h]
  char Buffer[512]; // [esp+1Ch] [ebp-204h] BYREF
  float v27; // [esp+21Ch] [ebp-4h]

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(float *)(this + 820) - *(float *)(this + 832);
    v5 = v4 * v4;
    v6 = *(float *)(this + 816) - *(float *)(this + 828);
    v7 = v5;
    v8 = *(float *)(this + 824) - *(float *)(this + 836);
    v23 = v6 * v6 + v7 + v8 * v8;
    v27 = off_10689708(v23);
    v9 = *(float *)(this + 820) - *(float *)(this + 720);
    v10 = v9 * v9;
    v11 = *(float *)(this + 816) - *(float *)(this + 716);
    v12 = v10;
    v13 = *(float *)(this + 824) - *(float *)(this + 724);
    v24 = v11 * v11 + v12 + v13 * v13;
    v21 = off_10689708(v24) / v27;
    sub_10429A00(Buffer, 0x200u, "Current Pos: %3.3f", SLOBYTE(v21));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v14 = v3 + 1;
    v15 = *(float *)(this + 820) - *(float *)(this + 888);
    v16 = v15 * v15;
    v17 = *(float *)(this + 816) - *(float *)(this + 884);
    v18 = v16;
    v19 = *(float *)(this + 824) - *(float *)(this + 892);
    v25 = v17 * v17 + v18 + v19 * v19;
    v20 = off_10689708(v25);
    v22 = v20 / v27;
    sub_10429A00(Buffer, 0x200u, "Target Pos: %3.3f", SLOBYTE(v22));
    sub_100D5DE0((_DWORD *)this, v14, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v14 + 1;
  }
  return result;
}
