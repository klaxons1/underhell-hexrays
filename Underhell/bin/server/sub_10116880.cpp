int __thiscall sub_10116880(int this)
{
  int v2; // eax
  int *v3; // ecx
  double v4; // st7
  float *v5; // ecx
  double v6; // st6
  double v7; // st7
  float v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+10h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 1092) )
  {
    v4 = *(float *)(this + 1376);
    v5 = (float *)(this + 1096);
    if ( v4 >= *(float *)(this + 1368) )
    {
      if ( *v5 > 0.0 )
      {
        v7 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 1376))
           / (*(float *)(this + 1380)
            * *(float *)(this + 1372))
           + 1.0
           - *(float *)(this + 1372);
        if ( v7 > 1.0 )
          v7 = 1.0;
        v10 = 1.0 - v7;
        sub_10116830(v5, &v10);
      }
    }
    else if ( *v5 < 1.0 )
    {
      v6 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 1368))
         / ((1.0 - *(float *)(this + 1364))
          * *(float *)(this + 1380))
         + *(float *)(this + 1364);
      v10 = v6;
      if ( v6 > 1.0 )
        v10 = 1.0;
      sub_10116830(v5, &v10);
    }
  }
  else
  {
    v2 = *(_DWORD *)(this + 1096);
    v10 = 0.0;
    if ( v2 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 1096) = 0.0;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 1096);
        *(float *)(this + 1096) = 0.0;
      }
    }
  }
  v9 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  return sub_100EC4A0((int *)this, v9, 0);
}
