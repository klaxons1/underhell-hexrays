bool __thiscall sub_102FEC30(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  float *v5; // eax
  long double v6; // st7
  float *v8; // [esp+8h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *))(this[925] + 52))(this + 925);
  v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100003);
  if ( sub_10023D10((_DWORD *)this[926], v3) )
    return 0;
  v4 = sub_10050FC0(this + 925);
  v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
  v6 = fabs(v5[1] - v8[1]) + fabs(*v5 - *v8);
  if ( v6 < 1500.0 )
    return 0;
  if ( v6 > 3000.0 || this[953] )
    return 1;
  return (*(unsigned __int8 (__thiscall **)(_DWORD *))(this[925] + 288))(this + 925) != 0;
}
