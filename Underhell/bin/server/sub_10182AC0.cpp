char __thiscall sub_10182AC0(_DWORD *this, char *Str, char *String)
{
  const char *v3; // ebx
  int v5; // esi
  _DWORD *i; // eax
  int v8; // eax
  _BYTE v9[128]; // [esp+Ch] [ebp-80h] BYREF

  v3 = String;
  if ( sub_100EBE90((int)this, Str, String) )
    return 0;
  v5 = 0;
  for ( i = this + 202; *i; ++i )
  {
    if ( ++v5 >= 32 )
      return 0;
  }
  sub_1025F5E0(Str, v9);
  this[v5 + 202] = *sub_10162BE0(&Str, v9);
  v8 = atoi(v3);
  this[v5 + 234] = v8;
  if ( v8 < 1 )
    v8 = 1;
  this[v5 + 234] = v8;
  return 1;
}
