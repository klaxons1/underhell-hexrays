void __thiscall sub_1021A4F0(int this, int a2, const char *a3)
{
  if ( *(_BYTE *)(this + 4) )
    (*(void (__cdecl **)(_DWORD, int, _DWORD, int, const char *, unsigned int))(g_pVCR + 68))(
      *(_DWORD *)(this + 8),
      a2,
      0,
      1,
      a3,
      strlen(a3) + 1);
}
