void __thiscall sub_102AE3D0(int this)
{
  int v2; // ebx
  int v3; // esi
  const char *v4; // edx
  int v5[19]; // [esp+Ch] [ebp-64h] BYREF
  int v6[3]; // [esp+58h] [ebp-18h] BYREF
  int v7; // [esp+64h] [ebp-Ch]
  int v8; // [esp+68h] [ebp-8h]
  int var1; // [esp+6Fh] [ebp-1h] BYREF

  if ( *(_BYTE *)(this + 920) != 1 && *(_BYTE *)(this + 1080) )
  {
    sub_10072560(v5);
    sub_1006FF60(v5, *(_DWORD *)(this + 960));
    sub_10070FE0(v5, 400);
    v2 = 0;
    memset(v6, 0, sizeof(v6));
    v7 = 0;
    v8 = 0;
    sub_100727B0(0, &flt_106F1CA8, v5, v6);
    if ( v7 > 0 )
    {
      do
      {
        v3 = *(_DWORD *)(v6[0] + 4 * v2);
        if ( v3 && !sub_102ADA20((int *)this, v3, &var1) )
        {
          if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
            sub_100DAE60(v3);
          v4 = *(const char **)(v3 + 260);
          if ( !v4 )
            v4 = String;
          sub_102AD4D0((_BYTE *)this, *(float *)&v4, *(float *)(v3 + 580), *(_DWORD *)(v3 + 584), *(_DWORD *)(v3 + 588));
        }
        ++v2;
      }
      while ( v2 < v7 );
    }
    sub_102375F0(v6);
    sub_100725D0(v5);
  }
}
