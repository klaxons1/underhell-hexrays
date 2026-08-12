int __thiscall sub_10306040(void *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  float *v5; // eax
  int v6; // esi
  double v7; // st7
  float *v8; // eax
  float v9[3]; // [esp+1Ch] [ebp-54h] BYREF
  float v10[3]; // [esp+28h] [ebp-48h] BYREF
  int v11[3]; // [esp+34h] [ebp-3Ch] BYREF
  float v12[3]; // [esp+40h] [ebp-30h] BYREF
  float v13[3]; // [esp+4Ch] [ebp-24h] BYREF
  float v14[3]; // [esp+58h] [ebp-18h] BYREF
  float v15; // [esp+64h] [ebp-Ch]
  float v16; // [esp+68h] [ebp-8h]
  float v17; // [esp+6Ch] [ebp-4h]

  result = sub_101811E0("item_grubnugget", -1);
  v3 = result;
  if ( result )
  {
    v4 = sub_100BEF30((int)this, "glow");
    sub_100BD6D0(this, v4, (int)v12, v10, 0, 0);
    *(_DWORD *)(v3 + 1232) = sub_10305F70();
    sub_100E0D20(v3, v12);
    v5 = sub_1014AE30((float *)v11, 0.0, 360.0);
    sub_100E0EA0(v3, v5);
    result = sub_10260750((char *)v3);
    v6 = *(_DWORD *)(v3 + 424);
    if ( v6 )
    {
      (*(void (__thiscall **)(void *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v14, 0, 0);
      v7 = -RandomFloat(50.0, 75.0);
      v15 = v14[0] * v7;
      v16 = v14[1] * v7;
      v17 = v7 * v14[2];
      v8 = sub_1001F010(v9, -35.0, 35.0);
      v13[0] = *v8 + v15;
      v13[1] = v8[1] + v16;
      v13[2] = v8[2] + v17;
      sub_1001F010((float *)v11, -100.0, 100.0);
      return (*(int (__thiscall **)(int, float *, int *))(*(_DWORD *)v6 + 208))(v6, v13, v11);
    }
  }
  return result;
}
