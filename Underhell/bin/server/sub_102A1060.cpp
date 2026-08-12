void __thiscall sub_102A1060(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+Ch] [ebp-20h]
  int v5; // [esp+10h] [ebp-1Ch]
  int v6; // [esp+24h] [ebp-8h]
  float v7; // [esp+28h] [ebp-4h]
  float v8; // [esp+28h] [ebp-4h]

  if ( sub_100BDFA0(*(_DWORD *)(this + 4), *(_DWORD *)(this + 112)) && sub_1042ACB0("entryexit_blend", 0) )
  {
    v2 = *(_DWORD **)(this + 4);
    v5 = (int)(v2 + 228);
    v4 = *(_DWORD *)(this + 112);
    v3 = sub_10001430(v2);
    v6 = sub_10100560((int)v3, v4, v5);
    if ( sub_1042ACB0("origin", 0) )
    {
      sub_1042AE90("startframe", 0.0);
      *(float *)(this + 116) = 0.0;
      v7 = (float)v6;
      sub_1042AE90("endframe", v7);
      *(float *)(this + 116) = sub_10134630(*(float *)(this + 116), 0.0, v7, 0.0, 1.0);
      *(float *)(this + 120) = sub_10134630(v7, 0.0, v7, 0.0, 1.0);
    }
    if ( sub_1042ACB0("angles", 0) )
    {
      sub_1042AE90("startframe", 0.0);
      *(float *)(this + 124) = 0.0;
      v8 = (float)v6;
      sub_1042AE90("endframe", v8);
      *(float *)(this + 124) = sub_10134630(*(float *)(this + 124), 0.0, v8, 0.0, 1.0);
      *(float *)(this + 128) = sub_10134630(v8, 0.0, v8, 0.0, 1.0);
    }
  }
}
