int __thiscall sub_1021D9E0(void *this, char *Destination)
{
  char *v3; // eax
  size_t v5; // [esp-4h] [ebp-Ch]
  _BYTE v6[2]; // [esp+4h] [ebp-4h] BYREF
  unsigned __int16 v7; // [esp+6h] [ebp-2h]

  (*(void (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v6);
  v5 = v7;
  v3 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 44))(this);
  return sub_104299C0(Destination, v3, v5);
}
