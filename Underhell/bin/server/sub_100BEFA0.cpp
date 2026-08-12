char __thiscall sub_100BEFA0(void *this, char *String1, int a3, int a4)
{
  int v5; // eax
  char v6; // bl
  _BYTE v8[48]; // [esp+8h] [ebp-30h] BYREF

  v5 = sub_100BEF30((int)this, String1);
  v6 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 796))(this, v5, v8);
  sub_10421A90(v8, a4);
  sub_10421CE0(v8, 3, a3);
  return v6;
}
