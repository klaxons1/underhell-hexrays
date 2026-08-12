void __thiscall sub_102CAAA0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  void *v6; // eax
  double v7; // st7
  unsigned int v8; // eax
  float v9; // [esp+0h] [ebp-10h]
  void *v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 920);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (void *)sub_100D7680(v5);
        if ( v6 )
        {
          if ( sub_102C9AB0(v6, (int *)&v10) )
            sub_1029C740(v10, 0xFFFFFFFF);
          *(_DWORD *)(this + 920) = -1;
          *(_BYTE *)(this + 1381) = 0;
          v7 = *(float *)(dword_106B31C8 + 12) + 5.0;
          *(float *)(this + 1376) = v7;
          v8 = *(_DWORD *)(this + 920);
          if ( v8 == -1
            || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v8 >> 12
            || !off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1] )
          {
            v9 = v7;
            sub_100EC4A0((int *)this, v9, 0);
          }
        }
      }
    }
  }
}
