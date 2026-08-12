int __thiscall sub_101EC2E0(int *this, int a2, int a3)
{
  int *v3; // esi
  int v4; // edi
  int result; // eax

  v3 = this + 1002;
  v4 = a2 + this[1002];
  if ( this[1002] != v4 )
  {
    result = (*(int (__thiscall **)(int *, int *))(*this + 1628))(this, this + 1002);
    *v3 = v4;
  }
  if ( a3 > 0 && *v3 > a3 )
  {
    result = (*(int (__thiscall **)(int *, int *))(*(v3 - 1002) + 1628))(v3 - 1002, v3);
    *v3 = a3;
  }
  return result;
}
