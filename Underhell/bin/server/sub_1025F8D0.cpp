int __cdecl sub_1025F8D0(int *a1, int a2)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  int v5; // eax
  int v6; // [esp-Ch] [ebp-10h]

  result = sub_1042A2F0(a2);
  for ( i = result; result; i = result )
  {
    if ( !strcmp((const char *)sub_1042A070(i), "connections") )
    {
      sub_1025F8D0(a1, i);
    }
    else
    {
      v4 = *a1;
      v6 = sub_1042B460(0, (int)String);
      v5 = sub_1042A070(i);
      (*(void (__thiscall **)(int *, int, int))(v4 + 128))(a1, v5, v6);
    }
    result = sub_1042A300(i);
  }
  return result;
}
