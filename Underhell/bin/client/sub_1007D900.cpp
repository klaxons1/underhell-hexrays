BOOL __thiscall sub_1007D900(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = this[3] + 16 * a2;
  return *(_DWORD *)(v3 + 8) == a3 && (*(_WORD *)(v3 + 6) || *(_DWORD *)(v3 + 12));
}
