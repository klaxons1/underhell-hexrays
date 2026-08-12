void __thiscall sub_100564B0(int this)
{
  int v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // [esp-4h] [ebp-Ch]

  if ( *(_WORD *)(this + 50) > 1u )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 56));
  v2 = this + 8;
  *(_DWORD *)(this + 56) = 0;
  sub_10055220((_DWORD *)(this + 8));
  v3 = *(_DWORD **)v2;
  if ( *(_DWORD *)v2 )
  {
    do
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
    }
    while ( v3 );
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
  }
}
