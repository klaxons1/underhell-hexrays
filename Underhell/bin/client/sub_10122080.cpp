int __thiscall sub_10122080(void *this, int a2)
{
  int result; // eax

  if ( a2 )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, a2);
    --dword_10437918;
    sub_1011A810((int *)(a2 + 84));
    *(_DWORD *)(a2 + 76) = &IRecipientFilter::`vftable';
    return sub_1022FD10(a2);
  }
  return result;
}
