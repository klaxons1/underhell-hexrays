int __thiscall sub_1015B030(int this, int a2)
{
  int result; // eax

  result = sub_100255C0((_BYTE *)this, a2);
  *(_DWORD *)(this + 2100) = *(_DWORD *)(this + 1960);
  return result;
}
