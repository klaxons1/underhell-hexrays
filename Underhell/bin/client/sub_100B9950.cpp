int __thiscall sub_100B9950(int this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int result; // eax

  v2 = (_DWORD *)sub_100DDA40(212);
  if ( v2 )
    v3 = sub_100B8EB0(v2, this, "ChatInputLine");
  else
    v3 = 0;
  *(_DWORD *)(this + 308) = v3;
  result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 124))(v3, 0);
  if ( *(_DWORD *)(this + 320) )
  {
    sub_10257630(12700);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 320) + 124))(*(_DWORD *)(this + 320), 1);
  }
  return result;
}
