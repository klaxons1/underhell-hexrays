int __thiscall sub_100C4100(int this)
{
  int i; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int result; // eax

  for ( i = *(unsigned __int16 *)(this + 264); i != 0xFFFF; i = *(unsigned __int16 *)(*(_DWORD *)(this + 252) + v5 + 6) )
  {
    v3 = (unsigned __int16)i;
    v4 = *(_DWORD *)(this + 252);
    v5 = 8 * v3;
    v6 = *(_DWORD *)(v5 + v4);
    if ( v6 )
    {
      sub_100C3D80(*(_DWORD **)(v5 + v4));
      sub_10034930(v6);
    }
  }
  sub_100EC500(this + 252);
  if ( *(int *)(this + 260) >= 0 )
  {
    if ( *(_DWORD *)(this + 252) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 252));
      *(_DWORD *)(this + 252) = 0;
    }
    *(_DWORD *)(this + 256) = 0;
  }
  result = *(_DWORD *)(this + 252);
  *(_WORD *)(this + 268) = -1;
  *(_WORD *)(this + 272) = -1;
  *(_DWORD *)(this + 276) = result;
  return result;
}
