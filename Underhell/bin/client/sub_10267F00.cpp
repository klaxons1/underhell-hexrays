bool __cdecl sub_10267F00(_DWORD *a1, _DWORD *a2)
{
  const char *v2; // esi
  const char *v3; // eax

  v2 = (const char *)sub_1022B4C0(a1, "text", (int)Locale);
  v3 = (const char *)sub_1022B4C0(a2, "text", (int)Locale);
  return _stricmp(v2, v3) < 0;
}
