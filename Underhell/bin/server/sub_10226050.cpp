int __thiscall sub_10226050(_DWORD *this, char *String1)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int result; // eax

  if ( sub_1041CB40(this[244]) != 1 && _stricmp(String1, "!self")
    || (v3 = this[382], v3 == -1)
    || (v4 = &off_1061BE18[4 * (this[382] & 0xFFF) + 1], v5 = v3 >> 12, off_1061BE18[4 * (this[382] & 0xFFF) + 2] != v5)
    || !*v4
    || (off_1061BE18[4 * (this[382] & 0xFFF) + 2] != v5 ? (v6 = 0) : (v6 = *v4),
        (result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 288))(v6)) == 0) )
  {
    result = (*(int (__thiscall **)(_DWORD *, char *, _DWORD, int, _DWORD))(*this + 900))(this, String1, 0, 1, 0);
    if ( result )
      return __RTDynamicCast(
               result,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseFlex `RTTI Type Descriptor',
               0);
  }
  return result;
}
