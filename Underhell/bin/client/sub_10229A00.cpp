int __thiscall sub_10229A00(_DWORD *this)
{
  int v2; // eax

  v2 = KeyValuesSystem();
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 16))(v2, *this);
}
