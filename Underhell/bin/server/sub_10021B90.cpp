int __thiscall sub_10021B90(void *this)
{
  int result; // eax
  int v3; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
  }
  return result;
}
