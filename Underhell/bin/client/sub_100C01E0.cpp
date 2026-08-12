int __thiscall sub_100C01E0(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  _DWORD v6[11]; // [esp+4h] [ebp-2Ch] BYREF

  memset(v6, 0, sizeof(v6));
  v6[1] = this[1];
  v4 = this[3];
  v6[5] = this;
  v6[3] = v4;
  v6[0] = a2;
  v6[2] = a3;
  v6[9] = 0xFFFF;
  v6[4] = sub_100BF920;
  v6[7] = 0;
  v6[6] = -1;
  v6[8] = "GAME";
  return (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *))(*(_DWORD *)dword_10413188 + 148))(
           dword_10413188,
           v6,
           1,
           this + 5);
}
