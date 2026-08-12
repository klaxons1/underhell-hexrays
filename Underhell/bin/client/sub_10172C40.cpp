int __thiscall sub_10172C40(int this, int a2)
{
  float *v3; // edi
  float *v4; // ebx

  v3 = (float *)(this + 36);
  v4 = (float *)(this + 24);
  ((void (__thiscall *)(void ***, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*off_103E9C2C)[29])(
    off_103E9C2C,
    *(_DWORD *)(this + 48),
    *(_DWORD *)(this + 52),
    this + 12,
    this + 24,
    this + 36,
    *(_DWORD *)(this + 56),
    *(_DWORD *)(this + 60));
  return sub_10172A30(
           *(_DWORD *)(this + 48),
           v4,
           v3,
           (float *)(this + 12),
           *(_DWORD *)(this + 56) != 0,
           *(_DWORD *)(this + 52),
           *(_DWORD *)(this + 60));
}
