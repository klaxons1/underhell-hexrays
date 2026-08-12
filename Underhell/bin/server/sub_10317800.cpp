char __thiscall sub_10317800(int this)
{
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  long double v9; // st7
  double v10; // st7
  double v11; // st7
  _BYTE v12[12]; // [esp+4h] [ebp-14h] BYREF
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]

  if ( *(_BYTE *)(this + 4268) == 1 )
    return 1;
  if ( *(_DWORD *)(this + 4120) == 4 )
  {
    v3 = *(_DWORD *)(this + 4212);
    if ( v3 == 6 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4216) >= 6.0 )
      return sub_103160E0((float *)this);
    if ( v3 == 2 )
      return 1;
    return v3 == 3;
  }
  if ( !*(_BYTE *)(this + 3695) )
    return 0;
  if ( *(_BYTE *)(this + 3692) )
    return 0;
  if ( !sub_103131E0((void *)this) )
    return 0;
  v5 = *(_DWORD *)(this + 4120);
  if ( v5 != 1 && v5 != 3 )
    return 0;
  if ( *(_DWORD *)(this + 4076) )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 536))(v6, v12);
  if ( v7[1] * v7[1] + *v7 * *v7 + v7[2] * v7[2] >= 22500.0 )
  {
    *(float *)(this + 4208) = *(float *)(dword_106B31C8 + 12);
    goto LABEL_20;
  }
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4208) < 1.5 )
    return 0;
LABEL_20:
  v8 = sub_100B5230((float *)this);
  v13 = v8;
  if ( *(_DWORD *)(this + 4120) == 1 )
    return v8 > -150.0;
  v9 = fabs(v8);
  if ( v9 < 50.0 )
    return 0;
  sub_100B7090(this);
  v14 = v9;
  v10 = sub_100B5040((float *)this);
  v11 = v10 - v14;
  if ( v13 >= 0.0 )
    return v11 > -300.0;
  return v11 < 300.0;
}
