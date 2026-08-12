void __stdcall sub_101F2AF0(_DWORD *a1)
{
  _DWORD *v1; // esi

  sub_101F20A0(a1, 1);
  if ( *a1 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 320))(*a1) )
  {
    v1 = (_DWORD *)(*a1 + 4008);
    *(_WORD *)(*a1 + 2138) = 0;
    if ( *v1 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*(v1 - 1002) + 1628))(v1 - 1002, v1);
      *v1 = 0;
    }
  }
}
