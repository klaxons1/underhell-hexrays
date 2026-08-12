void __thiscall sub_10329170(_DWORD *this)
{
  bool v2; // zf
  const char *v3; // eax
  const char *v4; // [esp+4h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v2 = this[581] == 3;
  Buffer[0] = 0;
  if ( v2 )
    v3 = (const char *)(*(int (__thiscall **)(_DWORD *, const char *))(*this + 2228))(this, "Combat");
  else
    v3 = (const char *)(*(int (__thiscall **)(_DWORD *, const char *))(*this + 2228))(this, "Idle");
  sub_1001E280(Buffer, "%s.%s", v3, v4);
  *((_BYTE *)this + 3788) = 1;
  sub_1023C380(this, (int)Buffer, 0.0, 0);
}
