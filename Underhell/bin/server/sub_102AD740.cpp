char __stdcall sub_102AD740(float *a1, float a2, int a3)
{
  int v4; // edi
  float v5; // edx
  float v6; // eax
  double v7; // st7
  double v8; // st7
  char result; // al
  float v10; // [esp+1Ch] [ebp-Ch] BYREF
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF
  int v14; // [esp+38h] [ebp+10h]

  v4 = 10;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v5 = *(float *)(a3 + 584);
  v6 = *(float *)(a3 + 588);
  *(float *)&v14 = -a2;
  v10 = *(float *)(a3 + 580);
  v11 = v5;
  v12 = v6;
  while ( 1 )
  {
    v7 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           v14,
           LODWORD(a2));
    v10 = v7 + v10;
    v8 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           v14,
           LODWORD(a2));
    v11 = v8 + v11;
    v12 = v12 + 96.0;
    result = sub_102ACDA0((int)&savedregs, v4, a3, (int)&v10, a3);
    if ( result )
      break;
    if ( --v4 <= 0 )
      return result;
  }
  *a1 = v10;
  a1[1] = v11;
  a1[2] = v12;
  return 1;
}
