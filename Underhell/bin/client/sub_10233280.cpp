int __thiscall sub_10233280(_DWORD *this, char a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *this;
  if ( v3 && dword_1047C96C )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3);
    if ( a2 )
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 100))(*this);
    *this = 0;
  }
  return result;
}
