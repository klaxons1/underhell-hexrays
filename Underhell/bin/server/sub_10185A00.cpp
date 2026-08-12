int __thiscall sub_10185A00(_BYTE *this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)this;
  if ( this[920] )
    return (*(int (**)(void))(v2 + 732))();
  else
    return (*(int (**)(void))(v2 + 736))();
}
