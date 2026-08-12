char __thiscall sub_101E61C0(int this)
{
  const char *v2; // eax
  char result; // al

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 164) + 4))(*(_DWORD *)(this + 164), 1);
  v2 = (const char *)(***(int (__thiscall ****)(_DWORD))(this + 164))(*(_DWORD *)(this + 164));
  result = (*(_BYTE *)(this + 524) ^ (2 * (_stricmp(v2, "on") == 0))) & 2;
  *(_BYTE *)(this + 524) ^= result;
  return result;
}
