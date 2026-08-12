int __thiscall sub_101A89B0(_WORD *this)
{
  _WORD *v1; // esi
  int result; // eax

  v1 = this + 6;
  sub_100EC500(this + 6);
  if ( *((int *)v1 + 2) >= 0 )
  {
    if ( *(_DWORD *)v1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)v1);
      *(_DWORD *)v1 = 0;
    }
    *((_DWORD *)v1 + 1) = 0;
  }
  result = *(_DWORD *)v1;
  v1[8] = -1;
  v1[10] = -1;
  *((_DWORD *)v1 + 6) = result;
  return result;
}
