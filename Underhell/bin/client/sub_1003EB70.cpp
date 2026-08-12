void __thiscall sub_1003EB70(_DWORD *this, int a2, float a3)
{
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  bool v9; // c3
  double v10; // st7

  if ( a2 >= 0 && a2 < sub_1002A680(this) )
  {
    if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
      sub_10026520((int)this);
    v4 = (int *)this[485];
    if ( v4 )
    {
      if ( *v4 )
      {
        v5 = *v4;
        v6 = *(_DWORD *)(v5 + 272) + 20 * a2;
        v7 = *(float *)(v6 + v5 + 16);
        v8 = v5 + v6;
        v9 = *(float *)(v8 + 12) == v7;
        v10 = a3;
        if ( !v9 )
        {
          v10 = (v10 - *(float *)(v8 + 12)) / (*(float *)(v8 + 16) - *(float *)(v8 + 12));
          if ( v10 > 1.0 )
          {
            *(float *)&this[a2 + 530] = 1.0;
            return;
          }
          if ( v10 < 0.0 )
            v10 = 0.0;
        }
        *(float *)&this[a2 + 530] = v10;
      }
    }
  }
}
