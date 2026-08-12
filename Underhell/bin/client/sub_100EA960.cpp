int __thiscall sub_100EA960(void *this)
{
  int result; // eax

  result = (int)this;
  if ( this )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, 1);
  return result;
}
