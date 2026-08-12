int __stdcall sub_10075EB0(int a1, int a2)
{
  _BYTE v3[4]; // [esp+0h] [ebp-28h] BYREF
  _BYTE v4[36]; // [esp+4h] [ebp-24h] BYREF

  sub_1011ACF0(a1);
  ((void (__thiscall *)(int (***)(), _BYTE *, int))(*off_103E466C)[7])(off_103E466C, v3, a2);
  ((void (__thiscall *)(int (***)()))(*off_103E466C)[8])(off_103E466C);
  return sub_1011A810(v4);
}
