void __thiscall sub_100ED710(_DWORD *this, int a2, float a3)
{
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  double v9; // st7

  if ( a2 >= 0 && a2 < sub_100BF790((int)this) )
  {
    v4 = sub_10001430(this);
    if ( v4 )
    {
      v5 = *v4;
      v6 = *(_DWORD *)(v5 + 272) + 20 * a2;
      v7 = *(float *)(v6 + v5 + 16);
      v8 = v5 + v6;
      if ( *(float *)(v8 + 12) != v7 )
      {
        v9 = (a3 - *(float *)(v8 + 12)) / (*(float *)(v8 + 16) - *(float *)(v8 + 12));
        if ( v9 <= 1.0 )
        {
          if ( v9 < 0.0 )
            v9 = 0.0;
        }
        else
        {
          v9 = 1.0;
        }
        a3 = v9;
      }
      sub_100ED490(this + 285, a2, &a3);
    }
  }
}
