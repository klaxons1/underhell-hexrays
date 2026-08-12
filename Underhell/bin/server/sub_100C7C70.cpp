char __thiscall sub_100C7C70(_DWORD *this, int a2, float *a3, float a4, int a5)
{
  int v7; // eax
  float *v8; // eax
  int v10; // [esp+Ch] [ebp-B0h]
  _BYTE v11[4]; // [esp+1Ch] [ebp-A0h] BYREF
  float v12; // [esp+20h] [ebp-9Ch]
  float v13; // [esp+24h] [ebp-98h]
  float v14; // [esp+28h] [ebp-94h]
  _BYTE v15[4]; // [esp+6Ch] [ebp-50h] BYREF
  float v16; // [esp+70h] [ebp-4Ch]
  float v17; // [esp+74h] [ebp-48h]
  float v18; // [esp+78h] [ebp-44h]
  float v19; // [esp+7Ch] [ebp-40h]
  float v20; // [esp+80h] [ebp-3Ch]
  float v21; // [esp+84h] [ebp-38h]
  int v22; // [esp+C4h] [ebp+8h]

  sub_10248110(a2, a2, 1.0, 0, 0);
  v12 = *a3;
  v13 = a3[1];
  v14 = a3[2];
  v22 = sub_101D0270(this, 0, v11, 3, 1);
  v10 = (*(int (__thiscall **)(_DWORD *))(this[80] + 8))(this + 80);
  v7 = (*(int (__thiscall **)(_DWORD *))(this[80] + 4))(this + 80);
  sub_100D5D10(v7, v10);
  sub_10219820(v22, 200.0, *(float *)(dword_106B31C8 + 12), a4, a5);
  sub_10248110(a2, a2, 10000.0, 0x400000, 0);
  v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  v19 = *v8;
  v20 = v8[1];
  v21 = v8[2];
  v16 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  sub_100D9E70(v15);
  return 1;
}
