_BYTE *__thiscall sub_1015B150(_BYTE *this, _BYTE *a2)
{
  if ( *a2 != *this )
  {
    (**(void (__thiscall ***)(int, _BYTE *))(this - 82))((int)(this - 82), this);
    *this = *a2;
  }
  return this;
}
