int __thiscall sub_101E3A90(char **this, int a2)
{
  int result; // eax
  int v4; // edi

  result = (*(int (__thiscall **)(char *))(*(_DWORD *)this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
  {
    result = sub_100C9780(this[2], a2);
    v4 = result;
    if ( result )
    {
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)this[2] + 952))(this[2], result);
      return (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)this[2] + 964))(this[2], v4, 0);
    }
  }
  return result;
}
