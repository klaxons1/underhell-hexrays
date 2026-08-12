int __thiscall sub_10164CF0(float *this, int a2)
{
  float *v2; // edi
  float *v3; // ebx

  v2 = this + 6;
  v3 = this + 3;
  ((void (__thiscall *)(int (__stdcall ***)(char), float *, float *))(*off_103DFD80)[6])(
    off_103DFD80,
    this + 3,
    this + 6);
  return sub_10164BF0(v3, v2);
}
