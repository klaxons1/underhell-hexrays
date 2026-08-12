void __thiscall sub_100772A0(int this)
{
  unsigned __int8 v2; // al
  unsigned __int8 i; // [esp+8h] [ebp-4h]

  v2 = sub_10076510(this);
  for ( i = v2; v2 != 0xFF; i = v2 )
  {
    sub_10184660(*(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v2 + 8));
    v2 = sub_100765B0((_DWORD *)this, i);
  }
  sub_10076460(this);
  *(_BYTE *)(this + 18) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  *(_BYTE *)(this + 19) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
}
