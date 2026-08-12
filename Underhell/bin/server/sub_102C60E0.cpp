int __thiscall sub_102C60E0(_DWORD *this, const char *a2)
{
  int result; // eax
  int v4; // eax

  result = this[23];
  if ( result )
  {
    if ( a2 && *a2 )
    {
      v4 = sub_102C46F0((unsigned __int8 (__cdecl **)(int, int))(result + 176), (int)a2);
      if ( v4 == -1 )
        v4 = sub_102C59B0((void *)(this[23] + 176), a2);
      return *(_DWORD *)(this[23] + 180) + 48 * v4 + 24;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
