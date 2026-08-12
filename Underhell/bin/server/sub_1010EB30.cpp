int __usercall sub_1010EB30@<eax>(_DWORD *a1@<esi>)
{
  int v1; // edx
  int result; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 140))(a1, 0, -1);
  sub_100E0970((int)a1, v1, 8, 0);
  result = sub_102601C0(a1, 2, "noclip ON\n", 0, 0, 0, 0);
  a1[63] |= 4u;
  return result;
}
