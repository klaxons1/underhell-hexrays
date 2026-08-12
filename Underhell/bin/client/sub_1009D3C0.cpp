int __thiscall sub_1009D3C0(int this)
{
  int v2; // [esp+0h] [ebp-8h]

  *(_BYTE *)(this + 4) = 1;
  *(float *)(this + 20) = 1.0;
  sub_10229600("r_flashlightscissor");
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "0");
}
