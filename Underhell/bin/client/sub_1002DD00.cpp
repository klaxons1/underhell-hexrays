int __thiscall sub_1002DD00(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int result; // eax

  v2 = *(unsigned __int16 *)(this + 1660);
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 1648);
    do
    {
      v4 = 8 * (unsigned __int16)v2;
      (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(v3 + v4) + 8) + 4))(*(_DWORD *)(v3 + v4) + 8);
      v3 = *(_DWORD *)(this + 1648);
      v2 = *(unsigned __int16 *)(v3 + v4 + 6);
    }
    while ( v2 != 0xFFFF );
  }
  sub_100EC500(this + 1648);
  if ( *(int *)(this + 1656) >= 0 )
  {
    if ( *(_DWORD *)(this + 1648) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1648));
      *(_DWORD *)(this + 1648) = 0;
    }
    *(_DWORD *)(this + 1652) = 0;
  }
  result = *(_DWORD *)(this + 1648);
  *(_WORD *)(this + 1664) = -1;
  *(_WORD *)(this + 1668) = -1;
  *(_DWORD *)(this + 1672) = result;
  return result;
}
