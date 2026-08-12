int __thiscall sub_101AE2A0(_DWORD *this)
{
  int result; // eax

  sub_1012CAB0((int)off_103E6EEC[0], "Battery", (int)sub_101AE270);
  result = (*(int (__thiscall **)(_DWORD *))(*(this - 95) + 768))(this - 95);
  this[12] = -1;
  this[13] = 0;
  return result;
}
