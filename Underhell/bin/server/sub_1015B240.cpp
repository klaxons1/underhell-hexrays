_BYTE *__thiscall sub_1015B240(_BYTE *this, _BYTE *a2)
{
  if ( *a2 != *this )
  {
    (**(void (__thiscall ***)(int, _BYTE *))(this - 81))((int)(this - 81), this);
    *this = *a2;
  }
  return this;
}
