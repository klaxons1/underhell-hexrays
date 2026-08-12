char __thiscall sub_100F4CF0(int *this)
{
  int *v1; // esi
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v23; // [esp-Ch] [ebp-30h]
  const char *v24; // [esp+8h] [ebp-1Ch] BYREF
  const char *v25; // [esp+Ch] [ebp-18h]
  const char *v26; // [esp+10h] [ebp-14h]
  const char *v27; // [esp+14h] [ebp-10h]
  float v28; // [esp+18h] [ebp-Ch]
  int *v29; // [esp+20h] [ebp-4h]

  v28 = 1.5;
  v1 = this + 1;
  v24 = Locale;
  v25 = Locale;
  v26 = Locale;
  v29 = this;
  v23 = this[4];
  v27 = "Default";
  sub_100F4BC0(this + 1, v23, &v24);
  v2 = v1[3];
  v28 = 1.5;
  v24 = "r_drawdetailprops";
  v25 = "0";
  v26 = "1";
  v27 = "detail props";
  sub_100F4BC0(v1, v2, &v24);
  v3 = v1[3];
  v28 = 1.5;
  v24 = "r_drawworld";
  v25 = "0";
  v26 = "1";
  v27 = "world geometry";
  sub_100F4BC0(v1, v3, &v24);
  v4 = v1[3];
  v28 = 1.5;
  v24 = "r_drawentities";
  v25 = "0";
  v26 = "1";
  v27 = "entities";
  sub_100F4BC0(v1, v4, &v24);
  v5 = v1[3];
  v28 = 1.5;
  v24 = "r_3dsky";
  v25 = "0";
  v26 = "1";
  v27 = "3D skybox";
  sub_100F4BC0(v1, v5, &v24);
  v6 = v1[3];
  v28 = 1.5;
  v24 = "r_drawdecals";
  v25 = "0";
  v26 = "1";
  v27 = "decals";
  sub_100F4BC0(v1, v6, &v24);
  v24 = "mat_stub";
  v7 = v1[3];
  v28 = 1.5;
  v25 = "1";
  v26 = "0";
  v27 = "material system and below";
  sub_100F4BC0(v1, v7, &v24);
  v8 = v1[3];
  v28 = 1.5;
  v24 = "mat_viewportscale";
  v25 = ".2";
  v26 = "1.0";
  v27 = "fillrate";
  sub_100F4BC0(v1, v8, &v24);
  v9 = v1[3];
  v28 = 1.5;
  v24 = "r_drawstaticprops";
  v25 = "0";
  v26 = "1";
  v27 = "fillrate";
  sub_100F4BC0(v1, v9, &v24);
  v10 = v1[3];
  v28 = 1.5;
  v24 = "r_drawbrushmodels";
  v25 = "0";
  v26 = "1";
  v27 = "brush models";
  sub_100F4BC0(v1, v10, &v24);
  v11 = v1[3];
  v28 = 1.5;
  v24 = "r_renderoverlayfragment";
  v25 = "0";
  v26 = "1";
  v27 = "overlays";
  sub_100F4BC0(v1, v11, &v24);
  v12 = v1[3];
  v28 = 1.5;
  v24 = "r_drawdisp";
  v25 = "0";
  v26 = "1";
  v27 = "displacements";
  sub_100F4BC0(v1, v12, &v24);
  v13 = v1[3];
  v28 = 1.5;
  v24 = "r_drawviewmodel";
  v25 = "0";
  v26 = "1";
  v27 = "viewmodel";
  sub_100F4BC0(v1, v13, &v24);
  v14 = v1[3];
  v28 = 1.5;
  v24 = "cl_drawhud";
  v25 = "0";
  v26 = "1";
  v27 = "hud";
  sub_100F4BC0(v1, v14, &v24);
  v15 = v1[3];
  v28 = 1.5;
  v24 = "r_drawparticles";
  v25 = "0";
  v26 = "1";
  v27 = "particles";
  sub_100F4BC0(v1, v15, &v24);
  v16 = v1[3];
  v28 = 1.5;
  v24 = "r_drawsprites";
  v25 = "0";
  v26 = "1";
  v27 = "sprites";
  sub_100F4BC0(v1, v16, &v24);
  v17 = v1[3];
  v28 = 10.0;
  v24 = "mat_bumpmap";
  v25 = "0";
  v26 = "1";
  v27 = "bump mapping";
  sub_100F4BC0(v1, v17, &v24);
  v18 = v1[3];
  v28 = 10.0;
  v24 = "mat_specular";
  v25 = "0";
  v26 = "1";
  v27 = "specularity";
  sub_100F4BC0(v1, v18, &v24);
  v19 = v1[3];
  v28 = 1.5;
  v24 = "mat_drawwater";
  v25 = "0";
  v26 = "1";
  v27 = "water";
  sub_100F4BC0(v1, v19, &v24);
  v28 = 1.5;
  v24 = "r_dynamic";
  v25 = "0";
  v26 = "1";
  v27 = "dynamic lighting";
  sub_100F4BC0(v1, v1[3], &v24);
  v20 = v1[3];
  v28 = 1.5;
  v24 = "r_shadows";
  v25 = "0";
  v26 = "1";
  v27 = "shadows";
  sub_100F4BC0(v1, v20, &v24);
  v21 = v1[3];
  v28 = 1.5;
  v24 = "r_drawropes";
  v25 = "0";
  v26 = "1";
  v27 = "ropes";
  sub_100F4BC0(v1, v21, &v24);
  *((_BYTE *)v29 + 24) = 0;
  return 1;
}
