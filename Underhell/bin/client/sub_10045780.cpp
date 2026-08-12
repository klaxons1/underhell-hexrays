int __thiscall sub_10045780(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ebx
  int v6; // esi

  v3 = this[a2 + 1075];
  if ( v3 == -1 || (v4 = (int *)((char *)off_103DCD74 + 16 * (this[a2 + 1075] & 0xFFF) + 4), v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 844))(this) != 4 )
    return v5;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 848))(this);
  if ( !v6
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6)
    || (_DWORD *)v6 == this
    || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 844))(v6) )
  {
    return v5;
  }
  else
  {
    return sub_10045780(a2);
  }
}
