char __thiscall sub_10081B40(_DWORD *this, int a2, float a3, float a4)
{
  float v4; // edx
  double v5; // st7
  float *v7; // ecx
  bool v8; // zf
  double v9; // st7
  double v10; // st6
  double v11; // st7
  float v13; // [esp+0h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-14h]
  int v15; // [esp+10h] [ebp-Ch] BYREF
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]

  v4 = *(float *)(a2 + 4);
  v5 = *(float *)a2;
  v15 = *(int *)a2;
  v17 = *(float *)(a2 + 8);
  v7 = (float *)(this[1] + 716);
  v8 = this[3] == 0;
  v16 = v4;
  v9 = v5 - *v7;
  if ( v8 )
  {
    *(float *)&v15 = v9;
    v10 = *(float *)(a2 + 4) - v7[1];
    v16 = v10;
    v17 = 0.0;
    v14 = v9 * v9 + v10 * v10;
    v11 = off_10689708(v14);
    if ( 0.0 == v11 )
    {
      v16 = 0.0;
      *(float *)&v15 = 0.0;
    }
    else
    {
      *(float *)&v15 = *(float *)&v15 * (1.0 / v11);
      v16 = 1.0 / v11 * v16;
    }
  }
  else
  {
    *(float *)&v15 = v9;
    v16 = *(float *)(a2 + 4) - v7[1];
    v17 = *(float *)(a2 + 8) - v7[2];
    v11 = off_10689714();
  }
  v13 = v11;
  return sub_10081A70((int)this, (float *)&v15, v13, a3, a4);
}
