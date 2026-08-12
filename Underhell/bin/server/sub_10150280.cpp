int __thiscall sub_10150280(void *this)
{
  const char *v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v4);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_10112C00((int)this + 320, 1);
  nullsub_4(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 584))(this);
}
