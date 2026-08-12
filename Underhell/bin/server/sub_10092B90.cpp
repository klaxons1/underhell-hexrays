int __thiscall sub_10092B90(void *this, int a2)
{
  int *v2; // eax

  v2 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 2220))(this, *v2);
}
