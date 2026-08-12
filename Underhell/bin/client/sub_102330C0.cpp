int __cdecl sub_102330C0(UUID *Uuid, char *Source, unsigned int a3)
{
  unsigned int v3; // edi
  void *v4; // esp
  unsigned __int8 *v5; // esi
  int i; // edi
  char j; // al
  int result; // eax
  char v9[12]; // [esp+0h] [ebp-Ch] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = strlen(Source);
  v4 = alloca(v3 + 1);
  v5 = (unsigned __int8 *)v9;
  sub_102282F0(v9, Source, v3 + 1);
  for ( i = v3 - 1; i >= 0; --i )
  {
    if ( !isspace(v9[i]) )
      break;
  }
  v9[i + 1] = 0;
  for ( j = v9[0]; j; j = *++v5 )
  {
    if ( !isspace(j) )
      break;
  }
  if ( !UuidFromStringA(v5, Uuid) )
    return 1;
  result = 0;
  Uuid->Data1 = 0;
  *(_DWORD *)&Uuid->Data2 = 0;
  *(_DWORD *)Uuid->Data4 = 0;
  *(_DWORD *)&Uuid->Data4[4] = 0;
  return result;
}
