int __thiscall sub_1039DBE0(int this, int a2, int a3, int a4, float *a5, float *a6)
{
  if ( *(_BYTE *)(this + 28) )
    return 0;
  *a5 = *(float *)(this + 16);
  a5[1] = *(float *)(this + 20);
  a5[2] = *(float *)(this + 24);
  *a6 = *(float *)(this + 4);
  a6[1] = *(float *)(this + 8);
  a6[2] = *(float *)(this + 12);
  return 1;
}
