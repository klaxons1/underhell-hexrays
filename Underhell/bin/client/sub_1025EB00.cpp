int __thiscall sub_1025EB00(int *this, int a2)
{
  int v2; // edx

  v2 = *this;
  this[51] = a2;
  return (*(int (**)(void))(v2 + 16))();
}
