int __thiscall sub_102621A0(_DWORD *this, char *String1)
{
  int v3; // edi
  int v4; // ecx
  const char *v5; // eax

  v3 = 0;
  if ( (int)this[68] <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(v3 + this[65]));
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4);
    if ( !_stricmp(String1, v5) )
      break;
    if ( ++v3 >= this[68] )
      return -1;
  }
  return v3;
}
