bool __thiscall sub_102657C0(int *this, int a2, int a3)
{
  _DWORD *v4; // eax
  bool result; // al

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    v4 = 0;
  else
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  result = sub_100E88D0(v4);
  if ( result )
    return sub_10265590(this, a2, a3);
  return result;
}
