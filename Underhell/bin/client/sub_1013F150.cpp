_DWORD *__cdecl sub_1013F150(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10,
        int a11,
        _DWORD *a12,
        int a13)
{
  _DWORD *result; // eax
  int v14; // ebx
  int v15; // edi
  int v16; // ecx
  int v17; // esi
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st4
  double v22; // st4
  int v23; // esi
  int v24; // [esp+30h] [ebp-8h]
  int v25; // [esp+34h] [ebp-4h]
  int v26; // [esp+34h] [ebp-4h]
  int v27; // [esp+6Ch] [ebp+34h]
  int v28; // [esp+6Ch] [ebp+34h]
  int v29; // [esp+6Ch] [ebp+34h]

  result = a12;
  v14 = a2;
  v15 = a3;
  if ( a12 )
  {
    if ( a2 > a12[2] )
      return result;
    if ( a3 > a12[3] )
      return result;
    v16 = *a12;
    v27 = a2 + a4 - 1;
    if ( v27 < v16 )
      return result;
    v17 = result[1];
    v25 = a3 + a5 - 1;
    if ( v25 < v17 )
      return result;
    v18 = a8;
    if ( a2 >= v16 )
    {
      v20 = a6;
    }
    else
    {
      v19 = (double)a2;
      a4 += a2 - v16;
      v14 = v16;
      a2 = v16;
      v20 = (v18 - a6) * ((double)v16 - v19) / ((double)v27 - v19) + a6;
      a6 = v20;
    }
    if ( a3 >= v17 )
    {
      v22 = a7;
    }
    else
    {
      v21 = (double)a3;
      a5 += a3 - v17;
      v15 = result[1];
      a3 = v15;
      v22 = (a9 - a7) * ((double)v17 - v21) / ((double)v25 - v21) + a7;
      a7 = v22;
    }
    v28 = v14 + a4 - 1;
    if ( v28 > result[2] )
    {
      v24 = result[2];
      a4 = v24 - v14;
      a8 = v20 + ((double)v24 - (double)a2) * (v18 - v20) / ((double)v28 - (double)a2);
    }
    v26 = v15 + a5 - 1;
    if ( v26 > result[3] )
    {
      v29 = result[3];
      a5 = v29 - v15;
      a9 = ((double)v29 - (double)a3) * (a9 - v22) / ((double)v26 - (double)a3) + v22;
    }
  }
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v23 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int))(*(_DWORD *)v23 + 412))(
    v23,
    a1,
    v14,
    v15,
    a4,
    a5,
    LODWORD(a6),
    LODWORD(a7),
    LODWORD(a8),
    LODWORD(a9),
    a10,
    a11,
    a13,
    1,
    1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 12))(v23);
  return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 4))(v23);
}
