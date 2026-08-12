int __thiscall sub_10131530(_DWORD *this)
{
  const char *v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  j_nullsub_4(this);
  sub_100EAB80(this, 16);
  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v4);
  if ( !v2 )
    v2 = String;
  return (*(int (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, v2);
}
