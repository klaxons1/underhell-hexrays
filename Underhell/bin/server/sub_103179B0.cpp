double __thiscall sub_103179B0(int this, float a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st5
  double v6; // st7
  int v7; // edi
  double v8; // st7
  double result; // st7
  double v10; // st6
  float v11; // [esp+0h] [ebp-24h]
  float v12; // [esp+4h] [ebp-20h]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]

  if ( *(_BYTE *)(this + 3695) && !*(_BYTE *)(this + 3692) && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v15 = *(float *)(this + 3744);
    if ( sub_10317800(this) )
    {
      v3 = sub_100B5230((float *)this);
      v13 = v3;
      if ( v3 > 10.0 )
      {
        v4 = sub_100B5040((float *)this) / v13;
        v14 = v4;
        if ( v4 <= 2.0 )
        {
          if ( v4 < 0.0 )
            v14 = 0.0;
        }
        else
        {
          v14 = 2.0;
        }
        v15 = sub_100B52A0((float *)this) * (v14 * 0.25) + v15;
        v3 = v13;
      }
      v5 = 100.0;
      if ( v3 <= 500.0 )
      {
        if ( v3 >= 100.0 )
          v5 = v3;
        v6 = 100.0;
      }
      else
      {
        v6 = 100.0;
        v5 = 500.0;
      }
      v12 = v6;
      v11 = v5;
      v15 = sub_102191B0(v11, v12, 500.0, 0.0, 200.0)
          * sin(*(float *)(dword_106B31C8 + 12) * 0.16666667 * 6.283185307179586)
          + v15;
    }
    if ( 0.0 != a2 && a2 < (double)v15 )
      v15 = a2;
    v7 = dword_106B31C8;
    v8 = (*(float *)(v7 + 12) - sub_100E92C0((_DWORD *)this, 0)) * 1000.0;
    if ( fabs(v15 - *(float *)(this + 4104)) >= v8 )
    {
      if ( v15 <= (double)*(float *)(this + 4104) )
        v10 = -1.0;
      else
        v10 = 1.0;
      *(float *)(this + 4104) = v8 * v10 + *(float *)(this + 4104);
      return *(float *)(this + 4104);
    }
    else
    {
      *(float *)(this + 4104) = v15;
      return *(float *)(this + 4104);
    }
  }
  else
  {
    result = 0.0;
    *(float *)(this + 4104) = 0.0;
  }
  return result;
}
