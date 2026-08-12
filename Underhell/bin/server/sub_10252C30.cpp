void __thiscall sub_10252C30(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  float *v5; // ecx
  double v6; // st7
  int v7; // edi
  double v8; // st7
  int v9; // ecx
  double v10; // st6
  float v11; // [esp+4h] [ebp-44h]
  float v12; // [esp+Ch] [ebp-3Ch]
  float v13[3]; // [esp+18h] [ebp-30h] BYREF
  float v14[3]; // [esp+24h] [ebp-24h] BYREF
  int v15; // [esp+30h] [ebp-18h] BYREF
  float v16; // [esp+34h] [ebp-14h]
  float v17; // [esp+38h] [ebp-10h]
  int v18; // [esp+3Ch] [ebp-Ch] BYREF
  float v19; // [esp+40h] [ebp-8h]
  float v20; // [esp+44h] [ebp-4h]

  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  *(_DWORD *)(this + 800) = v3;
  if ( v3 )
  {
    if ( (char *)v3[23] == "path_track"
      || sub_100D6240(v3, "path_track")
      || (v4 = *(_DWORD *)(this + 800), *(char **)(v4 + 92) == "env_portal_path_track")
      || sub_100D6240((_DWORD *)v4, "env_portal_path_track") )
    {
      v5 = *(float **)(this + 800);
      v6 = *(float *)(this + 804);
      v15 = *((int *)v5 + 179);
      v16 = v5[180];
      v7 = *((int *)v5 + 181);
      v18 = v15;
      v11 = v6;
      v17 = *(float *)&v7;
      v19 = v16;
      v20 = *(float *)&v7;
      sub_101ACF40(v5, (float *)&v18, v11, 0, 0);
      v8 = *(float *)(this + 864) + *(float *)&v7;
      v9 = *(_DWORD *)(this + 248) >> 4;
      v17 = v8;
      v10 = *(float *)(this + 864) + v20;
      v20 = v10;
      if ( (v9 & 1) != 0 )
      {
        v14[0] = *(float *)(this + 728);
        v14[1] = *(float *)(this + 732);
        v14[2] = *(float *)(this + 736);
      }
      else
      {
        v13[0] = *(float *)&v18 - *(float *)&v15;
        v13[1] = v19 - v16;
        v13[2] = v10 - v8;
        sub_10422540(v13, v14);
        if ( (*(_BYTE *)(this + 248) & 1) != 0 )
          v14[0] = 0.0;
      }
      (*(void (__thiscall **)(int, int *, float *, _DWORD))(*(_DWORD *)this + 416))(this, &v15, v14, 0);
      sub_10250B10(this, *(_DWORD *)(this + 800));
      if ( 0.0 != *(float *)(this + 108) )
      {
        v12 = *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC4A0((int *)this, v12, 0);
        sub_100EC3F0((_DWORD *)this, (int)sub_102526E0, 0.0, 0);
        sub_102522B0((float *)this, v7);
      }
    }
    else
    {
      Warning("func_track_train must be on a path of path_track\n");
      *(_DWORD *)(this + 800) = 0;
    }
  }
}
