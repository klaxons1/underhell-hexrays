BOOL __thiscall sub_10313B50(_DWORD *this)
{
  int v2; // edx
  int (*v3)(void); // eax
  int v4; // eax
  float *v5; // eax
  BOOL result; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+10h] [ebp-4h]

  v2 = *this;
  LODWORD(v8) = this[1053] != 6 ? 62500 : 202500;
  v3 = *(int (**)(void))(v2 + 368);
  v8 = (float)SLODWORD(v8);
  result = 0;
  if ( v3() )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v5 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 536))(v4, v7);
    if ( v5[1] * v5[1] + *v5 * *v5 + v5[2] * v5[2] <= v8 )
      return 1;
  }
  return result;
}
