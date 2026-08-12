void __thiscall sub_101FD2D0(int this, int a2)
{
  const char *v2; // eax
  const char *v3; // edx

  if ( *(_DWORD *)(this + 808) )
  {
    v2 = *(const char **)(this + 804);
    if ( !v2 )
      v2 = String;
    v3 = *(const char **)(this + 800);
    if ( !v3 )
      v3 = String;
    (*(void (__thiscall **)(_DWORD, const char *, const char *))(**(_DWORD **)(this + 808) + 88))(
      *(_DWORD *)(this + 808),
      v3,
      v2);
  }
}
