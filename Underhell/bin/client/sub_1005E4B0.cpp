void *__thiscall sub_1005E4B0(void *this)
{
  void *result; // eax
  int v2; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (int)this;
  if ( this )
    v3 = *(_DWORD *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, v3);
  else
    v3 = -1;
  result = (void *)sub_1005DD80(&dword_1040D908, (int)&v3);
  if ( result != (void *)-1 )
  {
    if ( dword_1040D914 - (int)result - 1 > 0 )
      result = memcpy(
                 (void *)(dword_1040D908 + 4 * (_DWORD)result),
                 (const void *)(dword_1040D908 + 4 * (_DWORD)result + 4),
                 4 * (dword_1040D914 - (_DWORD)result - 1));
    --dword_1040D914;
  }
  if ( !dword_1040D914 )
  {
    v2 = sub_100B4A10("commentary");
    return (void *)sub_100B6780(v2, 0);
  }
  return result;
}
