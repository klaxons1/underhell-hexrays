int __thiscall sub_10185880(int this, int a2)
{
  double v3; // st7
  int result; // eax

  v3 = *(float *)(this + 6344);
  sub_1022A940("zoom", *(float *)(this + 6344));
  *(float *)(this + 6344) = v3;
  result = sub_1022A800("entity", *(_DWORD *)(this + 6336));
  *(_DWORD *)(this + 6336) = result;
  return result;
}
