int __thiscall sub_102368C0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  result = this[38];
  if ( !result )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 148))(this) )
    {
      v3 = dword_1047CA70;
      v4 = *(_DWORD *)dword_1047CA70;
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this);
      return (*(int (__thiscall **)(int, int))(v4 + 104))(v3, v5);
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA7C + 16))(dword_1047CA7C);
    }
  }
  return result;
}
