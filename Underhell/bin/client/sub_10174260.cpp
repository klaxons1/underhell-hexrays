int __thiscall sub_10174260(int this, int a2)
{
  float *v3; // edi
  float v5; // [esp+20h] [ebp-18h]

  v3 = (float *)(this + 12);
  v5 = (double)*(int *)(this + 32) * 0.00392156862745098;
  ((void (__stdcall *)(int, float *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, float *))(*off_103E9C2C)[20])(
    this + 12,
    &flt_10459240,
    *(float *)(this + 28),
    *(_DWORD *)(this + 24),
    5,
    0,
    LODWORD(v5),
    0.0,
    256,
    &flt_10459240);
  return sub_10174130(*(_DWORD *)(this + 24), v3, *(float *)(this + 28), *(_DWORD *)(this + 32));
}
