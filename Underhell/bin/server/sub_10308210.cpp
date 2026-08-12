double __thiscall sub_10308210(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  double result; // st7
  int v5; // edi
  float *v6; // esi
  float *v7; // eax
  long double v8; // st7
  double v9; // st6
  float v10; // [esp+0h] [ebp-20h]

  v2 = this[593];
  if ( v2 == dword_106E3048
    || v2 == dword_106E3040
    || v2 == dword_106E303C
    || v2 == dword_106E3038
    || v2 == dword_106E3034
    || v2 == dword_106E3030
    || v2 == 64 )
  {
    return 0.0;
  }
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( v3 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    return 16.0;
  if ( v2 == dword_106E3008 )
    return 4.0;
  if ( *(_DWORD *)(dword_10698344 + 48) && *((_BYTE *)this + 3675) )
  {
    if ( v2 != dword_106E3000 )
      goto LABEL_25;
    if ( !sub_100697A0(this, 88, 1) )
      return 16.0;
  }
  if ( v2 != dword_106E3000 )
  {
LABEL_25:
    if ( v2 == dword_106E2FF8 )
      return 8.0;
    if ( v2 < 43 || v2 > 44 )
      return 20.0;
    return 40.0;
  }
  if ( !v3 )
    return 2.0;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v8 = fabs(v7[1] - v6[1]) + fabs(*v7 - *v6);
  if ( v8 > 512.0 )
    return 16.0;
  v10 = v8;
  result = sub_1001F0E0(v10, 0.0, 512.0, 1.0, 2.0);
  v9 = 2.0;
  if ( result > 2.0 )
    return v9;
  v9 = 1.0;
  if ( result < 1.0 )
    return v9;
  return result;
}
