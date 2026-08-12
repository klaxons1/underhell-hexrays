int __thiscall sub_10001D50(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a5 + 24))(a5, "damagebits", 0);
  if ( (result & 1) != 0 )
    return sub_100BC7D0(this);
  return result;
}
