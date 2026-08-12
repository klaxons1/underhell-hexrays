char __thiscall sub_101826E0(_DWORD *this)
{
  const char *v2; // eax
  int v3; // edx
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, v2);
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v3, 0, 0);
  return sub_100EAB80(this, 32);
}
