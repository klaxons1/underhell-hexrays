int __thiscall sub_100B0D20(unsigned __int16 *this)
{
  unsigned __int16 *v1; // esi
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // eax
  int result; // eax

  v1 = this + 6;
  v2 = this[12];
  if ( v2 != 0xFFFF )
  {
    do
    {
      v3 = *(unsigned __int16 *)(*(_DWORD *)v1 + 8 * (unsigned __int16)v2 + 6);
      v4 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)v1 + 8 * (unsigned __int16)v2);
      if ( v4 )
        (**v4)(v4, 1);
      LOWORD(v2) = v3;
    }
    while ( v3 != 0xFFFF );
  }
  sub_100EC500(v1);
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
