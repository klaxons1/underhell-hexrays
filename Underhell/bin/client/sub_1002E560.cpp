void *__thiscall sub_1002E560(void *this, char a2, char a3)
{
  void *result; // eax
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  v5[0] = dword_10403940;
  v5[1] = dword_10403944;
  sub_100F9FF0(dword_104038F0, v5);
  result = this;
  LOBYTE(dword_10403940) = a2;
  BYTE1(dword_10403940) = a3;
  dword_10403944 = 1;
  return result;
}
