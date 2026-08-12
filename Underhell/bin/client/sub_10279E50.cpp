int __thiscall sub_10279E50(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = this + 52;
  if ( !sub_10237C80(this + 52) )
    return sub_10252370(this);
  v3 = sub_10237C80(v2);
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 0);
}
