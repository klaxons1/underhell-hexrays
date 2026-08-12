bool __usercall sub_1001E440@<al>(int a1@<eax>)
{
  int v2; // ebx
  float *v3; // edi
  float *v4; // eax
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  double v11; // rt1
  float v13[3]; // [esp+Ch] [ebp-Ch]

  v2 = 0;
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320);
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 8))(a1 + 320);
  v5 = 0;
  v13[0] = *v4 - *v3;
  v13[1] = v4[1] - v3[1];
  v13[2] = v4[2] - v3[2];
  v6 = 42.0;
  v7 = 30.0;
  while ( 1 )
  {
    v8 = v7;
    v9 = v6;
    v10 = v8;
    if ( v9 <= v13[v5] )
      break;
    v11 = v9;
    v7 = v10;
    v6 = v11;
    if ( v7 >= v13[v5] )
      ++v2;
    if ( ++v5 >= 3 )
      return v2 >= 2;
  }
  return 0;
}
