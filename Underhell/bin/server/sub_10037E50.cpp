int __thiscall sub_10037E50(void *this, int a2)
{
  if ( a2 >= 1000000000 || a2 == -1 )
    return a2;
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 2160))(this);
  return sub_1007DB30(a2);
}
