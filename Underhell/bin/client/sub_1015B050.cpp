int __thiscall sub_1015B050(_DWORD *this)
{
  int v1; // esi
  unsigned __int16 v2; // ax

  v1 = *(_DWORD *)off_103DD080;
  v2 = (*(int (__thiscall **)(_DWORD *))(*(this - 2) + 28))(this - 2);
  return (*(int (__thiscall **)(void *, _DWORD))(v1 + 140))(off_103DD080, v2);
}
