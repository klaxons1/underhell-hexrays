int __thiscall sub_103FBF60(_DWORD *this, float *a2, float *a3, float a4)
{
  double v4; // st7
  double v6; // st6
  double v7; // st6
  int v8; // ebx
  _DWORD *v9; // ecx
  float *v10; // eax
  double v11; // st7
  int v12; // edi
  float *v13; // eax
  int v15; // [esp-8h] [ebp-4A4h]
  _DWORD v16[256]; // [esp+Ch] [ebp-490h] BYREF
  _BYTE v17[76]; // [esp+40Ch] [ebp-90h] BYREF
  int v18; // [esp+458h] [ebp-44h]
  float v19[3]; // [esp+460h] [ebp-3Ch] BYREF
  float v20[3]; // [esp+46Ch] [ebp-30h] BYREF
  _DWORD v21[2]; // [esp+478h] [ebp-24h] BYREF
  float v22; // [esp+480h] [ebp-1Ch]
  float v23; // [esp+484h] [ebp-18h]
  float v24; // [esp+488h] [ebp-14h]
  int v25; // [esp+48Ch] [ebp-10h]
  float v26; // [esp+490h] [ebp-Ch]
  _DWORD *v27; // [esp+494h] [ebp-8h]
  float v28; // [esp+498h] [ebp-4h]
  int savedregs; // [esp+49Ch] [ebp+0h] BYREF
  int v30; // [esp+4A4h] [ebp+8h]

  v4 = *(float *)(dword_106EFE24 + 44) + 1.0;
  v28 = v4;
  v6 = *a2;
  v27 = this;
  v20[0] = v6 - v4;
  v7 = a2[1] - v4;
  v30 = 0;
  v20[1] = v7;
  v20[2] = a2[2] - v4;
  v19[0] = *a2 + v4;
  v19[1] = v4 + a2[1];
  v19[2] = v4 + a2[2];
  sub_1025F990(v21, (int)v16, 256, 0);
  v8 = 0;
  v25 = sub_1025F9C0((int)v20, (int)v19, (int)v21);
  if ( v25 <= 0 )
    return 0;
  do
  {
    v9 = (_DWORD *)v16[v8];
    if ( v9[106] )
    {
      v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*v9 + 576))(v9);
      v22 = *v10 - *a2;
      v23 = v10[1] - a2[1];
      v24 = v10[2] - a2[2];
      v11 = off_10689714();
      v26 = v11;
      if ( v11 < v28 && a3[1] * v23 + *a3 * v22 + a3[2] * v24 > a4 )
      {
        v12 = v16[v8];
        v15 = sub_100D1940(v27);
        v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 576))(v12);
        sub_103FB900((int)&savedregs, (int)a2, a2, v13, v15, (int)v17);
        if ( v18 == v16[v8] )
        {
          v30 = v16[v8];
          v28 = v26;
        }
      }
    }
    ++v8;
  }
  while ( v8 < v25 );
  return v30;
}
