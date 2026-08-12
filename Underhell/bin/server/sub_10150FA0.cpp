void __thiscall sub_10150FA0(int this, int a2, int a3, int a4, float a5)
{
  double v6; // st7
  double v7; // st5
  double v8; // rtt
  double v9; // st5
  double v10; // rt0
  double v11; // st5
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // rt0
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+0h] [ebp-14h]
  int v18; // [esp+8h] [ebp-Ch]
  int v19; // [esp+Ch] [ebp-8h]
  int v20; // [esp+10h] [ebp-4h]

  if ( a4 == 2 )
  {
    v6 = 1.0;
    if ( a5 <= 1.0 )
      v6 = a5;
    v7 = (*(float *)(this + 828) - *(float *)(this + 816)) * v6 + *(float *)(this + 816);
    *(float *)&v18 = v7;
    v8 = v7;
    v9 = (*(float *)(this + 832) - *(float *)(this + 820)) * v6 + *(float *)(this + 820);
    *(float *)&v19 = v9;
    v10 = v9;
    v11 = v6 * (*(float *)(this + 836) - *(float *)(this + 824)) + *(float *)(this + 824);
    *(float *)&v20 = v11;
    v12 = v10 - *(float *)(this + 720);
    v13 = v12 * v12;
    v14 = v8 - *(float *)(this + 716);
    v15 = v11 - *(float *)(this + 724);
    v16 = v14 * v14 + v13 + v15 * v15;
    v17 = off_10689708(v16) * 10.0;
    sub_10150C80((_DWORD *)this, v18, v19, v20, v17);
  }
}
