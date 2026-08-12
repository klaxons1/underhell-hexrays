int __thiscall sub_10187F20(int *this, int a2)
{
  int v2; // edx

  v2 = *this;
  this[1] = a2;
  return (*(int (**)(void))(v2 + 4))();
}
