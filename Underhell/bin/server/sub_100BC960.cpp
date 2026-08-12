void __thiscall sub_100BC960(_DWORD *this, char *String1)
{
  const char *v3; // eax

  v3 = (const char *)(*(int (__thiscall **)(_DWORD *))(this[2] + 4))(this + 2);
  if ( !_stricmp(String1, v3) )
    sub_100BC7D0((int)this);
}
