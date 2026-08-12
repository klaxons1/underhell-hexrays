int __thiscall sub_10250EC0(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  this[293] = a2;
  return (*(int (**)(void))(v2 + 16))();
}
