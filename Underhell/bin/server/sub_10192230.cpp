double __stdcall sub_10192230(float a1, char a2)
{
  double v2; // st7
  double v3; // st5
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v8; // [esp+Ch] [ebp+Ch]

  if ( *(_DWORD *)(dword_106B8370 + 1240) )
  {
    v8 = 25;
  }
  else
  {
    v4 = *(_DWORD *)(dword_106B7C04 + 48);
    if ( a2 )
    {
      if ( !v4 )
        v4 = 1;
    }
    else if ( !v4 )
    {
      return a1;
    }
    v5 = v4 - 2;
    v6 = 25;
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = 1;
    }
    else
    {
      v6 = 5;
    }
    v8 = v6;
  }
  v2 = (double)v8;
  if ( a1 >= 0.0 )
    v3 = v2 * 0.5;
  else
    v3 = v2 * -0.5;
  return v2 * (double)((int)(a1 + v3) / (int)v2);
}
