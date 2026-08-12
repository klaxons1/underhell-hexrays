int __thiscall sub_10218300(int this, float *a2, int a3, int a4)
{
  int v6; // [esp-8h] [ebp-34h]
  float v7[3]; // [esp+8h] [ebp-24h] BYREF
  float v8[3]; // [esp+14h] [ebp-18h] BYREF
  float v9[3]; // [esp+20h] [ebp-Ch] BYREF

  sub_101F89B0(a2, v8, v7);
  v6 = *(_DWORD *)(this + 44);
  v9[0] = (v7[0] + v8[0]) * 0.5 + *(float *)(this + 48);
  v9[1] = (v7[1] + v8[1]) * 0.5 + *(float *)(this + 52);
  v9[2] = (v7[2] + v8[2]) * 0.5 + *(float *)(this + 56);
  return sub_100F16D0(a2, v6, v9);
}
