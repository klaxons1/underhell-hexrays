int __thiscall sub_1026EEB0(int this, int a2)
{
  _DWORD *v3; // eax
  int result; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
  result = sub_1026AFB0(v3);
  if ( result != 1 || !*(_DWORD *)(this + 372) )
    return sub_1025C210((_BYTE *)this, a2);
  return result;
}
