void __thiscall sub_10387340(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int *v11; // ecx

  if ( !*(_DWORD *)(this + 3860) )
  {
    *(_DWORD *)(this + 3860) = sub_10243040("sprites/glow1.vmt", (float *)(this + 716), 0);
    v2 = sub_100BEF30(this, "Eye");
    sub_10126B10(*(_DWORD *)(this + 3860), this, v2);
    v3 = *(_DWORD *)(this + 3860);
    if ( *(_BYTE *)(this + 3895) )
    {
      sub_10128950(v3, 5, 0, 255, 0, 128, 14);
      sub_1005C620(
        (_BYTE *)(*(_DWORD *)(this + 3860) + 116),
        0,
        255,
        0,
        HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3860) + 116)));
    }
    else
    {
      sub_10128950(v3, 5, 255, 0, 0, 128, 14);
      sub_1005C620(
        (_BYTE *)(*(_DWORD *)(this + 3860) + 116),
        255,
        0,
        0,
        HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3860) + 116)));
    }
    sub_10242820(*(_DWORD *)(this + 3860), 164, 0.1);
    sub_102428B0(*(_DWORD *)(this + 3860), 0.25, 0.1);
    v4 = *(_DWORD *)(this + 3860);
    v5 = *(_DWORD *)(v4 + 248) | 0x8000;
    if ( *(_DWORD *)(v4 + 248) != v5 )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v4 + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      *(_DWORD *)(v4 + 248) = v5;
    }
  }
  if ( !*(_DWORD *)(this + 3864) )
  {
    *(_DWORD *)(this + 3864) = sub_10243040("sprites/glow1.vmt", (float *)(this + 716), 0);
    v7 = sub_100BEF30(this, "Light");
    sub_10126B10(*(_DWORD *)(this + 3864), this, v7);
    v8 = *(_DWORD *)(this + 3864);
    if ( *(_BYTE *)(this + 3895) )
    {
      sub_10128950(v8, 5, 0, 255, 0, 128, 14);
      sub_1005C620(
        (_BYTE *)(*(_DWORD *)(this + 3864) + 116),
        0,
        255,
        0,
        HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3864) + 116)));
    }
    else
    {
      sub_10128950(v8, 5, 255, 0, 0, 128, 14);
      sub_1005C620(
        (_BYTE *)(*(_DWORD *)(this + 3864) + 116),
        255,
        0,
        0,
        HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3864) + 116)));
    }
    sub_10242820(*(_DWORD *)(this + 3864), 164, 0.1);
    sub_102428B0(*(_DWORD *)(this + 3864), 0.25, 0.1);
    v9 = *(_DWORD *)(this + 3864);
    v10 = *(_DWORD *)(v9 + 248) | 0x8000;
    if ( *(_DWORD *)(v9 + 248) != v10 )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
        *(_DWORD *)(v9 + 248) = v10;
      }
      else
      {
        v11 = *(int **)(v9 + 24);
        if ( v11 )
          sub_100194B0(v11, 248);
        *(_DWORD *)(v9 + 248) = v10;
      }
    }
  }
}
