char __thiscall sub_10021EA0(void *this, char *Str, char *String)
{
  int v4; // ebx
  int v5; // edi
  char v7; // [esp+Fh] [ebp-1h]

  v7 = sub_100EBE90((int)this, Str, String);
  if ( v7 )
    return v7;
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1380))(this);
  v5 = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1384))(this) <= 0 )
    return v7;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD, char *, char *))(**(_DWORD **)(v4 + 4 * v5) + 20))(
             *(_DWORD *)(v4 + 4 * v5),
             Str,
             String) )
  {
    if ( ++v5 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1384))(this) )
      return v7;
  }
  return 1;
}
