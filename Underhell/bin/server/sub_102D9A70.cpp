double __thiscall sub_102D9A70(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) - 1;
  if ( !v2 )
    return *(float *)(dword_106DED6C + 44);
  if ( v2 == 1 )
    return *(float *)(dword_106DEDB4 + 44);
  return 0.0;
}
