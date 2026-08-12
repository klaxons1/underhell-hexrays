int __cdecl sub_100A58D0(int *a1)
{
  int result; // eax
  int v2; // edi
  int v3; // eax

  result = sub_1009B7B0(a1);
  if ( result )
  {
    v2 = (int)*off_103E9C2C;
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 8))(result, 1);
    return (*(int (__thiscall **)(void ***, int *, int *, int))(v2 + 44))(off_103E9C2C, a1, a1 + 9, v3);
  }
  return result;
}
