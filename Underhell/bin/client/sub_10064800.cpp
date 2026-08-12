float *__cdecl sub_10064800(int a1)
{
  int v1; // eax
  __int16 v2; // ax
  float *result; // eax
  float *v4; // edi
  int v5; // eax
  double v6; // st7
  __int16 v7; // [esp-4h] [ebp-24h]
  float v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+4h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-18h]
  float v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-4h]

  v12 = *(_DWORD *)(a1 + 4);
  v10 = sub_1022A800("NumSegments", 0);
  v9 = sub_1022B4C0("Material", (int)Locale);
  sub_1022A940("Width", 0.5);
  v1 = sub_1022B4C0("EndAttachment", (int)Locale);
  v8 = COERCE_FLOAT((*(int (__thiscall **)(int, int, _DWORD))(v12 + 140))(a1 + 4, v1, 0.5));
  v7 = sub_1022B4C0("StartAttachment", (int)Locale);
  v2 = (*(int (__thiscall **)(int))(v12 + 140))(a1 + 4);
  result = sub_10064730(a1, a1, v2, v7, v8, v9, v10, 0);
  v4 = result;
  if ( result )
  {
    if ( !sub_1022A800("Gravity", 1) )
      *((_DWORD *)v4 + 312) |= 0x100u;
    v5 = sub_1022A800("Length", 0);
    v6 = v4[483];
    v11 = v4[483];
    *((_DWORD *)v4 + 481) = v5;
    sub_1022A940("TextureScale", v11);
    v4[483] = v6;
    *((_DWORD *)v4 + 312) |= 8u;
    v4[482] = 0.0;
    return v4;
  }
  return result;
}
