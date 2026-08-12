_DWORD *__thiscall sub_10142E50(int this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  *(_BYTE *)(this + 440) = 1;
  result = sub_100748E0((_DWORD *)(this + 316), a2);
  *(_DWORD *)(this + 432) = a3;
  *(_DWORD *)(this + 436) = a4;
  return result;
}
