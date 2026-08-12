char *__cdecl sub_10233040(UUID *Uuid, char *StringUuid, size_t Count)
{
  char *v3; // esi
  char *result; // eax

  v3 = StringUuid;
  *StringUuid = 0;
  StringUuid = 0;
  UuidToStringA(Uuid, (RPC_CSTR *)&StringUuid);
  result = StringUuid;
  if ( StringUuid )
  {
    if ( *StringUuid )
    {
      sub_102282F0(v3, StringUuid, Count);
      return (char *)RpcStringFreeA((RPC_CSTR *)&StringUuid);
    }
  }
  return result;
}
