char __thiscall sub_101A77C0(int this)
{
  double v1; // st6
  int (*v2)(void); // eax
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st7
  float v14; // [esp+4h] [ebp-4h]

  if ( 0.0 == *(float *)(this + 12) )
  {
    v14 = 0.0;
  }
  else
  {
    v1 = (*(float *)(this + 16) - *((float *)off_103DC81C + 3)) / *(float *)(this + 12);
    v14 = v1;
    if ( v1 <= 1.0 )
    {
      if ( v1 < 0.0 )
        v14 = 0.0;
    }
    else
    {
      v14 = 1.0;
    }
  }
  v2 = *(int (**)(void))(*(_DWORD *)dword_1047C97C + 200);
  if ( *(_BYTE *)(this + 22) )
  {
    v3 = v14;
    if ( v2() )
    {
      v4 = 50.0;
      v5 = v3 * 50.0;
      if ( v5 > 50.0 )
        return (int)v4;
      v4 = 0.0;
      if ( v5 < 0.0 )
        return (int)v4;
      return (int)v5;
    }
    else
    {
      v7 = 64.0;
      v8 = v3 * 64.0;
      if ( v8 > 64.0 )
        return (int)v7;
      v7 = 0.0;
      if ( v8 < 0.0 )
        return (int)v7;
      return (int)v8;
    }
  }
  else
  {
    v9 = v14;
    if ( v2() )
    {
      v10 = 64.0;
      v11 = v9 * 64.0;
      if ( v11 > 64.0 )
        return (int)v10;
      v10 = 50.0;
      if ( v11 < 50.0 )
        return (int)v10;
      return (int)v11;
    }
    else
    {
      v12 = 128.0;
      v13 = v9 * 128.0;
      if ( v13 > 128.0 )
        return (int)v12;
      v12 = 64.0;
      if ( v13 < 64.0 )
        return (int)v12;
      return (int)v13;
    }
  }
}
