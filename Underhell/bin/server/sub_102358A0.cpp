int __thiscall sub_102358A0(int this)
{
  char *v2; // eax

  v2 = *(char **)(this + 12);
  if ( v2 && *v2 < 0 )
  {
    *(_DWORD *)v2 &= ~0x80u;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 292))(
      dword_106B31D0,
      *(_DWORD *)(this + 12),
      this + 16);
  }
  return *(__int16 *)(this + 24);
}
