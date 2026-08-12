int __thiscall sub_1015DCC0(int *this, int a2, char *String1)
{
  int v4; // edi
  int *v5; // eax
  int v6; // eax
  char *v8; // [esp-4h] [ebp-Ch]

  v4 = *this;
  v5 = (int *)sub_102D9B20(String1);
  v6 = sub_100B9D10(v5, v8);
  return (*(int (__thiscall **)(int *, int, int))(v4 + 368))(this, a2, v6);
}
