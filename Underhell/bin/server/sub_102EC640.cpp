int __thiscall sub_102EC640(_DWORD *this)
{
  int *v2; // eax
  int result; // eax
  char *v4; // [esp-4h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-4h] BYREF

  sub_100C1080((int)this);
  this[115] = *sub_10162BE0(&v5, off_1066857C[this[280]]);
  sub_100D8500(this);
  v4 = (&off_106685A4)[this[280]];
  v2 = sub_102D9B20();
  result = sub_100B9D10(v2, v4);
  this[281] = result;
  return result;
}
