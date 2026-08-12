int __thiscall sub_10119B90(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax

  result = (*(int (__thiscall **)(int, int (__cdecl *)(int, char *, int)))(*(_DWORD *)cvar + 76))(cvar, sub_10119260);
  if ( byte_1069BF89 )
  {
    v3 = 0;
    if ( (int)this[13] > 0 )
    {
      v4 = 0;
      do
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)cvar + 52))(cvar, v4 + this[10]);
        if ( v5 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)(v5 + 24) + 8))(v5 + 24, this[10] + v4 + 128);
        ++v3;
        v4 += 384;
      }
      while ( v3 < this[13] );
    }
    return (*(int (__thiscall **)(int, int (__cdecl *)(int, char *, int)))(*(_DWORD *)cvar + 72))(cvar, sub_10119260);
  }
  return result;
}
