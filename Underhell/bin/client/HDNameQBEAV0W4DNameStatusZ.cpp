DName *__thiscall DName::operator+(_DWORD *this, DName *a2, int a3)
{
  *(_DWORD *)a2 = *this;
  *((_DWORD *)a2 + 1) = this[1];
  DName::operator+=((int **)a2, a3);
  return a2;
}
