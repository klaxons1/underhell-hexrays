int __thiscall sub_103138C0(int *this, float *a2, float *a3)
{
  double (__thiscall *v4)(void *); // edx
  double v5; // st7
  int v6; // edx
  int result; // eax
  int v8; // eax
  int v9; // eax

  v4 = *(double (__thiscall **)(void *))(*this + 2328);
  *a3 = 500.0;
  v5 = v4(this);
  v6 = *this;
  *a2 = v5;
  result = (*(int (__thiscall **)(int *))(v6 + 368))(this);
  if ( result )
  {
    v8 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8);
    if ( (_BYTE)result )
    {
      v9 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1096))(v9);
      if ( result )
        *a3 = *a3 * 9.0;
    }
  }
  return result;
}
