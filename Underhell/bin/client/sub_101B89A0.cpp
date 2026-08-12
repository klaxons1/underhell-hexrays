int __thiscall sub_101B89A0(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  sub_1014F750(this);
  if ( *(_DWORD *)(dword_1043CA1C + 48) == 1 )
    goto LABEL_4;
  if ( *(_DWORD *)(dword_1043CA1C + 48) == 2 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
    return sub_101B6020(this, v4);
  }
  result = *(_DWORD *)(dword_1043CA1C + 48) - 3;
  if ( *(_DWORD *)(dword_1043CA1C + 48) == 3 )
  {
LABEL_4:
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
    return sub_101B8740((float *)this, v3);
  }
  return result;
}
