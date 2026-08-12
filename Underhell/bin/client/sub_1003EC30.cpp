double __thiscall sub_1003EC30(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // ecx

  if ( a2 < 0 || a2 >= sub_1002A680(this) )
    return 0.0;
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = (int *)this[485];
  if ( !v3 || !*v3 )
    return 0.0;
  v4 = *v3;
  v5 = *(_DWORD *)(v4 + 272) + 20 * a2;
  v6 = *(float *)(v5 + v4 + 16);
  v7 = v4 + v5;
  if ( *(float *)(v7 + 12) == v6 )
    return *(float *)&this[a2 + 530];
  else
    return (*(float *)(v7 + 16) - *(float *)(v7 + 12)) * *(float *)&this[a2 + 530] + *(float *)(v7 + 12);
}
