int __thiscall sub_102357B0(_DWORD *this)
{
  int result; // eax
  char *v2; // ecx

  result = (int)this;
  v2 = (char *)this[3];
  if ( v2 )
  {
    if ( *v2 < 0 )
    {
      *(_DWORD *)v2 &= ~0x80u;
      return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 292))(
               dword_106B31D0,
               *(_DWORD *)(result + 12),
               result + 16);
    }
  }
  return result;
}
