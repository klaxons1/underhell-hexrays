int __thiscall sub_1012D6E0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  return sub_1012CDF0(this, *v3 & 0xFFF);
}
