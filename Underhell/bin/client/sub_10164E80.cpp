int __thiscall sub_10164E80(float *this, int a2)
{
  float *v2; // edi
  float *v3; // ebx

  v2 = this + 6;
  v3 = this + 3;
  ((void (__thiscall *)(int (__stdcall ***)(char), float *, float *))(*off_103DFD80)[8])(
    off_103DFD80,
    this + 3,
    this + 6);
  return sub_10164D50(v3, v2);
}
