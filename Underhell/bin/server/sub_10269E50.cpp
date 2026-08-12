char __thiscall sub_10269E50(int *this, char *String2)
{
  char result; // al

  result = sub_101BC610(String2, 0, this + 36);
  if ( result )
  {
    (*(void (__thiscall **)(int *))(*this + 232))(this);
    return 1;
  }
  return result;
}
