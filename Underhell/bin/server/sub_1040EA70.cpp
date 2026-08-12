int __thiscall sub_1040EA70(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st7
  float v12; // [esp+4h] [ebp-20h]
  float v13; // [esp+4h] [ebp-20h]
  float v14; // [esp+Ch] [ebp-18h] BYREF
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  sub_1040E210(*(_DWORD *)(this + 1120), &v14);
  v2 = v14 - *(float *)(this + 716);
  v17 = v2;
  v3 = v15 - *(float *)(this + 720);
  v18 = v3;
  v4 = v16 - *(float *)(this + 724);
  v19 = v4;
  v12 = v4 * v4 + v3 * v3 + v2 * v2;
  v5 = off_10689708(v12);
  v6 = *(_DWORD *)(this + 1120);
  if ( *(float *)(v6 + 2160) * *(float *)(dword_106B31C8 + 16) > v5 )
  {
    sub_1040E8D0(v6, &v14);
    v7 = v15 - *(float *)(this + 720);
    v8 = v14 - *(float *)(this + 716);
    v9 = v16 - *(float *)(this + 724);
    v17 = v8;
    v18 = v7;
    v19 = v9;
    v13 = v9 * v9 + v8 * v8 + v7 * v7;
    v5 = off_10689708(v13);
  }
  if ( 0.0 != v5 )
  {
    off_10689714();
    v10 = *(float *)(*(_DWORD *)(this + 1120) + 2160);
    v14 = v17 * v10;
    v15 = v18 * v10;
    v16 = v10 * v19;
    sub_100DD660(this, &v14);
  }
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
