char __thiscall sub_102E6FF0(_DWORD *this, int a2)
{
  char result; // al

  result = sub_10255E30(this, a2);
  if ( result )
    return *(_BYTE *)(a2 + 225) == 2;
  return result;
}
