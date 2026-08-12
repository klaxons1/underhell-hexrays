int __thiscall sub_10264C30(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *i; // esi
  int result; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax

  v4 = a2;
  v6 = this[100];
  v7 = this + 97;
  v8 = 0;
  if ( v6 <= 0 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 956))(this, a2);
  for ( i = (_DWORD *)*v7; *i != a2; ++i )
  {
    if ( ++v8 >= v6 )
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 956))(this, a2);
  }
  if ( v8 < 0 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 956))(this, a2);
  sub_1012D820(v7, &a2);
  v11 = (_DWORD *)sub_10229D00(32);
  if ( v11 )
    v12 = sub_10229D20(v11, (int)"ItemDeselected");
  else
    v12 = 0;
  result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v12);
  this[102] = v4;
  return result;
}
