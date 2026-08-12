int __thiscall sub_1025EDF0(void *this, const char *a2)
{
  int (__thiscall ***v2)(_DWORD, const char *); // eax

  v2 = (int (__thiscall ***)(_DWORD, const char *))(*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 12))(
                                                     this,
                                                     a2);
  if ( v2 )
    return (**v2)(v2, a2);
  Warning("Attempted to create unknown entity type %s!\n", a2);
  return 0;
}
