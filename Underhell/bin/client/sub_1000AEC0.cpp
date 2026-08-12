int __thiscall sub_1000AEC0(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 864))(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 852))(this, 174);
  return result;
}
