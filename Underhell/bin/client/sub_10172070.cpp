int __thiscall sub_10172070(int this, int a2)
{
  float *v3; // edi
  float *v4; // ebx

  v3 = (float *)(this + 24);
  v4 = (float *)(this + 12);
  ((void (__stdcall *)(int, int, _DWORD, _DWORD))(*off_103DFD80)[5])(
    this + 12,
    this + 24,
    *(float *)(this + 36),
    *(_DWORD *)(this + 40));
  return sub_10171F40(v4, v3, *(float *)(this + 36), *(_DWORD *)(this + 40));
}
