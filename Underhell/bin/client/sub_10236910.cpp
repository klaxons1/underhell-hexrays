int __thiscall sub_10236910(int *this, const char *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax

  result = strlen(a2);
  if ( result )
  {
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, a2);
    if ( result )
    {
      v4 = *this;
      v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, a2);
      return (*(int (__thiscall **)(int *, int))(v4 + 316))(this, v5);
    }
  }
  return result;
}
