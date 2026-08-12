char __thiscall sub_1015BA80(_DWORD *this, int a2)
{
  char result; // al

  result = a2;
  if ( a2 )
  {
    a2 = *(_DWORD *)(a2 + 80);
    return sub_1012D820(this + 2, &a2);
  }
  return result;
}
