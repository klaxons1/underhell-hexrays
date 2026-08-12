char __thiscall sub_103E94C0(_DWORD *this, int a2)
{
  char *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = (char *)(this - 371);
  if ( (*(int (__thiscall **)(_DWORD *))(*(this - 371) + 340))(this - 371)
    && (v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 340))(v2),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3)) )
  {
    LOBYTE(v4) = 0;
  }
  else
  {
    return (*(_DWORD *)(a2 + 64) >> 4) & 1;
  }
  return v4;
}
