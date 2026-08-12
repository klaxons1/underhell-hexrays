int __stdcall sub_1009EA30(int (__thiscall ***a1)(_DWORD))
{
  int v1; // eax

  v1 = (**a1)(a1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 28))(v1);
}
