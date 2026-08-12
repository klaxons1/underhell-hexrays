int __thiscall sub_10261F10(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2));
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 768))(v3, a3, 0);
}
