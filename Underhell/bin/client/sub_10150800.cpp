void __thiscall sub_10150800(int this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7

  if ( !*(_DWORD *)(this + 1192) )
  {
    v2 = *(_DWORD *)(this + 1232);
    if ( v2 )
    {
      if ( v2 != 1 )
      {
        *(float *)(this + 1216) = 1.0;
        *(float *)(this + 1208) = 1.0;
        *(float *)(this + 1196) = 1.0;
        *(float *)(this + 1200) = 1.0;
        *(float *)(this + 1204) = 1.0;
        return;
      }
      *(float *)(this + 1220) = 80.0;
      v3 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "particle/snow",
             "ClientEffect textures",
             1,
             0);
      *(float *)(this + 1216) = 0.60000002;
      *(float *)(this + 1224) = 0.69999999;
      v4 = 1.0;
    }
    else
    {
      *(float *)(this + 1220) = 425.0;
      v3 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "particle/rain",
             "ClientEffect textures",
             1,
             0);
      v4 = 1.0;
      *(float *)(this + 1216) = 1.0;
      *(float *)(this + 1208) = 1.0;
      *(float *)(this + 1224) = 0.34999999;
    }
    *(float *)(this + 1196) = v4;
    *(_DWORD *)(this + 1192) = v3;
    *(float *)(this + 1200) = v4;
    *(float *)(this + 1204) = v4;
  }
}
