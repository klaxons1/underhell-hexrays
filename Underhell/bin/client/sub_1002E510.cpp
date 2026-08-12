int __cdecl sub_1002E510(char a1, char a2, int a3)
{
  int result; // eax
  _DWORD v4[2]; // [esp+0h] [ebp-8h] BYREF

  v4[0] = dword_10403940;
  v4[1] = dword_10403944;
  sub_100F9FF0(dword_104038F0, v4);
  result = a3;
  LOBYTE(dword_10403940) = a1;
  BYTE1(dword_10403940) = a2;
  dword_10403944 = a3;
  return result;
}
