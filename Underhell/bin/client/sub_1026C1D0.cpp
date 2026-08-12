void __thiscall sub_1026C1D0(_DWORD *this, char *String1, int a3)
{
  int i; // esi
  int v5; // esi
  const char *v6; // eax

  for ( i = this[61]; i != -1; i = *(_DWORD *)(v5 + this[58] + 8) )
  {
    v5 = 12 * i;
    v6 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + this[58]) + 72))(*(_DWORD *)(v5 + this[58]));
    if ( !_stricmp(String1, v6) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + this[58]) + 200))(*(_DWORD *)(v5 + this[58]), a3);
  }
}
