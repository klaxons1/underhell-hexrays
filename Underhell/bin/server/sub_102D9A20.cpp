double __thiscall sub_102D9A20(void *this, float a2)
{
  int v2; // eax
  int v3; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) - 1;
  if ( !v2 )
    return *(float *)(dword_106DEB74 + 44) * a2;
  v3 = v2 - 1;
  if ( !v3 )
    return *(float *)(dword_106DEBBC + 44) * a2;
  if ( v3 == 1 )
    return *(float *)(dword_106DEC04 + 44) * a2;
  return a2;
}
