char __thiscall sub_10098230(_DWORD *this, char *String1, char *Source, int a4, _DWORD *a5)
{
  int v6; // eax

  if ( !sub_10096EA0(this, String1, 0) )
    return 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
  v6 = sub_100AD3C0(String1, Source);
  if ( !v6 )
    return 0;
  a5[7] = v6;
  sub_10097590(a5, String1, strlen(String1));
  if ( a4 )
    a5[8] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    a5[8] = -1;
  return 1;
}
