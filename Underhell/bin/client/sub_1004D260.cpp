int __thiscall sub_1004D260(int this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  _BYTE *v6; // esi
  int v7; // edi

  sub_1003DBB0(this, a2);
  if ( *(_BYTE *)(this + 3784)
    && *(float *)(this + 3776) > 0.0
    && !(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 84))(dword_10439968) )
  {
    sub_1004D200(this - 8);
  }
  if ( -1.0 == *(float *)(this + 3776) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1.0);
    if ( *(_BYTE *)(this + 3785) )
    {
      if ( !*(_BYTE *)(this + 3784) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, 0);
    }
  }
  result = *(_DWORD *)(this + 3780);
  v4 = this - 8;
  if ( *(_DWORD *)(this + 3788) != result )
  {
    *(_DWORD *)(v4 + 3800) = result;
    *(_DWORD *)(v4 + 3796) = result;
    result = sub_1004CCB0((float *)v4);
  }
  if ( !a2 )
  {
    v5 = CommandLine_Tier0(v4);
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 40))(v5, "-makereslists");
    if ( result )
    {
      v6 = (_BYTE *)(this + 1184);
      v7 = 10;
      do
      {
        if ( v6 )
        {
          if ( *v6 )
            result = (*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                       dword_1047C96C,
                       v6,
                       "ClientEffect textures",
                       0,
                       0);
        }
        v6 += 255;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
