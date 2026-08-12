int __thiscall sub_1025EE30(void *this, const char *a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 12))(this, a2);
  if ( v3 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a3);
  else
    return Warning("Attempted to destroy unknown entity type %s!\n", a2);
}
