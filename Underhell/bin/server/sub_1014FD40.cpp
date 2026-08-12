int __thiscall sub_1014FD40(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st6
  _DWORD v7[5]; // [esp+10h] [ebp-48h] BYREF
  float v8; // [esp+24h] [ebp-34h] BYREF
  float v9; // [esp+28h] [ebp-30h]
  float v10; // [esp+2Ch] [ebp-2Ch]
  int v11[3]; // [esp+30h] [ebp-28h] BYREF
  float v12; // [esp+3Ch] [ebp-1Ch]
  float v13; // [esp+40h] [ebp-18h]
  float v14; // [esp+44h] [ebp-14h]
  int v15; // [esp+48h] [ebp-10h] BYREF
  float v16; // [esp+4Ch] [ebp-Ch]
  float v17; // [esp+50h] [ebp-8h]
  float v18; // [esp+54h] [ebp-4h]

  v2 = *(float *)(this + 832) + *(float *)(this + 716);
  memset(v7, 0, sizeof(v7));
  v8 = v2;
  v9 = *(float *)(this + 836) + *(float *)(this + 720);
  v10 = *(float *)(this + 840) + *(float *)(this + 724);
  sub_100D8E00((_DWORD *)this, &v8, (float *)v11);
  v8 = *(float *)(this + 716) + *(float *)(this + 844);
  v9 = *(float *)(this + 848) + *(float *)(this + 720);
  v10 = *(float *)(this + 852) + *(float *)(this + 724);
  sub_100D8E00((_DWORD *)this, &v8, (float *)&v15);
  v12 = *(float *)v11 - *(float *)&v15;
  v13 = *(float *)&v11[1] - v16;
  v14 = *(float *)&v11[2] - v17;
  v18 = off_10689714();
  sub_1014FC40((char *)this, (float *)v11, 100.0, (int *)(this + 812));
  sub_1014FC40((char *)this, (float *)&v15, 100.0, (int *)(this + 812));
  v3 = v18 - 40.0;
  v4 = 40.0;
  v18 = v3;
  if ( v3 > 0.0 )
  {
    do
    {
      *(float *)&v15 = v12 * v4 + *(float *)&v15;
      v16 = v13 * v4 + v16;
      v17 = v4 * v14 + v17;
      sub_1014FC40((char *)this, (float *)&v15, 100.0, (int *)(this + 812));
      v5 = v18 - 40.0;
      v4 = 40.0;
      v18 = v5;
    }
    while ( v5 > 0.0 );
  }
  return sub_102375F0(v7);
}
