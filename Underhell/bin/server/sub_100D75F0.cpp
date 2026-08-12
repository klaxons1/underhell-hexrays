int __cdecl sub_100D75F0(int *a1)
{
  int v1; // eax
  int result; // eax
  _DWORD *i; // esi
  int v4; // eax
  char *v5; // [esp-8h] [ebp-10h]
  char *v6; // [esp-8h] [ebp-10h]

  v5 = (char *)sub_100634F0(a1, 1);
  v1 = sub_10153490();
  result = sub_1010E480(v1, v5, 0);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    sub_100D7550(i);
    v6 = (char *)sub_100634F0(a1, 1);
    v4 = sub_10153490();
    result = sub_1010E480(v4, v6, (int)i);
  }
  return result;
}
