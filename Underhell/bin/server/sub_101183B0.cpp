int __stdcall sub_101183B0(int a1)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 60))(a1, &byte_1069BF89, 1);
  if ( byte_1069BF89 )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a1 + 20))(a1, &dword_1069C008, &dword_10615824);
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 52))(a1, &dword_1069042C, 1);
  }
  return result;
}
