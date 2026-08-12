void __cdecl sub_103FBC00(_DWORD *a1, _DWORD *a2)
{
  bool v3; // zf
  double v4; // st7
  float v5; // [esp+8h] [ebp-48h]
  float v6[3]; // [esp+14h] [ebp-3Ch] BYREF
  float v7; // [esp+20h] [ebp-30h] BYREF
  float v8; // [esp+24h] [ebp-2Ch]
  float v9; // [esp+28h] [ebp-28h]
  float v10[3]; // [esp+2Ch] [ebp-24h] BYREF
  float v11; // [esp+38h] [ebp-18h] BYREF
  float v12; // [esp+3Ch] [ebp-14h]
  float v13; // [esp+40h] [ebp-10h]
  float v14; // [esp+44h] [ebp-Ch] BYREF
  float v15; // [esp+48h] [ebp-8h]
  float v16; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF
  float v18; // [esp+58h] [ebp+8h]

  sub_100F5A30(a1, (int)v10, 0, 0);
  (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 968))(a1, &v14);
  v3 = *(_DWORD *)(dword_10698344 + 48) == 0;
  v4 = *(float *)(dword_106EFE24 + 44) * 4.0;
  v18 = v4;
  v11 = v10[0] * v4 + v14;
  v12 = v10[1] * v4 + v15;
  v13 = v10[2] * v4 + v16;
  if ( !v3 )
  {
    v5 = v4;
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*a1 + 1500))(a1, &v7, 1.0, LODWORD(v5));
    v11 = v7 * v18 + v14;
    v12 = v8 * v18 + v15;
    v13 = v18 * v9 + v16;
  }
  sub_103FB900((int)&savedregs, (int)a1, &v14, &v11, (int)a1, (int)a2);
  if ( !sub_10163160(a2) )
  {
    v7 = 4.0;
    v8 = 4.0;
    v9 = 4.0;
    v6[0] = -4.0;
    v6[1] = -4.0;
    v6[2] = -4.0;
    sub_103FA980((int)a1, &v14, &v11, v6, &v7, (int)a1, (int)a2);
  }
}
