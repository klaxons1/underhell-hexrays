char *__thiscall sub_1027EE00(int *this, char *Source, int (__thiscall ***a3)(_DWORD))
{
  _DWORD *v3; // esi
  int v4; // edi

  v3 = this + 69;
  v4 = 36 * sub_1027E9A0(this + 69, this[72]);
  sub_102393F0((_DWORD *)(v4 + *v3), a3);
  return strncpy((char *)(v4 + *v3 + 4), Source, 0x20u);
}
