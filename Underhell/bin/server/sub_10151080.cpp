void __thiscall sub_10151080(int this, float a2)
{
  double v3; // st5
  double v4; // rt1
  double v5; // st5
  double v6; // rt2
  double v7; // st5
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // rt2
  float v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h]

  v3 = (*(float *)(this + 828) - *(float *)(this + 816)) * a2 + *(float *)(this + 816);
  *(float *)&v13 = v3;
  v4 = v3;
  v5 = (*(float *)(this + 832) - *(float *)(this + 820)) * a2 + *(float *)(this + 820);
  *(float *)&v14 = v5;
  v6 = v5;
  v7 = (*(float *)(this + 836) - *(float *)(this + 824)) * a2 + *(float *)(this + 824);
  v8 = v6 - *(float *)(this + 720);
  v9 = v8 * v8;
  v10 = v4 - *(float *)(this + 716);
  v11 = v7 - *(float *)(this + 724);
  v12 = v10 * v10 + v9 + v11 * v11;
  if ( off_10689708(v12) > 0.001 )
  {
    *(float *)&v15 = v7;
    sub_10150C80((_DWORD *)this, v13, v14, v15, *(float *)(this + 108));
  }
}
