int __thiscall sub_1023E350(void *this, int a2)
{
  int result; // eax

  if ( a2 )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, a2);
    --dword_106C5038;
    sub_102375F0((int *)(a2 + 84));
    *(_DWORD *)(a2 + 76) = &IRecipientFilter::`vftable';
    return sub_1042FBE0(a2);
  }
  return result;
}
