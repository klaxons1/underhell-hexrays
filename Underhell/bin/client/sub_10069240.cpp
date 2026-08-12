int __stdcall sub_10069240(int a1)
{
  if ( *(_BYTE *)(a1 + 36) )
    return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413194 + 44))(
             *(_DWORD *)(a1 + 12),
             0.0,
             0,
             4,
             0.0);
  else
    return sub_101209D0(0, 6, *(_DWORD *)(a1 + 12));
}
