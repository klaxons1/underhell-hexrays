char __thiscall sub_100BF1E0(_DWORD *this, int a2, int a3, int a4)
{
  char v5; // bl
  _BYTE v7[48]; // [esp+8h] [ebp-90h] BYREF
  _BYTE v8[48]; // [esp+38h] [ebp-60h] BYREF
  _BYTE v9[48]; // [esp+68h] [ebp-30h] BYREF

  v5 = (*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*this + 796))(this, a2, v8);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10424F80(this + 125, v7);
  sub_10421E30(v7, v8, v9);
  sub_10421A90(v9, a4);
  sub_10421CE0(v9, 3, a3);
  return v5;
}
