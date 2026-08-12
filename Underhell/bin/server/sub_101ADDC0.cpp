void __thiscall sub_101ADDC0(int this, int a2)
{
  double v3; // st7
  int v5; // ecx
  int v6; // ecx
  long double v7; // st7
  float v8; // [esp+14h] [ebp+8h]

  v3 = 0.0;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 == 1 )
    v8 = *(float *)(a2 + 8);
  else
    v8 = 0.0;
  if ( v8 != *(float *)(this + 108) )
  {
    if ( v5 == 1 )
      v3 = *(float *)(a2 + 8);
    *(float *)(this + 108) = v3;
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    v6 = *(_DWORD *)(this + 828);
    *(float *)(this + 820) = *(float *)(dword_106B31C8 + 12);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
    if ( 0.0 == *(float *)(this + 808) )
      v7 = fabs(*(float *)(this + 108));
    else
      v7 = fabs(*(float *)(this + 108) / *(float *)(this + 808));
    *(float *)(this + 816) = v7;
  }
}
