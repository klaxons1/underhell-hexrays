int __thiscall sub_1027CE60(void *this)
{
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 8))(this, &v4, &v3);
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 16))(this, v4, v3);
}
