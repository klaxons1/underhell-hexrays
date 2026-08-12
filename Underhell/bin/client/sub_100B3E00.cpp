int __thiscall sub_100B3E00(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10)
{
  int v11; // edi
  int result; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st4
  void (__stdcall *v18)(int); // eax
  int v19; // [esp+14h] [ebp-68h]
  _BYTE v20[20]; // [esp+20h] [ebp-5Ch] BYREF
  float v21; // [esp+34h] [ebp-48h]
  float v22; // [esp+3Ch] [ebp-40h]
  float v23; // [esp+44h] [ebp-38h]
  float v24; // [esp+4Ch] [ebp-30h]
  float v25; // [esp+68h] [ebp-14h]
  float v26; // [esp+6Ch] [ebp-10h]
  float v27; // [esp+70h] [ebp-Ch]
  float v28; // [esp+74h] [ebp-8h]
  int v29; // [esp+78h] [ebp-4h]
  float v30; // [esp+8Ch] [ebp+10h]

  if ( *(_BYTE *)(this + 128) )
  {
    v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
            dword_1047CA6C,
            *(_DWORD *)(this + 132));
    v30 = (double)(v11 - a7) / (double)v11;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(this + 132));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *a10);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, a2, a3 - a5);
    result = (*(int (__stdcall **)(_DWORD, _BYTE *))(*(_DWORD *)dword_1047CA6C + 412))(
               (unsigned __int16)*(char *)(this + 130),
               v20);
    if ( (_BYTE)result )
    {
      if ( a5 )
      {
        v21 = v21 + (v23 - v21) * v30;
        v22 = v30 * (v24 - v22) + v22;
      }
      else if ( a7 != v11 )
      {
        v13 = 1.0 - v30;
        v23 = v21 + (v23 - v21) * v13;
        v24 = v13 * (v24 - v22) + v22;
      }
      return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA6C + 416))(dword_1047CA6C, v20);
    }
  }
  else
  {
    result = *(_DWORD *)(this + 136);
    if ( result != -1 )
    {
      v14 = (double)(*(_DWORD *)(this + 160) - *(_DWORD *)(this + 156));
      v29 = *(_DWORD *)(this + 168) - *(_DWORD *)(this + 164);
      v15 = (double)v29;
      v16 = *(float *)(this + 148) - *(float *)(this + 140);
      v19 = result;
      v17 = *(float *)(this + 152) - *(float *)(this + 144);
      v25 = (double)a4 / v14 * v16 + *(float *)(this + 140);
      v18 = *(void (__stdcall **)(int))(*(_DWORD *)dword_1047CA6C + 128);
      v26 = (double)a5 / v15 * v17 + *(float *)(this + 144);
      v27 = v16 * ((double)(a6 + a4) / v14) + *(float *)(this + 140);
      v28 = v17 * ((double)(a7 + a5) / v15) + *(float *)(this + 144);
      v18(v19);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *a10);
      return (*(int (__thiscall **)(int, int, int, int, int, float, float, float, float))(*(_DWORD *)dword_1047CA6C + 392))(
               dword_1047CA6C,
               a2,
               a3,
               a2 + a8,
               a3 + a9,
               COERCE_FLOAT(LODWORD(v25)),
               COERCE_FLOAT(LODWORD(v26)),
               COERCE_FLOAT(LODWORD(v27)),
               COERCE_FLOAT(LODWORD(v28)));
    }
  }
  return result;
}
