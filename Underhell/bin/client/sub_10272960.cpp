int __thiscall sub_10272960(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  v4 = this[a3 + 52];
  if ( v4 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 156))(v4, 0);
  this[a3 + 52] = a2;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 156))(a2, this);
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[a3 + 52] + 172))(this[a3 + 52], this);
  v5 = (_DWORD *)sub_10229D00(32);
  if ( v5 )
    v6 = sub_1022B1A0(v5, (int)"ScrollButtonPressed", "index", a3);
  else
    v6 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[a3 + 52] + 1028))(this[a3 + 52], v6);
  return (*(int (__thiscall **)(_DWORD *))(*this + 820))(this);
}
