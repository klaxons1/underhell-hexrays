char __thiscall sub_10027000(_DWORD **this)
{
  int v2; // eax
  _BYTE v4[12]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *))(*this[298] + 8))(this[298]);
  sub_10037BA0(v2);
  sub_10037CA0(&flt_1045924C);
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(*this[298] + 12))(this[298], v4, v5);
  sub_1008FC00(v4, v5);
  return sub_1000F6C0((int)this, 8);
}
