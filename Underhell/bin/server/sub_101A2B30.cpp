double __thiscall sub_101A2B30(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  double result; // st7
  int v5; // edi
  float *v6; // esi
  float *v7; // eax
  long double v8; // st7
  double v9; // st6
  float v10; // [esp+0h] [ebp-1Ch]

  v2 = this[593];
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( v2 == 15 )
  {
    if ( v3 )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
      v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
      v8 = fabs(v7[1] - v6[1]) + fabs(*v7 - *v6);
      if ( v8 <= 512.0 )
      {
        v10 = v8;
        result = sub_1001F0E0(v10, 0.0, 512.0, 1.0, 2.0);
        v9 = 2.0;
        if ( result > 2.0 )
          return v9;
        v9 = 1.0;
        if ( result < 1.0 )
          return v9;
      }
      else
      {
        return 16.0;
      }
    }
    else
    {
      return 2.0;
    }
  }
  else if ( v2 < 43 || v2 > 44 )
  {
    result = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this[651] + 56))(this[651], this[593]);
    if ( -1.0 == result )
      sub_1032D660(this);
  }
  else
  {
    return 40.0;
  }
  return result;
}
