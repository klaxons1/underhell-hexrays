bool __thiscall sub_103AF120(void *this, int a2, int a3)
{
  bool result; // al

  result = sub_100428A0((int)this, a2, a3);
  if ( result || !a3 || *(_WORD *)(a3 + 816) != 904 )
    return 1;
  return result;
}
