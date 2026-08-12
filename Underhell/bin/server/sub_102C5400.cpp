int __thiscall sub_102C5400(_DWORD *this, int a2)
{
  int result; // eax
  unsigned __int16 i; // si

  result = sub_102C2930((int)(this + 24));
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    sub_102C4950((char *)(392 * i + this[25] + 16), a2);
    result = sub_102C2A00(this + 24, i);
  }
  return result;
}
