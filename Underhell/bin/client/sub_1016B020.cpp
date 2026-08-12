int __thiscall sub_1016B020(int this, int a2)
{
  float *v3; // edi
  int v4; // eax
  float v6; // [esp+24h] [ebp-18h]

  v3 = (float *)(this + 12);
  v6 = (double)*(int *)(this + 36) * 0.00392156862745098;
  v4 = ((int (__stdcall *)(int, float *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, float *))(*off_103E9C2C)[20])(
         this + 12,
         &flt_10459240,
         *(float *)(this + 28),
         *(_DWORD *)(this + 24),
         5,
         0,
         LODWORD(v6),
         *(float *)(this + 32),
         65792,
         &flt_10459240);
  if ( v4 )
    *(float *)(v4 + 2004) = 0.2;
  return sub_1016AED0(*(_DWORD *)(this + 24), v3, *(float *)(this + 32), *(float *)(this + 28), *(_DWORD *)(this + 36));
}
