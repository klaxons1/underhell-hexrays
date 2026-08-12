unsigned int __thiscall sub_100131D0(_DWORD *this)
{
  unsigned int result; // eax
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // eax

  result = this[1087];
  if ( result != *((_DWORD *)off_103DC81C + 1) )
  {
    result = this[1032];
    if ( result != -1 )
    {
      result >>= 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[1032] & 0xFFF) + 2) == result )
      {
        v3 = *((_DWORD *)off_103DCD74 + 4 * (this[1032] & 0xFFF) + 1);
        if ( v3 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 332))(v3);
          v4 = result;
          if ( result )
          {
            v5 = (*(int (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)result + 4))(result, this);
            (*(void (__thiscall **)(unsigned int, int, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)v4 + 8))(
              v4,
              v5,
              this + 1080,
              this + 1083,
              this + 1086);
            result = (unsigned int)off_103DC81C;
            this[1087] = *((_DWORD *)off_103DC81C + 1);
          }
        }
      }
    }
  }
  return result;
}
