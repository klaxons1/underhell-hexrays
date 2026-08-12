int __thiscall sub_102DE220(char *this)
{
  int result; // eax
  _BYTE *v3; // esi

  result = sub_101EE940((int)this);
  v3 = this + 5124;
  if ( *v3 )
  {
    result = (**((int (__thiscall ***)(int, _BYTE *))v3 - 11))((int)(v3 - 44), v3);
    *v3 = 0;
  }
  return result;
}
