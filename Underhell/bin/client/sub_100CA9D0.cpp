void *__thiscall sub_100CA9D0(int *this, int a2)
{
  int v3; // esi
  int v4; // eax

  v3 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a2 + 32))(a2, "hintmessage", Locale);
  v4 = ((int (__thiscall *)(int (__stdcall ***)(int, int, int), int, _DWORD))(*off_103E6DA4)[2])(off_103E6DA4, v3, 0);
  return sub_100C9DB0(this - 51, v4, v3);
}
