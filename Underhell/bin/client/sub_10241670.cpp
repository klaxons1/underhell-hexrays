char __thiscall sub_10241670(void *this, _DWORD *a2, _DWORD *a3)
{
  char *v5; // eax
  const char **v6; // eax
  const char **v7; // esi
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, void *, _DWORD *, const char **); // ecx
  const char *v10; // [esp+8h] [ebp-8h] BYREF

  if ( !a2 )
    return 0;
  v5 = (char *)sub_10229A00(a3);
  v6 = sub_1023BD80(v5, a2);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( !v6[2] )
    return 0;
  v10 = v6[2];
  v8 = sub_1023CEC0((unsigned __int8 (__cdecl **)(int, int))&off_103FCF74, (int)&v10);
  if ( v8 == -1 )
    return 0;
  v9 = *(void (__thiscall ****)(_DWORD, void *, _DWORD *, const char **))(dword_103FCF78 + 24 * v8 + 20);
  if ( !v9 )
    return 0;
  (**v9)(v9, this, a3, v7);
  return 1;
}
