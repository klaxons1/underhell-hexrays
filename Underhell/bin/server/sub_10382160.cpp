int __thiscall sub_10382160(void *this, int a2)
{
  int v3; // eax
  int v5; // [esp-4h] [ebp-64h]
  _BYTE v6[80]; // [esp+10h] [ebp-50h] BYREF

  v5 = sub_10280AC0();
  v3 = sub_10280AC0();
  sub_10248110((int)v6, v3, v5, 25.0, 1, 0);
  return (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 1024))(this, v6);
}
