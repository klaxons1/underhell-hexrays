const char *__thiscall sub_101E39C0(_DWORD **this)
{
  const char *result; // eax
  _DWORD **v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  result = *(const char **)(*(int (__thiscall **)(_DWORD *, _DWORD ***))(*this[1] + 28))(this[1], &v2);
  if ( !result )
    return String;
  return result;
}
