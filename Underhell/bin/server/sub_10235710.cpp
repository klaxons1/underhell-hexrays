int __thiscall sub_10235710(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int *v5; // esi
  int result; // eax

  v2 = a2;
  if ( !a2 )
    v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 84))(dword_106B31D0, -1);
  this[3] = v2;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 28))(this);
  v5 = (int *)this[3];
  v5[3] = v4;
  result = v4 != 0 ? 4 : 0;
  *v5 = result;
  return result;
}
