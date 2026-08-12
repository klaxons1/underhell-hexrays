int __thiscall sub_10252EF0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( !this[86] )
    return sub_10273220(a2);
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[86] + 772))(this[86]);
  return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)this[86] + 768))(this[86], v3 - 3 * a2);
}
