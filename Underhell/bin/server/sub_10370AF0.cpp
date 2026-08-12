void __cdecl sub_10370AF0(int a1, int *a2, float a3)
{
  float *v4; // ebx
  float *v5; // eax
  int (__thiscall *v6)(int *); // edx
  float *v7; // eax
  double v8; // st7
  _DWORD v9[20]; // [esp+1Ch] [ebp-80h] BYREF
  int v10[3]; // [esp+6Ch] [ebp-30h] BYREF
  int v11[3]; // [esp+78h] [ebp-24h] BYREF
  float v12; // [esp+84h] [ebp-18h]
  float v13; // [esp+88h] [ebp-14h]
  float v14; // [esp+8Ch] [ebp-10h]
  float v15; // [esp+90h] [ebp-Ch]
  float v16; // [esp+94h] [ebp-8h]
  float v17; // [esp+98h] [ebp-4h]
  int v18; // [esp+A4h] [ebp+8h]

  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  v5 = (float *)(*(int (__thiscall **)(int *))(*a2 + 576))(a2);
  v15 = *v5 - *v4;
  v16 = v5[1] - v4[1];
  v17 = v5[2] - v4[2];
  off_10689714();
  v12 = (double)sub_10219A30() * 0.000030518509 * 64.0 - 32.0;
  v13 = (double)sub_10219A30() * 0.000030518509 * 64.0 - 32.0;
  v18 = sub_10219A30();
  v6 = *(int (__thiscall **)(int *))(*a2 + 576);
  v14 = (double)v18 * 0.000030518509 * 64.0 - 32.0;
  v7 = (float *)v6(a2);
  *(float *)v11 = *v7 + v12;
  *(float *)&v11[1] = v7[1] + v13;
  *(float *)&v11[2] = v7[2] + v14;
  v8 = sub_10247D70(75.0, 700.0);
  *(float *)v10 = v15 * v8;
  *(float *)&v10[1] = v16 * v8;
  *(float *)&v10[2] = v8 * v17;
  sub_102487B0((int)v9, a1, a1, (float *)v10, (float *)v11, a3, 128, 0, 0);
  sub_100D9E70(a2, (int)a2, v9);
}
