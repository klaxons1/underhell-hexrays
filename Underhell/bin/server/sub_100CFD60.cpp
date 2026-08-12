int __thiscall sub_100CFD60(void *this, int a2, int a3)
{
  _BYTE v5[48]; // [esp+4h] [ebp-90h] BYREF
  _BYTE v6[48]; // [esp+34h] [ebp-60h] BYREF
  _BYTE v7[48]; // [esp+64h] [ebp-30h] BYREF

  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 192))(a2, v6);
  sub_10424F80(v6, v5);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 192))(a3, v7);
  return sub_10421E30(v5, v7, this);
}
