_DWORD *__usercall sub_10286F10@<eax>(int a1@<ecx>, int a2@<edi>)
{
  _DWORD *result; // eax
  const char *v4; // esi

  result = sub_102421D0(a1, a2);
  v4 = *(const char **)(a1 + 920);
  if ( v4 )
    return (_DWORD *)sub_100E8220(a2, v4);
  return result;
}
