void __thiscall sub_10191300(float *this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-Ch]

  if ( *((float *)off_103DC81C + 4) > 0.0 )
  {
    v2 = sub_10190D30(this - 3);
    v3 = *((_DWORD *)this + 295);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          sub_10191070(this - 3);
      }
      else
      {
        v5 = v2;
        sub_10190EE0(this - 3, v5);
      }
    }
  }
}
