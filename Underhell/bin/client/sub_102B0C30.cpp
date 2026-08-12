void sub_102B0C30()
{
  *(_DWORD *)&Str[268] &= 0xFF0FFFFF;
  Str[271] = 0;
  *(_DWORD *)&Str[268] &= 0xFFF00000;
}
