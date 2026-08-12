int __thiscall sub_10249100(int this, int a2)
{
  int result; // eax
  int v4; // edx
  unsigned int v5; // edi
  int v6; // eax

  result = sub_10241570((unsigned int *)this, a2);
  v4 = *(_DWORD *)(this + 212);
  if ( v4 )
  {
    result = strlen(*(const char **)(this + 212));
    if ( result )
    {
      v5 = *(_DWORD *)this;
      v6 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
             dword_1047CA7C,
             v4,
             *(unsigned __int8 *)(this + 220));
      return (*(int (__thiscall **)(int, int))(v5 + 772))(this, v6);
    }
  }
  return result;
}
