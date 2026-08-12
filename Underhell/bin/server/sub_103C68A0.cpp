int __thiscall sub_103C68A0(float *this, float *a2, float *a3, int a4, char a5, float a6)
{
  int result; // eax
  int v8; // esi
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  int *v13; // ecx
  int *v14; // ecx
  char v15; // al
  float v16; // [esp+8h] [ebp-74h]
  float v17[3]; // [esp+1Ch] [ebp-60h] BYREF
  float v18[18]; // [esp+28h] [ebp-54h] BYREF
  float v19[3]; // [esp+70h] [ebp-Ch] BYREF
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF
  float v21; // [esp+8Ch] [ebp+10h]

  v21 = (float)a4;
  result = sub_100FB5C0("materials/effects/bluelaser2.vmt", v21);
  v8 = result;
  if ( result )
  {
    v9 = this[922];
    v10 = *a3 * v9;
    v11 = a3[1] * v9;
    v12 = v9 * a3[2];
    v19[0] = v10 + *a2;
    v19[1] = v11 + a2[1];
    v19[2] = v12 + a2[2];
    sub_1002A5F0((int)&savedregs, result, a2, v19, 1174421507, (int)this, 0, (int)v17);
    sub_100E10C0(v8, v18);
    sub_100F9FC0((float *)(v8 + 948), v17);
    sub_1005C3A0(v8, v21);
    sub_1005C410(v8, 0.1);
    if ( *(_DWORD *)(v8 + 920) != COERCE_INT(16.0) )
    {
      if ( *(_BYTE *)(v8 + 84) )
      {
        *(_BYTE *)(v8 + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(v8 + 24);
        if ( v13 )
          sub_100194B0(v13, 920);
      }
      *(float *)(v8 + 920) = 16.0;
    }
    if ( *(_BYTE *)(v8 + 119) != a5 )
    {
      if ( *(_BYTE *)(v8 + 84) )
      {
        *(_BYTE *)(v8 + 88) |= 1u;
      }
      else
      {
        v14 = *(int **)(v8 + 24);
        if ( v14 )
          sub_100194B0(v14, 116);
      }
      *(_BYTE *)(v8 + 119) = a5;
    }
    v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -16, 16);
    sub_1005C620((_BYTE *)(v8 + 116), 0, v15 - 111, 255, HIBYTE(*(_DWORD *)(v8 + 116)));
    sub_100F9B80(v8);
    sub_100EC3F0((_DWORD *)v8, (int)sub_10246D70, 0.0, 0);
    v16 = *(float *)(dword_106B31C8 + 12) + a6;
    return sub_100EC4A0((int *)v8, v16, 0);
  }
  return result;
}
