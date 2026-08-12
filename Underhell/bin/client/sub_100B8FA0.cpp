int __thiscall sub_100B8FA0(_DWORD **this)
{
  _BYTE v3[4]; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  nullsub_4();
  sub_102361D0(&v4, &v6);
  (*(void (__thiscall **)(_DWORD *, int *, _BYTE *))(*this[51] + 784))(this[51], &v5, v3);
  sub_10236200(0, 0, v5, v6);
  return sub_10236200(v5 + 2, 0, v4 - v5 - 2, v6);
}
