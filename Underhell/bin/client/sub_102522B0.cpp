int __thiscall sub_102522B0(void *this)
{
  int v2; // edi
  void *v3; // esp
  _BYTE v5[12]; // [esp+0h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 784))(this) + 1;
  v3 = alloca(v2);
  (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 780))(this, v5, v2);
  return sub_10227CC0(v5);
}
