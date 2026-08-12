int __thiscall sub_10019430(void *this, int a2, int a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 2304))(this, a3);
  if ( a2 == 1 )
    return sub_10227360(this, 1, 1, 0);
  return result;
}
