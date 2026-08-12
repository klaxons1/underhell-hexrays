int __stdcall sub_101558D0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // esi
  double v7; // st6
  double v8; // st7
  _BYTE v9[12]; // [esp+8h] [ebp-54h] BYREF
  float v10; // [esp+14h] [ebp-48h]
  float v11; // [esp+18h] [ebp-44h]
  float v12; // [esp+1Ch] [ebp-40h]

  if ( a1 && (v2 = *(_DWORD *)(a1 + 12)) != 0 )
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  else
    v3 = 0;
  result = a2;
  if ( a2 && (v5 = *(_DWORD *)(a2 + 12)) != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
    v6 = result;
  }
  else
  {
    v6 = 0;
  }
  if ( v3 && v6 )
  {
    sub_1025F2C0(v9);
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    v7 = (*(float *)(v6 + 584) + *(float *)(v3 + 584)) * 0.5;
    v8 = (*(float *)(v6 + 588) + *(float *)(v3 + 588)) * 0.5;
    v10 = (*(float *)(v6 + 580) + *(float *)(v3 + 580)) * 0.5;
    v11 = v7;
    v12 = v8;
    return sub_101C6C20(v6, v9);
  }
  return result;
}
