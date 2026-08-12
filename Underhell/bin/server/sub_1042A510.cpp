size_t __thiscall sub_1042A510(_BYTE *this, int a2, int a3, int a4, const char *Src)
{
  signed int v6; // esi
  void *v7; // esp
  char *v8; // eax
  signed int i; // ecx
  char v10; // dl
  size_t result; // eax
  size_t v12; // esi
  char v13[12]; // [esp+0h] [ebp-Ch] BYREF

  v6 = strlen(Src);
  v7 = alloca(2 * v6 + 2);
  v8 = v13;
  for ( i = 0; i <= v6; ++v8 )
  {
    v10 = Src[i];
    if ( v10 == 34 || this[17] && v10 == 92 )
      *v8++ = 92;
    *v8 = Src[i++];
  }
  result = strlen(v13);
  v12 = result;
  if ( a2 )
    result = (*(int (__thiscall **)(int, char *, size_t, int))(*(_DWORD *)a2 + 4))(a2, v13, result, a3);
  if ( a4 )
    return sub_1042DD00(v13, v12);
  return result;
}
