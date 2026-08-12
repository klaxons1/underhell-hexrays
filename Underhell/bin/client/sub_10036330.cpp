bool __thiscall sub_10036330(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  bool result; // al
  int v10; // [esp-4h] [ebp-94h]
  char Buffer[64]; // [esp+Ch] [ebp-84h] BYREF
  int v12; // [esp+8Bh] [ebp-5h]
  bool v13; // [esp+8Fh] [ebp-1h]

  v3 = this[275];
  v13 = a2 > 0;
  sub_10228370(Buffer, 0x40u, "%s SaveData(original)", (char)"PostNetworkDataReceived");
  sub_101096C0(0, v3, 1, this, 0, 0, 0, 1, 0, 0);
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
  v4 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  sub_1010AF80(Buffer, v4, v10);
  v5 = *(_DWORD *)(dword_10436AA4 + 48);
  LOBYTE(v12) = v5 >= 2;
  if ( v5 < 0 )
    LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2) == -v5;
  result = 0;
  if ( v13 )
  {
    v6 = this[275];
    v7 = v6 ? this[(a2 - 1) % 90 + 185] : 0;
    sub_101096C0(2, v7, 1, v6, 1, 1, v12, 0, 0, 0);
    v8 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
    if ( (int)sub_1010AF80(Locale, -1, v8) > 0 )
      return 1;
  }
  return result;
}
