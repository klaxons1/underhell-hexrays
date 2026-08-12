char __thiscall sub_102AD820(float *this, float *a2, float a3, int a4)
{
  int v6; // ebx
  float v7; // ecx
  float v8; // edx
  float *v9; // eax
  double v10; // st7
  char result; // al
  float v12; // [esp+1Ch] [ebp-44h]
  _BYTE v13[12]; // [esp+2Ch] [ebp-34h] BYREF
  float v14[3]; // [esp+38h] [ebp-28h] BYREF
  float v15[3]; // [esp+44h] [ebp-1Ch] BYREF
  float v16; // [esp+50h] [ebp-10h] BYREF
  float v17; // [esp+54h] [ebp-Ch]
  float v18; // [esp+58h] [ebp-8h]
  float v19; // [esp+5Ch] [ebp-4h]
  int savedregs; // [esp+60h] [ebp+0h] BYREF
  float v21; // [esp+70h] [ebp+10h]
  float v22; // [esp+70h] [ebp+10h]

  v6 = 10;
  if ( (*(_DWORD *)(a4 + 252) & 0x800) != 0 )
    sub_100DAE60(a4);
  v7 = *(float *)(a4 + 580);
  v8 = *(float *)(a4 + 584);
  v18 = *(float *)(a4 + 588);
  v16 = v7;
  v17 = v8;
  v18 = v18 + 96.0;
  v19 = -a3;
  while ( 1 )
  {
    (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)a4 + 528))(a4, v14, v15, 0);
    v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 536))(a4, v13);
    v12 = v9[1] * v9[1] + *v9 * *v9 + v9[2] * v9[2];
    v21 = off_10689708(v12);
    v22 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(1.0, 1.5)
        * (this[260]
         * v21);
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(v19),
            LODWORD(a3));
    v16 = v15[0] * v10 + v14[0] * v22 + v16;
    v17 = v15[1] * v10 + v14[1] * v22 + v17;
    v18 = v10 * v15[2] + v22 * v14[2] + v18;
    result = sub_102ACDA0((int)&savedregs, (int)this, a4, (int)&v16, a4);
    if ( result )
      break;
    if ( --v6 <= 0 )
      return result;
  }
  *a2 = v16;
  a2[1] = v17;
  a2[2] = v18;
  return 1;
}
