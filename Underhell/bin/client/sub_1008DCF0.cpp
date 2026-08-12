int __cdecl sub_1008DCF0(
        float *a1,
        float *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float *a11,
        float a12,
        int a13,
        int a14)
{
  int v14; // eax
  double v15; // st6
  double v16; // st7
  int v17; // eax
  _DWORD v19[10]; // [esp+0h] [ebp-54h] BYREF
  float v20; // [esp+28h] [ebp-2Ch]
  float v21; // [esp+2Ch] [ebp-28h]
  float v22; // [esp+30h] [ebp-24h]
  float v23; // [esp+34h] [ebp-20h]
  float v24; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+3Ch] [ebp-18h]
  float v26; // [esp+40h] [ebp-14h]
  float v27; // [esp+44h] [ebp-10h]
  float v28; // [esp+48h] [ebp-Ch]
  float v29; // [esp+4Ch] [ebp-8h]
  float v30; // [esp+50h] [ebp-4h]

  v21 = 0.0;
  v20 = 0.0;
  v22 = a6;
  v19[0] = a14;
  v23 = a7;
  *(float *)&v19[8] = a3;
  *(float *)&v19[9] = a4;
  v14 = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          a13,
          "ClientEffect textures",
          1,
          0);
  v19[1] = v14;
  if ( v14 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 48))(v14);
  *(float *)&v19[5] = *a2;
  *(float *)&v19[6] = a2[1];
  *(float *)&v19[7] = a2[2];
  *(float *)&v19[2] = *a1;
  *(float *)&v19[3] = a1[1];
  *(float *)&v19[4] = a1[2];
  v20 = a12;
  v15 = a11[1];
  v16 = a11[2];
  v24 = *a11;
  v25 = v15;
  v26 = v16;
  v29 = a5;
  v30 = a8;
  v27 = a9;
  v28 = a10;
  if ( !sub_100DDA40(96) )
    return ((int (__thiscall *)(int (__stdcall ***)(char), _DWORD))(*off_103DD168)[1])(off_103DD168, 0);
  v17 = sub_100A50F0(v19);
  return ((int (__thiscall *)(int (__stdcall ***)(char), int))(*off_103DD168)[1])(off_103DD168, v17);
}
