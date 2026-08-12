int __cdecl sub_1011D070(const void *a1, const void *a2)
{
  return _stricmp(
           (const char *)(*(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)),
           (const char *)(*(_DWORD *)a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)));
}
