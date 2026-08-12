int __thiscall sub_1021A460(int this, int a2, char a3)
{
  int result; // eax

  if ( *(_BYTE *)(this + 4) )
    return (*(int (__cdecl **)(_DWORD, int, _DWORD, int, char *, int))(g_pVCR + 68))(
             *(_DWORD *)(this + 8),
             a2,
             0,
             4,
             &a3,
             4);
  return result;
}
