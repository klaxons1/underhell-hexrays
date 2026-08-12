void __thiscall sub_1010F1D0(int this, int a2, int a3, float *a4, int a5, int a6, int a7, int a8, float a9)
{
  double v11; // st7
  double v12; // st7
  int *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  char String1[4]; // [esp+14h] [ebp-38h] BYREF
  int v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  int v20; // [esp+20h] [ebp-2Ch]
  float v21; // [esp+24h] [ebp-28h]
  float v22; // [esp+28h] [ebp-24h]
  float v23; // [esp+2Ch] [ebp-20h]
  float v24; // [esp+30h] [ebp-1Ch]
  float v25; // [esp+34h] [ebp-18h]
  float v26; // [esp+38h] [ebp-14h]
  int v27; // [esp+3Ch] [ebp-10h]
  int v28; // [esp+40h] [ebp-Ch]
  float v29; // [esp+44h] [ebp-8h]
  char v30; // [esp+48h] [ebp-4h]
  _DWORD *v31; // [esp+54h] [ebp+8h]
  int i; // [esp+58h] [ebp+Ch]

  *(_DWORD *)String1 = a2;
  v20 = sub_10034480((__int16 *)a2);
  v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, v20);
  v11 = *a4;
  v19 = a3;
  v24 = v11;
  v12 = a4[1];
  v27 = a5;
  v25 = v12;
  v26 = a4[2];
  v21 = 0.0;
  v13 = (int *)(this + 4);
  v22 = 0.0;
  v23 = 0.0;
  v28 = a8;
  v30 = 0;
  v29 = 1.0;
  sub_10114F30(this + 4, String1, dword_10436254);
  sub_1000F430((_DWORD *)a2, 0);
  v31 = (_DWORD *)(this + 28);
  sub_1000F430((_DWORD *)a2, *(_DWORD *)(this + 28));
  sub_1000FCA0((_DWORD *)a2, 1);
  sub_101149A0(this + 4, a6, a7, a9);
  v14 = sub_10034480((__int16 *)a2);
  sub_101148F0(this + 4, v18, v14, 1);
  *(float *)(this + 768) = *((float *)off_103DC81C + 3);
  *(_DWORD *)(a2 + 312) |= 0x40000u;
  if ( *(_DWORD *)(this + 4) )
  {
    sub_1010ECE0((float *)this, a2);
    for ( i = 0; i < *v13; ++i )
    {
      v15 = *(_DWORD *)off_103E1DD0;
      v16 = sub_10034480((__int16 *)a2);
      (*(void (__thiscall **)(void *, _DWORD, int))(v15 + 8))(off_103E1DD0, *v31, v16);
      v31 += 6;
    }
  }
}
