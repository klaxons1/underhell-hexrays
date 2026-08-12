void __thiscall sub_101FD310(int this, int a2)
{
  const char *v3; // edx
  const char *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi

  if ( *(_DWORD *)(this + 808) )
  {
    v3 = *(const char **)(this + 804);
    if ( !v3 )
      v3 = String;
    v4 = *(const char **)(this + 800);
    if ( !v4 )
      v4 = String;
    (*(void (__thiscall **)(_DWORD, const char *, const char *))(**(_DWORD **)(this + 808) + 92))(
      *(_DWORD *)(this + 808),
      v4,
      v3);
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 808) + 112))(*(_DWORD *)(this + 808));
    v6 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
           dword_106B31F8,
           "advanced_map_complete",
           0);
    v7 = v6;
    if ( v6 )
    {
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v6 + 40))(v6, "numadvanced", v5);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v7, 0);
    }
  }
}
