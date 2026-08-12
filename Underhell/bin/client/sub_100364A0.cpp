int __thiscall sub_100364A0(void *this)
{
  int v2; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this);
  if ( v2 && !*(_BYTE *)(v2 + 17) )
    sub_10034F90(v2);
  result = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) + 20);
  if ( result <= 4 )
    return 4;
  return result;
}
