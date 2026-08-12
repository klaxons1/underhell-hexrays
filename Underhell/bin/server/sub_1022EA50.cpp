char __thiscall sub_1022EA50(int *this, _DWORD *a2)
{
  if ( this[361] <= 0 || *((_BYTE *)this + 1448) )
    return 0;
  *((_BYTE *)this + 1448) = 1;
  if ( a2 )
    this[363] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    this[363] = -1;
  sub_1022B9C0(a2, (int)this);
  (*(void (__thiscall **)(int *))(*this + 756))(this);
  return 1;
}
