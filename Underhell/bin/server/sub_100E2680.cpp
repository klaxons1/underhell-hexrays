int __cdecl sub_100E2680(int a1, float *a2, float *a3, int a4)
{
  int result; // eax
  int v5; // esi

  result = sub_101811E0(a1, -1);
  v5 = result;
  if ( result )
  {
    sub_100E10C0(result, a2);
    sub_100E11A0(v5, a3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, a4);
    sub_1012CA70(v5);
    return v5;
  }
  return result;
}
