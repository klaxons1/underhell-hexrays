bool __thiscall sub_103AECA0(void *this, float *a2, int a3)
{
  double v4; // st7
  int v5; // ecx
  float v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(void *, float *, int, _DWORD))(*(_DWORD *)this + 2024))(this, a2, a3, 0) )
    return 1;
  v4 = a2[2] - *(float *)(a3 + 8) + flt_106EB73C - 12.0;
  if ( v4 <= 0.0 )
    return 0;
  if ( v4 > 290.0 )
    v4 = 290.0;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *a2;
  v9 = a2[2];
  v8[1] = v5;
  *(float *)v8 = v6;
  v9 = v9 - v4;
  return (*(unsigned __int8 (__thiscall **)(void *, _DWORD *, int, _DWORD))(*(_DWORD *)this + 2024))(this, v8, a3, 0) != 0;
}
