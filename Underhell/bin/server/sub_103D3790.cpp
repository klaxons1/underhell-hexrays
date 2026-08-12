int __thiscall sub_103D3790(int this)
{
  int v2; // edi
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int *v6; // ecx
  float v8; // [esp+10h] [ebp-1Ch] BYREF
  float v9; // [esp+14h] [ebp-18h]
  float v10; // [esp+18h] [ebp-14h]
  float v11; // [esp+1Ch] [ebp-10h] BYREF
  float v12; // [esp+20h] [ebp-Ch]
  float v13; // [esp+24h] [ebp-8h]
  float v14; // [esp+28h] [ebp-4h]

  v2 = sub_101811E0("prop_combine_ball", -1);
  v14 = *(float *)(this + 804);
  sub_103D2FA0(v2, v14);
  sub_103D1E70((float *)this, &v8);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421CE0(this + 500, 2, &v11);
  v8 = v11 * v14 + v8;
  v9 = v12 * v14 + v9;
  v10 = v14 * v13 + v10;
  sub_100E0D20(v2, &v8);
  *(_DWORD *)(v2 + 1168) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  v3 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         *(float *)(this + 812),
         *(float *)(this + 816));
  v11 = v11 * v3;
  v12 = v12 * v3;
  v13 = v3 * v13;
  sub_100DD660(v2, &v11);
  if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 248);
    v5 = v4 | 0x10000;
    if ( v4 != (v4 | 0x10000) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v2 + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      *(_DWORD *)(v2 + 248) = v5;
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 96))(v2);
}
