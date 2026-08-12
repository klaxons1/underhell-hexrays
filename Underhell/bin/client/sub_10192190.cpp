int __thiscall sub_10192190(float *this, int a2)
{
  double v4; // st7
  float *v5; // edi
  float *v6; // ecx
  char v7; // bl
  double v8; // st7
  int (__thiscall *v9)(float *); // edx
  float *v10; // esi
  float *v11; // eax
  int v12[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v13[3]; // [esp+48h] [ebp-24h] BYREF
  float v14; // [esp+54h] [ebp-18h]
  float v15; // [esp+58h] [ebp-14h]
  float v16; // [esp+5Ch] [ebp-10h]
  float v17; // [esp+60h] [ebp-Ch]
  float v18; // [esp+64h] [ebp-8h]
  float v19; // [esp+68h] [ebp-4h]

  if ( *((float *)off_103DC81C + 4) <= 0.0 )
    return 0;
  v4 = this[302] + this[300];
  v5 = this - 1;
  v6 = this - 1;
  if ( v4 <= *((float *)off_103DC81C + 3) )
  {
    sub_10192140(v6);
    v7 = 1;
  }
  else
  {
    sub_101920E0(v6);
    v7 = 0;
  }
  v19 = v4;
  v17 = v4;
  if ( v7 )
    v8 = this[301];
  else
    v8 = v4 * (this[301] - this[301] * 0.1) + this[301] * 0.1;
  v18 = v8;
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)v5 + 36);
  *(float *)v13 = 1.0;
  v10 = this + 303;
  *(float *)&v13[1] = 1.0;
  *(float *)&v13[2] = 1.0;
  v14 = *v10 * 2.0;
  v15 = v10[1] * 2.0;
  v16 = 2.0 * v10[2];
  v11 = (float *)v9(v5);
  *(float *)v12 = *v11 + v14;
  *(float *)&v12[1] = v11[1] + v15;
  *(float *)&v12[2] = v11[2] + v16;
  sub_1008DCF0(
    (float *)v12,
    v10,
    v18,
    v18,
    1.0,
    v17,
    v17,
    1.0,
    0.0,
    0.0,
    (float *)v13,
    0.000099999997,
    (int)"effects/combinemuzzle2_nocull",
    0);
  if ( v7 )
    sub_10191B90(v5, v19);
  else
    sub_10191E20(v5, v19);
  return 1;
}
