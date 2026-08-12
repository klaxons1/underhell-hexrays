int __thiscall sub_10257640(_DWORD *this)
{
  int v2; // ecx

  v2 = this[53];
  this[74] = 0;
  *((_BYTE *)this + 292) = 1;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 768))(v2, 0);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
