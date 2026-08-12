bool __stdcall sub_1007E0C0(int a1, float a2)
{
  int v2; // ecx
  _DWORD *v3; // esi
  bool result; // al
  int v5; // eax
  double v6; // st7
  float v7; // [esp+8h] [ebp-8h] BYREF
  float v8; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(a1 + 96);
  result = 0;
  if ( v2 )
  {
    v3 = (_DWORD *)sub_100D7680(v2);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 296))(v3) )
      {
        if ( *(float *)(a1 + 44) * 0.75 < a2 )
          return 1;
        v5 = v3[651];
        v6 = *(float *)(v5 + 32);
        v7 = *(float *)(v5 + 28);
        v8 = v6;
        sub_10018C80(&v7);
        if ( *(float *)(a1 + 16) * v8 + *(float *)(a1 + 12) * v7 > -0.25 )
          return 1;
      }
    }
  }
  return result;
}
