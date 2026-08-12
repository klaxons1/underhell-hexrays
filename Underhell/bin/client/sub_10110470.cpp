int __thiscall sub_10110470(int this, int a2, char a3)
{
  int result; // eax

  result = a2;
  *(_DWORD *)(this + 4) = a2;
  *(_BYTE *)(this + 28) = a3;
  return result;
}
