int __thiscall sub_100FD320(int this, int a2)
{
  bool v2; // al
  float v4; // [esp+0h] [ebp-4h]

  v2 = *(_BYTE *)(this + 840) == 0;
  v4 = *(float *)(this + 108);
  *(_BYTE *)(this + 856) = 0;
  *(_BYTE *)(this + 840) = v2;
  return sub_100FD1D0(this, v4);
}
