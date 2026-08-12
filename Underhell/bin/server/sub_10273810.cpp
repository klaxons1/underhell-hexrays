int __thiscall sub_10273810(void *this)
{
  int result; // eax

  sub_10184660(dword_106CFCC8);
  sub_10184660(dword_106CFCCC);
  result = sub_10184660(dword_106CFCD0);
  if ( this )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 48))(this, 1);
  return result;
}
