int __thiscall sub_1019CCA0(int this)
{
  _DWORD *v2; // edi

  v2 = *(_DWORD **)(this + 2292);
  *(_DWORD *)this = &C_PropAirboat::`vftable';
  *(_DWORD *)(this + 4) = &C_PropAirboat::`vftable';
  *(_DWORD *)(this + 8) = &C_PropAirboat::`vftable';
  *(_DWORD *)(this + 12) = &C_PropAirboat::`vftable';
  *(_DWORD *)(this + 1960) = &C_PropAirboat::`vftable';
  if ( v2 )
  {
    sub_1009D410(v2);
    sub_10034930((int)v2);
  }
  if ( *(_DWORD *)(this + 3112)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3112) + 8))(*(_DWORD *)(this + 3112)) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3112) + 16))(*(_DWORD *)(this + 3112));
  }
  if ( *(_DWORD *)(this + 2912)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 2912) + 8))(*(_DWORD *)(this + 2912)) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 2912) + 16))(*(_DWORD *)(this + 2912));
  }
  return sub_1015B5A0((_DWORD *)this);
}
