int __thiscall sub_1012F270(void *this)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD); // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 776))(this);
  if ( result )
  {
    v3 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 776))(this);
    return (**v3)(v3);
  }
  return result;
}
