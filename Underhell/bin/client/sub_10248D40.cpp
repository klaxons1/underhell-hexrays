int __thiscall sub_10248D40(int *this, int a2)
{
  int v2; // edx

  v2 = *this;
  this[52] = a2;
  return (*(int (**)(void))(v2 + 16))();
}
