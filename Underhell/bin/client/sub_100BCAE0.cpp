int __thiscall sub_100BCAE0(void *this)
{
  void (__stdcall *v1)(int); // eax

  v1 = *(void (__stdcall **)(int))(*(_DWORD *)this + 124);
  if ( *(_DWORD *)(dword_10430E6C + 48) )
    v1(1);
  else
    v1(0);
  return sub_1023E950(this);
}
