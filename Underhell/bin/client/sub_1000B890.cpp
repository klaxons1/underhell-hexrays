void __thiscall sub_1000B890(int this, int a2, float a3)
{
  int v4; // edi
  double v5; // st7

  v4 = sub_10029CF0(a2);
  if ( v4 != -1 || (v4 = sub_10029CF0(174), v4 != -1) )
  {
    sub_10029860(v4);
    *(_DWORD *)(this + 2000) = a2;
    sub_10025680(0.0);
    sub_10029AE0(this);
    if ( a3 <= 0.0 )
    {
      *(float *)(this + 1236) = 1.0;
    }
    else
    {
      sub_1000B780((_DWORD *)this, v4);
      v5 = 0.0 / a3;
      *(float *)(this + 1236) = v5;
      if ( v5 >= 12.0 )
        v5 = 12.0;
      *(float *)(this + 1236) = v5;
    }
  }
}
