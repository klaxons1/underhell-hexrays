int __thiscall sub_10174720(int this, int a2)
{
  float *v3; // edi
  float *v4; // ebx

  v3 = (float *)(this + 24);
  v4 = (float *)(this + 12);
  ((void (__thiscall *)(void ***, int, int, _DWORD, _DWORD, int, int))(*off_103E9C2C)[23])(
    off_103E9C2C,
    this + 12,
    this + 24,
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 48),
    (int)((double)*(int *)(this + 40) * 0.2),
    (int)(*(float *)(this + 44) * 100.0));
  return sub_101745A0(
           *(_DWORD *)(this + 36),
           v4,
           v3,
           *(_DWORD *)(this + 40),
           *(float *)(this + 44),
           *(_DWORD *)(this + 48));
}
