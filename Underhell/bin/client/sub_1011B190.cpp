int __thiscall sub_1011B190(_DWORD *this, const char *a2)
{
  int v2; // ebx
  int v3; // esi
  const char *i; // edi
  const char *v6; // [esp+Ch] [ebp-4h]

  v2 = this[19];
  v3 = 0;
  if ( v2 <= 0 )
    return -1;
  v6 = (const char *)this[16];
  for ( i = v6; strcmp(i, a2); i += 40 )
  {
    if ( ++v3 >= v2 )
      return -1;
  }
  return *(_DWORD *)&v6[40 * v3 + 36];
}
