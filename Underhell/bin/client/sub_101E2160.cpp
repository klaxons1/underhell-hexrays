int __thiscall sub_101E2160(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 <= -1 )
    result = -1;
  this[21] = result;
  return result;
}
