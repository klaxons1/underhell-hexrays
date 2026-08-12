int __thiscall sub_100218E0(_DWORD *this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 1176))(a2, this);
  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 952))(this, a2);
  this[688] = 0;
  return result;
}
