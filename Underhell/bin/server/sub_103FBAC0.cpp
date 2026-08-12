void __stdcall sub_103FBAC0(_DWORD *a1, _DWORD *a2)
{
  char v3; // al
  double v4; // st7
  double v5; // st7
  float v6; // [esp+8h] [ebp-48h]
  float v7[3]; // [esp+14h] [ebp-3Ch] BYREF
  float v8; // [esp+20h] [ebp-30h] BYREF
  float v9; // [esp+24h] [ebp-2Ch]
  float v10; // [esp+28h] [ebp-28h]
  float v11[3]; // [esp+2Ch] [ebp-24h] BYREF
  float v12; // [esp+38h] [ebp-18h] BYREF
  float v13; // [esp+3Ch] [ebp-14h]
  float v14; // [esp+40h] [ebp-10h]
  float v15; // [esp+44h] [ebp-Ch] BYREF
  float v16; // [esp+48h] [ebp-8h]
  float v17; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF
  float v19; // [esp+58h] [ebp+8h]

  sub_100F5A30(a1, (int)v11, 0, 0);
  (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 968))(a1, &v15);
  v3 = *(_BYTE *)(dword_106B3CDC + 12);
  if ( v3 == 1 )
    v4 = *(float *)(dword_106EFE6C + 44);
  else
    v4 = *(float *)(dword_106EFE24 + 44);
  v5 = v4 * 4.0;
  v19 = v5;
  v12 = v11[0] * v5 + v15;
  v13 = v11[1] * v5 + v16;
  v14 = v11[2] * v5 + v17;
  if ( v3 == 1 && *(_DWORD *)(dword_10698344 + 48) )
  {
    v6 = v5;
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*a1 + 1500))(a1, &v8, 1.0, LODWORD(v6));
    v12 = v8 * v19 + v15;
    v13 = v9 * v19 + v16;
    v14 = v19 * v10 + v17;
  }
  sub_103FB900((int)&savedregs, (int)a1, &v15, &v12, (int)a1, (int)a2);
  if ( !sub_10163160(a2) )
  {
    v8 = 4.0;
    v9 = 4.0;
    v10 = 4.0;
    v7[0] = -4.0;
    v7[1] = -4.0;
    v7[2] = -4.0;
    sub_103FA980((int)a1, &v15, &v12, v7, &v8, (int)a1, (int)a2);
  }
}
