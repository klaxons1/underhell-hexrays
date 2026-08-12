double __thiscall sub_102D9AA0(void *this, int a2)
{
  int v2; // eax
  int v3; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) - 1;
  if ( !v2 )
    return *(float *)(dword_106DEDFC + 44);
  v3 = v2 - 1;
  if ( !v3 )
    return *(float *)(dword_106DEE44 + 44);
  if ( v3 == 1 )
    return *(float *)(dword_106DEE8C + 44);
  return 0.0;
}
