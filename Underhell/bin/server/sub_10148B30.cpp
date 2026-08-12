int __thiscall sub_10148B30(_DWORD *this, int a2)
{
  int v3; // ecx
  const char *v5; // eax

  v3 = this[106];
  if ( v3 )
  {
    if ( *(_DWORD *)(a2 + 24) == 1 )
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 112))(*(float *)(a2 + 8));
    else
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 112))(0.0);
  }
  else
  {
    v5 = (const char *)this[65];
    if ( !v5 )
      v5 = String;
    return Warning("Tried to call SetMass() on %s but it has no physics.\n", v5);
  }
}
