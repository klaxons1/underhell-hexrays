char __thiscall sub_100BCCA0(void *this, int a2, int a3, int a4)
{
  char v4; // bl
  _BYTE v6[48]; // [esp+4h] [ebp-30h] BYREF

  v4 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 796))(this, a2, v6);
  sub_10421A90(v6, a4);
  sub_10421CE0(v6, 3, a3);
  return v4;
}
