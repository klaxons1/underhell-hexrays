int __thiscall sub_102C7450(int this)
{
  int v2; // eax
  void (__thiscall *v3)(int); // edx

  sub_1023C380((_DWORD *)this, (int)"SuitRecharge.Start", 0.0, 0);
  v2 = sub_100BDF40(this, "idle");
  sub_100C3330(this, v2);
  sub_102C73D0((_DWORD *)this, (int)(double)*(int *)(this + 1148));
  v3 = *(void (__thiscall **)(int))(*(_DWORD *)this + 728);
  *(float *)(this + 1272) = (float)*(int *)(this + 1128);
  *(_DWORD *)(this + 1140) = 0;
  *(_DWORD *)(this + 1124) = 0;
  v3(this);
  return sub_100EC3F0((_DWORD *)this, (int)nullsub_4, 0.0, 0);
}
