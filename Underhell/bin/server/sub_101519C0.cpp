int __thiscall sub_101519C0(char *this)
{
  void *v2; // edi
  _DWORD *v3; // ecx
  const char *v4; // eax
  char v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = this + 808;
  if ( this[84] )
  {
    this[88] |= 1u;
  }
  else
  {
    v3 = (_DWORD *)*((_DWORD *)this + 6);
    if ( v3 )
    {
      *v3 |= 0x101u;
      *(_WORD *)(sub_10153460(v3) + 2) = 0;
    }
  }
  memset(v2, 0, 0xFFu);
  v4 = *(const char **)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)this + 28))(this, v6);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, v4);
  return nullsub_4(this);
}
