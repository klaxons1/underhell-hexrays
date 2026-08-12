int __thiscall sub_10205B00(_DWORD *this, _DWORD *a2)
{
  if ( *a2 )
    this[205] = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  else
    this[205] = -1;
  return sub_10205830((int)this);
}
