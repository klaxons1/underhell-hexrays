BOOL __thiscall sub_1010A600(int this, const char *a2, const char *a3)
{
  return *(_BYTE *)(this + 20) && ((*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 || !strcmp(a2, a3));
}
