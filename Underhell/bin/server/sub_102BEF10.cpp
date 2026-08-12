int __thiscall sub_102BEF10(char *this)
{
  _BYTE *v1; // esi
  int result; // eax

  v1 = this + 112;
  if ( this[112] )
  {
    result = (**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 112));
    *v1 = 0;
  }
  return result;
}
