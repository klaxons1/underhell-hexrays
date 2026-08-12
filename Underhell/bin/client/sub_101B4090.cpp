void __thiscall sub_101B4090(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  double v13; // st7
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  float *i; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp+B0h] [ebp-10h]
  int v21; // [esp+B4h] [ebp-Ch] BYREF
  int v22; // [esp+B8h] [ebp-8h] BYREF
  int v23; // [esp+BCh] [ebp-4h]

  if ( *(_DWORD *)(this + 760) == -1 )
  {
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 764) = v2;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v2,
      "vgui/icons/icon_lambda",
      1,
      0);
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 768) = v3;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v3,
      "vgui/icons/icon_buster",
      1,
      0);
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 772) = v4;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v4,
      "vgui/icons/icon_strider",
      1,
      0);
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 776) = v5;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v5,
      "vgui/icons/icon_dog",
      1,
      0);
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 780) = v6;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v6,
      "vgui/icons/icon_base",
      1,
      0);
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 760) = v7;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v7,
      "vgui/screens/radar",
      1,
      0);
  }
  sub_102361D0(&v21, &v22);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(dword_1047CA6C, 255, 255, 255, 255);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 760));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
    dword_1047CA6C,
    0,
    0,
    v21,
    v22);
  if ( *(float *)(this + 268) >= (double)*((float *)off_103DC81C + 3) )
  {
    if ( *(float *)(this + 264) >= (double)*((float *)off_103DC81C + 3) )
      goto LABEL_12;
    v10 = *(_DWORD *)(this + 260);
    if ( v10 > 0 )
    {
      *(_DWORD *)(this + 260) = v10 - 1;
      goto LABEL_12;
    }
    *(float *)(this + 268) = RandomFloat(2.0, 3.0) + *((float *)off_103DC81C + 3);
    v9 = 3.4028235e38;
  }
  else
  {
    v8 = *(_DWORD *)(this + 260);
    if ( v8 < 25 )
    {
      *(_DWORD *)(this + 260) = v8 + 1;
      goto LABEL_12;
    }
    *(float *)(this + 268) = 3.4028235e38;
    v9 = RandomFloat(1.0, 2.0) + *((float *)off_103DC81C + 3);
  }
  *(float *)(this + 264) = v9;
LABEL_12:
  v11 = 0;
  v20 = sub_100422D0();
  if ( *(int *)(this + 752) > 0 )
  {
    v12 = this + 284;
    do
    {
      v13 = *(float *)(v12 + 4) - *((float *)off_103DC81C + 3);
      v23 = 90;
      if ( v13 < 1.0 )
      {
        v23 = (int)(v13 * 90.0);
        if ( v23 < 10 )
          v23 = 10;
      }
      v14 = RandomInt(0, 30);
      sub_101B3C20(
        (_DWORD *)this,
        *(float *)(v12 - 12),
        *(float *)(v12 - 8),
        *(float *)(v12 - 4),
        v20,
        *(_DWORD *)v12,
        64,
        255,
        255,
        255,
        v23 + v14);
      ++v11;
      v12 += 20;
    }
    while ( v11 < *(_DWORD *)(this + 752) );
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)(this + 752);
    v16 = 0;
    if ( v15 <= 0 )
      break;
    for ( i = (float *)(this + 288); *i > (double)*((float *)off_103DC81C + 3); i += 5 )
    {
      if ( ++v16 >= v15 )
        return;
    }
    v18 = 5 * v16;
    *(float *)(this + 4 * v18 + 272) = *(float *)(this + 20 * v15 + 252);
    v19 = this + 4 * v18 + 272;
    *(float *)(v19 + 4) = *(float *)(this + 20 * v15 + 256);
    *(float *)(v19 + 8) = *(float *)(this + 20 * v15 + 260);
    *(_DWORD *)(v19 + 12) = *(_DWORD *)(this + 20 * v15 + 264);
    *(float *)(v19 + 16) = *(float *)(this + 20 * v15 + 268);
    --*(_DWORD *)(this + 752);
  }
}
