char __thiscall sub_10252B60(void *this, int a2, int a3)
{
  (*(void (__thiscall **)(int, const char *, const char *, const char *, void *, _DWORD))(*(_DWORD *)a2 + 800))(
    a2,
    "replace",
    "#TextEntry_ReplaceText",
    "replace",
    this,
    0);
  (*(void (__thiscall **)(int, const char *, const char *, const char *, void *, _DWORD))(*(_DWORD *)a2 + 800))(
    a2,
    "append",
    "#TextEntry_AppendText",
    "append",
    this,
    0);
  (*(void (__thiscall **)(int, const char *, const char *, const char *, void *, _DWORD))(*(_DWORD *)a2 + 800))(
    a2,
    "prepend",
    "#TextEntry_PrependText",
    "prepend",
    this,
    0);
  return 1;
}
