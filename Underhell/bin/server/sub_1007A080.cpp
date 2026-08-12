void __thiscall sub_1007A080(_DWORD *this, float *a2, float *a3, int a4, int a5, int a6)
{
  float *v7; // eax
  int v8; // eax
  double v9; // st4
  double v10; // st5
  float *v11; // [esp-8h] [ebp-68h]
  float v12; // [esp+0h] [ebp-60h]
  _BYTE v13[12]; // [esp+Ch] [ebp-54h] BYREF
  float v14; // [esp+18h] [ebp-48h]
  float v15; // [esp+1Ch] [ebp-44h]
  float v16; // [esp+20h] [ebp-40h]
  float v17; // [esp+38h] [ebp-28h]
  int v18; // [esp+58h] [ebp-8h]
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  sub_10079F00((int)this, (int)&savedregs, (int)a3, (int)this, a2, a3, v7, v11, a4, (int)v13);
  if ( v17 >= 1.0 )
  {
    *(float *)(a6 + 4) = *a3;
    *(float *)(a6 + 8) = a3[1];
    *(float *)(a6 + 12) = a3[2];
  }
  else
  {
    v8 = v18;
    if ( v18 )
    {
      if ( a5 == v18 )
      {
        *(float *)(a6 + 4) = v14;
        *(float *)(a6 + 8) = v15;
        *(float *)(a6 + 12) = v16;
        return;
      }
      *(_DWORD *)(a6 + 28) = v18;
      *(float *)(a6 + 16) = flt_106F1CA8;
      *(float *)(a6 + 20) = flt_106F1CAC;
      *(float *)(a6 + 24) = flt_106F1CB0;
      *(_DWORD *)a6 = sub_10079CE0(v8);
    }
    v9 = a3[1] - v15;
    v10 = a3[2] - v16;
    v12 = v10 * v10 + v9 * v9 + (*a3 - v14) * (*a3 - v14);
    *(float *)(a6 + 36) = off_10689708(v12);
    *(float *)(a6 + 4) = v14;
    *(float *)(a6 + 8) = v15;
    *(float *)(a6 + 12) = v16;
  }
}
