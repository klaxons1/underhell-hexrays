void __thiscall sub_10376080(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  sub_10036B00((_BYTE *)this);
  *(_BYTE *)(this + 4288) = sub_100BF3D0(this, *(_DWORD *)(this + 908)) == dword_106E854C;
  sub_10375340(this);
  if ( *(_DWORD *)(this + 2324) != 4 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4224) > -0.001 )
  {
    sub_10227360((_DWORD *)this, 0, 0, 0);
    if ( *(_DWORD *)(this + 2372) == 1 )
    {
      *(_DWORD *)(this + 4188) = 2;
    }
    else if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v1 = *(_DWORD *)(this + 4188);
      if ( v1 == 2 )
      {
        *(_DWORD *)(this + 4188) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                     dword_106B31E4,
                                     0,
                                     1) != 0;
      }
      else if ( v1 )
      {
        if ( v1 == 1 )
          *(_DWORD *)(this + 4188) = 0;
      }
      else
      {
        *(_DWORD *)(this + 4188) = 1;
      }
    }
    else
    {
      *(_DWORD *)(this + 4188) = 3;
    }
    v2 = *(_DWORD *)(this + 4188);
    if ( v2 == 1 || v2 == 3 )
      sub_1001BA70((_DWORD *)this, "scenes/npc/hunter/hunter_eyedarts_top.vcd");
    v3 = *(_DWORD *)(this + 4188);
    if ( !v3 || v3 == 3 )
      sub_1001BA70((_DWORD *)this, "scenes/npc/hunter/hunter_eyedarts_bottom.vcd");
    *(float *)(this + 4224) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                1.0,
                                3.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
