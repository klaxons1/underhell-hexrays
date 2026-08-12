int __thiscall sub_10273530(int this)
{
  char v2; // al
  _DWORD *v3; // ecx

  if ( !*(_BYTE *)(*(_DWORD *)(this + 252) + 948) )
  {
    v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 832))(
           *(_DWORD *)(this + 268),
           *(_DWORD *)(this + 208));
    v3 = *(_DWORD **)(this + 252);
    if ( v2 )
    {
      sub_102531C0(v3, 0);
      return sub_10239650((_DWORD *)this);
    }
    sub_10252560(v3);
  }
  return sub_10239650((_DWORD *)this);
}
