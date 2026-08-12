bool __cdecl sub_100D8A50(int a1, int a2)
{
  const char *v2; // esi
  const char *v3; // eax

  v2 = (const char *)sub_10430F10(a2);
  v3 = (const char *)sub_10430F10(a1);
  return _stricmp(v3, v2) < 0;
}
