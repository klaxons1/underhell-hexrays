int __thiscall sub_1011C0F0(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
  if ( result )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, result);
  return result;
}
