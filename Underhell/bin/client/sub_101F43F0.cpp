int __thiscall sub_101F43F0(int this, int a2)
{
  int result; // eax
  _BYTE v4[8]; // [esp+8h] [ebp-18h] BYREF
  float v5; // [esp+10h] [ebp-10h]
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  sub_10235920(a2);
  result = sub_10235460(v6, v4, a2, *(_DWORD *)(this + 1084));
  *(_BYTE *)(this + 2648) = 0;
  *(float *)(this + 2636) = 100.0;
  *(float *)(this + 2640) = 0.0;
  *(float *)(this + 2644) = v5;
  return result;
}
