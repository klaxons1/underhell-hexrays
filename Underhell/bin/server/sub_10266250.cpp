int sub_10266250()
{
  int result; // eax
  int i; // esi
  int v2; // eax

  sub_101BC630();
  result = sub_1012BC10(&dword_1069E3E0, 0);
  for ( i = result; result; i = result )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 340))(i);
    if ( v2 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 228))(v2);
    result = sub_1012BC10(&dword_1069E3E0, i);
  }
  return result;
}
