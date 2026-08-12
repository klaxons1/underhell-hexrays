int __thiscall sub_1025CB10(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  this[380] = a2;
  return (*(int (**)(void))(v2 + 16))();
}
