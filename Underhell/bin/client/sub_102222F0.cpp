int __thiscall sub_102222F0(int this, int a2, int a3, float a4, int a5)
{
  int result; // eax

  sub_10220B80((float *)this, (float *)a2, a3, a4, 0.0, a5);
  *(_DWORD *)(this + 72) = a2;
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 6332) >> 2;
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 6076);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 6364) >> 2;
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 6108);
  result = *(_DWORD *)(a2 + 6356) >> 2;
  *(_DWORD *)(this + 96) = result;
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 6100);
  return result;
}
