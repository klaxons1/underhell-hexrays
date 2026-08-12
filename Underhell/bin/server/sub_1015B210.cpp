_BYTE *__thiscall sub_1015B210(_BYTE *this, _BYTE *a2)
{
  if ( *a2 != *this )
  {
    (**((void (__thiscall ***)(int, _BYTE *))this - 20))((int)(this - 80), this);
    *this = *a2;
  }
  return this;
}
