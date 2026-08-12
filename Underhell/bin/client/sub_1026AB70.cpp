int __thiscall sub_1026AB70(void *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax

  v2 = dword_1047CA7C;
  v3 = *(_DWORD *)dword_1047CA7C;
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 80))(this);
  v5 = (*(int (__thiscall **)(int, int))(v3 + 32))(v2, v4);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 8))(v5, "MenuBorder");
  if ( result )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 252))(this, result);
  return result;
}
