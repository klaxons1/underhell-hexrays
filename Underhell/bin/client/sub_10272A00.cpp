int __thiscall sub_10272A00(_DWORD *this, int a2)
{
  int v3; // ecx

  v3 = this[54];
  if ( v3 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 156))(v3, 0);
  this[54] = a2;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 172))(a2, this);
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[54] + 156))(this[54], this);
  return (*(int (__thiscall **)(_DWORD *))(*this + 820))(this);
}
