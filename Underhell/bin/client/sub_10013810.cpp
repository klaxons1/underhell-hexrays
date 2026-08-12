int __thiscall sub_10013810(int this, int a2, float *a3, float *a4, int a5, int a6, float *a7)
{
  int result; // eax

  sub_100131D0((_DWORD *)this);
  *a3 = *(float *)(this + 4320);
  a3[1] = *(float *)(this + 4324);
  a3[2] = *(float *)(this + 4328);
  *a4 = *(float *)(this + 4332);
  a4[1] = *(float *)(this + 4336);
  a4[2] = *(float *)(this + 4340);
  *a7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 952))(this);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 52))(a2, a5, a6);
  sub_100128E0((_BYTE *)this, (int)a4);
  *a4 = *a4 + *(float *)(this + 3568);
  a4[1] = *(float *)(this + 3572) + a4[1];
  a4[2] = *(float *)(this + 3576) + a4[2];
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC);
  if ( !(_BYTE)result )
  {
    ((void (__thiscall *)(void ***))(*off_103E77E8)[7])(off_103E77E8);
    return ((int (__stdcall *)(float *, float *, _DWORD))(*off_103E77E8)[8])(a3, a4, 1.0);
  }
  return result;
}
