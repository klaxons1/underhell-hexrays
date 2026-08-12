int __thiscall sub_10226FC0(float *this, int a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *v5; // esi
  int result; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // edi
  double v10; // st7
  int v11; // esi
  double v12; // st6
  double v13; // st5
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // rt0
  double v23; // st3
  double v24; // st4
  int v25; // edi
  double v26; // st2
  float v28; // [esp+10h] [ebp-60h]
  int v29; // [esp+14h] [ebp-5Ch]
  float v30; // [esp+18h] [ebp-58h]
  int v31; // [esp+1Ch] [ebp-54h]
  int v32; // [esp+20h] [ebp-50h]
  float v33; // [esp+28h] [ebp-48h]
  float v34; // [esp+30h] [ebp-40h] BYREF
  float v35; // [esp+34h] [ebp-3Ch]
  float v36; // [esp+38h] [ebp-38h]
  float v37; // [esp+3Ch] [ebp-34h]
  float v38; // [esp+40h] [ebp-30h]
  float v39; // [esp+44h] [ebp-2Ch]
  float v40; // [esp+48h] [ebp-28h]
  float v41; // [esp+4Ch] [ebp-24h]
  int v42; // [esp+74h] [ebp+4h]

  v4 = a4;
  v5 = (_DWORD *)a3;
  if ( *(_BYTE *)(a4 + 8) )
    sub_102232A0(a3, (float *)a4, (int)(this + 11), a4 + 12);
  (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)a2 + 120))(a2, 0, &v34);
  result = sub_10227A90(a2, 0, &a3, v4);
  v7 = v5[1517];
  v8 = v5[1519];
  v29 = v5[1583] >> 2;
  v30 = this[22] * 0.0174532925199433;
  v9 = v5[1581] >> 2;
  v31 = v5[1585] >> 2;
  v42 = v9;
  v32 = v5[1521];
  a4 = 0;
  if ( a3 > 0 )
  {
    v10 = v41;
    v11 = result + 4;
    v12 = v40;
    v13 = v36;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v11 - 16);
      v11 -= 16;
      v15 = v14 / 4;
      v16 = v9 * (v14 / 4);
      v17 = v14 & 3;
      v18 = v17 + 4 * v16;
      v19 = *(float *)(v7 + 4 * v18);
      v20 = *(float *)(v7 + 4 * v18 + 16);
      v21 = *(float *)(v7 + 4 * (v18 + 8));
      v22 = v13 * v21 + v35 * v20 + v34 * v19 + v37;
      v23 = v19 * v38 + v20 * v39 + v21 * v12;
      v24 = v22;
      v28 = v22;
      if ( (LODWORD(v28) & 0x7F800000) != 0x7F800000 )
      {
        v25 = v17 + 4 * v29 * v15;
        v26 = *(float *)(v8 + 4 * v25 + 16);
        v33 = v23 + v10;
        *(float *)(v32 + 4 * (v17 + 4 * v31 * v15)) = atan2(
                                                        v33
                                                      - (v10
                                                       + *(float *)(v8 + 4 * (v25 + 8)) * v12
                                                       + v26 * v39
                                                       + *(float *)(v8 + 4 * v25) * v38),
                                                        v24
                                                      - (v35 * v26
                                                       + v13 * *(float *)(v8 + 4 * (v25 + 8))
                                                       + v34 * *(float *)(v8 + 4 * v25)
                                                       + v37))
                                                    + v30;
        v10 = v41;
        v12 = v40;
        v13 = v36;
      }
      result = ++a4;
      if ( a4 >= a3 )
        break;
      v9 = v42;
    }
  }
  return result;
}
