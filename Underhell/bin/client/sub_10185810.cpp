void *__thiscall sub_10185810(float *this)
{
  void *result; // eax

  result = (void *)(*(int (__thiscall **)(float *))(*((_DWORD *)this - 11) + 64))(this - 11);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(float *))(*((_DWORD *)this - 11) + 60))(this - 11);
    result = off_103DC81C;
    this[1581] = *((float *)off_103DC81C + 3) + 0.2;
  }
  return result;
}
