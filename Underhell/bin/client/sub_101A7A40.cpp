char __thiscall sub_101A7A40(int this)
{
  double v1; // st6
  int (*v2)(void); // eax
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st7
  float v11; // [esp+4h] [ebp-4h]

  if ( 0.0 == *(float *)(this + 12) )
  {
    v11 = 0.0;
  }
  else
  {
    v1 = (*(float *)(this + 16) - *((float *)off_103DC81C + 3)) / *(float *)(this + 12);
    v11 = v1;
    if ( v1 <= 1.0 )
    {
      if ( v1 < 0.0 )
        v11 = 0.0;
    }
    else
    {
      v11 = 1.0;
    }
  }
  v2 = *(int (**)(void))(*(_DWORD *)dword_1047C97C + 200);
  if ( *(_BYTE *)(this + 22) )
  {
    v3 = v11;
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
    v9 = 164.0;
    v10 = v11 * 164.0;
    if ( v2() )
    {
      if ( v10 > 164.0 )
        return (int)v9;
      v9 = 128.0;
      if ( v10 < 128.0 )
        return (int)v9;
      return (int)v10;
    }
    else
    {
      if ( v10 > 164.0 )
        return (int)v9;
      v9 = 128.0;
      if ( v10 < 128.0 )
        return (int)v9;
      return (int)v10;
    }
  }
}
