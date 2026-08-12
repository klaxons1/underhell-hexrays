void __thiscall sub_1010ECE0(float *this, int a2)
{
  int v3; // edi
  int v4; // eax
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st7
  float v13; // [esp+Ch] [ebp-24h]
  float v14[3]; // [esp+18h] [ebp-18h] BYREF
  float v15[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)dword_10413178;
  v4 = (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)(a2 + 4) + 36))(a2 + 4, v14, v15);
  (*(void (__thiscall **)(int, int))(v3 + 24))(dword_10413178, v4);
  v5 = (v15[1] - v14[1]) * 0.5;
  v6 = v5 * v5;
  v7 = (v15[0] - v14[0]) * 0.5;
  v8 = v6;
  v9 = (v15[2] - v14[2]) * 0.5;
  v13 = v7 * v7 + v8 + v9 * v9;
  v10 = off_103EDFE0(v13);
  this[186] = v10;
  v11 = -v10;
  this[177] = v11;
  this[178] = v11;
  this[179] = v11;
  v12 = this[186];
  this[180] = this[186];
  this[181] = v12;
  this[182] = v12;
}
