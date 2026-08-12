char __thiscall sub_102414D0(unsigned int *this)
{
  unsigned int v2; // eax
  unsigned int *v3; // ecx
  int v4; // edx
  int v5; // eax
  char result; // al
  int v7; // eax

  v2 = this[33];
  v3 = this + 33;
  if ( v2 == -1 )
    return 0;
  if ( (v2 & 0xFFFFF) >= dword_10481998 )
    return 0;
  v4 = *(_DWORD *)(dword_1048198C + 8 * (v2 & 0xFFFFF));
  if ( ((v4 ^ (v2 >> 20) & 0x7FF) & 0x7FFFFFFF) != 0 || (v4 & 0x80000000) == 0x80000000 )
    return 0;
  v5 = sub_10240220(v3);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  if ( result )
    return result;
  if ( !(*(int (__thiscall **)(unsigned int *))(*this + 144))(this) )
    return 0;
  v7 = (*(int (__thiscall **)(unsigned int *))(*this + 144))(this);
  return (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7) != 0;
}
