int __thiscall sub_100362A0(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // eax
  int v6; // [esp-4h] [ebp-88h]
  char Buffer[64]; // [esp+8h] [ebp-7Ch] BYREF

  if ( this )
    v2 = this + 2;
  else
    v2 = 0;
  sub_100764F0(v2, 1, this + 279);
  v3 = this[275];
  sub_10228370(Buffer, 0x40u, "%s SaveData(original)", (char)"PostEntityPacketReceived");
  sub_101096C0(2, v3, 1, this, 0, 0, 0, 1, 0, 0);
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
  v4 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  return sub_1010AF80(Buffer, v4, v6);
}
