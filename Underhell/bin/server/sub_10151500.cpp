int __thiscall sub_10151500(_BYTE *this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 100))(this);
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    this[225] = 0;
  }
  sub_10112C00((int)(this + 320), 0);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *(const char **)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  return (*(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 104))(this, v3);
}
