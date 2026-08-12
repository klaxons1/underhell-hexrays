int __thiscall sub_101B02E0(char *this, int a2, int a3, int a4)
{
  _BYTE v6[48]; // [esp+8h] [ebp-C0h] BYREF
  _BYTE v7[48]; // [esp+38h] [ebp-90h] BYREF
  _BYTE v8[48]; // [esp+68h] [ebp-60h] BYREF
  _BYTE v9[48]; // [esp+98h] [ebp-30h] BYREF

  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 192))(a2, v7);
  sub_10424F80(v7, v8);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 192))(a3, v9);
  sub_10421E30(v8, v9, this);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 192))(a2, v6);
  return sub_10421C60(a4, v6, this + 48);
}
