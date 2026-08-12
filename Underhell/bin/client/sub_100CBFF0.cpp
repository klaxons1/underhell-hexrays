int __thiscall sub_100CBFF0(void (__thiscall ***this)(void *, int, int), int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ebx
  int v6; // eax

  result = sub_10229C90(a2);
  for ( i = result; result; i = result )
  {
    v5 = sub_10229A00(i);
    v6 = sub_1022B4C0(0, (int)Locale);
    (**this)(this, v5, v6);
    result = sub_1021F0F0(i);
  }
  return result;
}
