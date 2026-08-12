int __thiscall sub_10039B00(int *this)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  v3 = this[41];
  sub_1012D820(&v3);
  sub_10034EE0(this);
  return (*(int (__thiscall **)(int *, _DWORD))(*this + 440))(this, 0);
}
