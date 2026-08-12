int __thiscall sub_1011C0A0(void *this, int a2, int a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
  if ( result )
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 12))(this, result, a3);
  return result;
}
