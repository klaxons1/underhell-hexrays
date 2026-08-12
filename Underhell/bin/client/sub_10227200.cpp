int __thiscall sub_10227200(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a3;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_BYTE *)(a3 + 16) = this[20] >= 0;
  return result;
}
