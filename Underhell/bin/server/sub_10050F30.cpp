int __thiscall sub_10050F30(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this[202] = a2[65];
  result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  this[211] = result;
  return result;
}
