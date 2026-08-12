int __thiscall sub_10173EB0(int *this, int a2)
{
  float *v3; // edi
  float *v4; // ebx

  v3 = (float *)(this + 8);
  v4 = (float *)(this + 3);
  ((void (__thiscall *)(int (__stdcall ***)(char), int *, int, int, int *))(*off_103DFD80)[3])(
    off_103DFD80,
    this + 3,
    this[6],
    this[7],
    this + 8);
  return sub_10173D80(v4, v3, this[6], this[7]);
}
