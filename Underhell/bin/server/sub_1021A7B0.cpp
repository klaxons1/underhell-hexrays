int __thiscall sub_1021A7B0(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 4) )
  {
    *(_BYTE *)(this + 4) = 0;
    return (*(int (__cdecl **)(_DWORD))(g_pVCR + 80))(*(_DWORD *)(this + 8));
  }
  return result;
}
