char __thiscall sub_101F44F0(int this, float *a2, int a3)
{
  int v4; // edi
  int v6; // eax
  int v7; // [esp-4h] [ebp-18h]
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = this + 1068;
  if ( (unsigned __int16)sub_102356B0(this + 1068) == 0xFFFF )
    return 0;
  v7 = *(_DWORD *)(this + 1084);
  v6 = sub_102356B0(v4);
  sub_102355B0(v8, a3, v6, v7);
  sub_101ED860(v8, (float *)(this + 2652), a2);
  return 1;
}
