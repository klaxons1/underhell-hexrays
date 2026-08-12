int __thiscall sub_101F6FE0(int this, int a2, int a3, int a4)
{
  int result; // eax

  *(float *)(this + 48) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 16))(dword_1047CA80);
  result = a3;
  *(float *)(this + 56) = 0.0;
  *(_DWORD *)(this + 16) = a3;
  *(_DWORD *)(this + 20) = a4;
  *(_BYTE *)(this + 60) = 0;
  return result;
}
