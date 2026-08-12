int __thiscall sub_100982C0(int this, char *Src, int *a3)
{
  int result; // eax

  sub_10068030(this + 4172, (int)a3);
  sub_10068180(a3);
  sub_10097590((_DWORD *)(this + 4340), Src, strlen(Src));
  result = dword_106B31C8;
  *(float *)(this + 4368) = *(float *)(dword_106B31C8 + 12);
  return result;
}
