int __cdecl sub_1010FAD0(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  char v4; // al
  int v5; // eax

  result = sub_10153490();
  v2 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      result = dword_1069ABE0;
      if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
      {
        if ( *(int *)a1 <= 1 )
        {
          v4 = sub_101EE630(v2);
          v5 = sub_1025F440("\"fov\" is \"%d\"\n", v4);
          return sub_102601C0(v2, 2, v5, 0, 0, 0, 0);
        }
        else
        {
          v3 = atoi(*(const char **)(a1 + 1036));
          return sub_101EE710(v3);
        }
      }
    }
  }
  return result;
}
