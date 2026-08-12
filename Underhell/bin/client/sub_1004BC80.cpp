int __thiscall sub_1004BC80(int this, int a2)
{
  int result; // eax

  result = sub_100255C0((_BYTE *)this, a2);
  *(_DWORD *)(this + 2176) = *(_DWORD *)(this + 1800);
  return result;
}
