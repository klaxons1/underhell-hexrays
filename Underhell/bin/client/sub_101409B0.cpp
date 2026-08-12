int __usercall sub_101409B0@<eax>(int a1@<esi>, float a2)
{
  int v2; // edi
  int v3; // ebx
  double v4; // st7
  int v5; // eax
  float v7; // [esp+DCh] [ebp-40h]
  float v8; // [esp+E0h] [ebp-3Ch]
  int v9; // [esp+E4h] [ebp-38h]
  int v10; // [esp+E8h] [ebp-34h]
  int v11; // [esp+100h] [ebp-1Ch]
  int v12; // [esp+104h] [ebp-18h]
  int v13; // [esp+108h] [ebp-14h]
  int v14; // [esp+10Ch] [ebp-10h]
  float v15; // [esp+10Ch] [ebp-10h]
  int v16; // [esp+110h] [ebp-Ch]
  float v17; // [esp+110h] [ebp-Ch]
  int v18; // [esp+114h] [ebp-8h]
  int v19; // [esp+114h] [ebp-8h]
  int v20; // [esp+118h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 432))(a1);
  v2 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
         dword_1047C96C,
         "_rt_FullFrameFB",
         "RenderTargets",
         1);
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
  v16 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "dev/downsample_non_hdr",
          "Other textures",
          1,
          0);
  v13 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "dev/blurfilterx_nohdr",
          "Other textures",
          1,
          0);
  v11 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "dev/blurfiltery_nohdr",
          "Other textures",
          1,
          0);
  v12 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
          dword_1047C96C,
          "_rt_SmallFB0",
          "RenderTargets",
          1);
  v14 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
          dword_1047C96C,
          "_rt_SmallFB1",
          "RenderTargets",
          1);
  sub_1013F780(v12);
  v3 = v18 / 4;
  v10 = v18;
  v9 = v20;
  v4 = (double)(v18 - 2);
  v19 = v20 - 2;
  v8 = v4;
  v20 /= 4;
  v7 = (float)v19;
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)a1 + 412))(
    a1,
    v16,
    0,
    0,
    v20,
    v3,
    0.0,
    0.0,
    LODWORD(v7),
    LODWORD(v8),
    v9,
    v10,
    0,
    1,
    1);
  sub_1013F780(v14);
  v17 = (float)(v3 - 1);
  v15 = (float)(v20 - 1);
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)a1 + 412))(
    a1,
    v13,
    0,
    0,
    v20,
    v3,
    0.0,
    0.0,
    LODWORD(v15),
    LODWORD(v17),
    v20,
    v3,
    0,
    1,
    1);
  sub_1013F780(v12);
  v5 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v11 + 44))(v11, "$bloomamount", 0, 1);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, LODWORD(a2));
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)a1 + 412))(
    a1,
    v11,
    0,
    0,
    v20,
    v3,
    0.0,
    0.0,
    LODWORD(v15),
    LODWORD(v17),
    v20,
    v3,
    0,
    1,
    1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 436))(a1);
}
