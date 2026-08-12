int __thiscall sub_10024010(float *this, int a2, int a3, int a4, int a5, float a6)
{
  int v7; // edx
  int result; // eax
  int v9; // edi
  double v10; // st6
  double v11; // st7
  int v12; // ecx
  int v13; // ebx
  double v14; // st7
  double v15; // st5
  double v16; // st5
  double v17; // st6
  _DWORD *v18; // edx
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  char v28[4]; // [esp+24h] [ebp-A8h] BYREF
  int v29; // [esp+28h] [ebp-A4h]
  int v30; // [esp+2Ch] [ebp-A0h]
  int v31; // [esp+30h] [ebp-9Ch]
  float v32; // [esp+80h] [ebp-4Ch]
  float v33; // [esp+84h] [ebp-48h]
  int v34[4]; // [esp+A8h] [ebp-24h] BYREF
  int v35[4]; // [esp+B8h] [ebp-14h] BYREF
  int v36; // [esp+C8h] [ebp-4h]

  v7 = *((_DWORD *)this + 1022);
  result = *(_DWORD *)v7;
  if ( !*(_DWORD *)(*(_DWORD *)v7 + 284) )
    return result;
  v9 = a2;
  if ( !*(_DWORD *)(a2 + 144) )
    return result;
  if ( a6 <= 1.0 )
  {
    if ( a6 < 0.0 )
      a6 = 0.0;
    v10 = 1.0;
    v11 = 0.0;
  }
  else
  {
    v10 = 1.0;
    v11 = 0.0;
    a6 = 1.0;
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = a5;
  if ( (v12 & 0x100) != 0 )
  {
    v14 = sub_1001DC50(v7, a2, a3, a5) * this[1046];
    *(float *)&a4 = v14 - (double)(int)v14;
    goto LABEL_20;
  }
  v15 = *(float *)&a4;
  if ( *(float *)&a4 < v11 || v15 >= v10 )
  {
    if ( (v12 & 1) == 0 )
    {
      v17 = 0.9999;
      if ( v15 >= 0.9999 || v15 >= 0.0 )
      {
        if ( *(float *)&a4 < 0.9999 )
          goto LABEL_20;
      }
      else
      {
        v17 = 0.0;
      }
      *(float *)&a4 = v17;
      goto LABEL_20;
    }
    v16 = v15 - (double)(int)v15;
    *(float *)&a4 = v16;
    if ( v16 < v11 )
      *(float *)&a4 = v16 + v10;
  }
LABEL_20:
  sub_1001D990(*((_DWORD *)this + 1022), a2, a3, a5, v34, (float *)v35);
  result = 0;
  v36 = 0;
  if ( *(int *)(a2 + 144) > 0 )
  {
    while ( 1 )
    {
      if ( !sub_1001C540(*((_DWORD *)this + 1022), v9, a3, *(float *)&a4, result, v13, (int)v34, (float *)v35, v28) )
        goto LABEL_35;
      v18 = (_DWORD *)*((_DWORD *)this + 1022);
      v19 = *v18;
      v20 = v30;
      v21 = *(_DWORD *)(*v18 + 288);
      v22 = v18[11];
      v23 = 16 * v30 + v21;
      v24 = *(_DWORD *)(v23 + v19 + 12);
      v25 = v19 + v23;
      v26 = *((_DWORD *)this + 1047);
      if ( (v26 & *(_DWORD *)(v22 + 4 * *(_DWORD *)(v24 + v25 + 56))) != 0
        && (v31 < 0 || (v26 & *(_DWORD *)(v22 + 4 * v31)) != 0) )
      {
        if ( !*((_DWORD *)this + 1020) )
        {
          *((_DWORD *)this + 1020) = 12;
          *((_DWORD *)this + 1021) = this;
          memset(this, 0, 0xFF0u);
          sub_100207E0(this);
          v20 = v30;
        }
        v33 = a6;
        if ( a6 * v32 <= 0.999 || v29 == 6 )
          goto LABEL_33;
        *(_DWORD *)(*((_DWORD *)this + 1023) + 20 * v20 + 12) = 0;
        if ( v29 != 4 )
          break;
      }
LABEL_34:
      v9 = a2;
LABEL_35:
      result = v36 + 1;
      v36 = result;
      if ( result >= *(_DWORD *)(v9 + 144) )
        return result;
      v13 = a5;
    }
    v20 = v30;
LABEL_33:
    v27 = sub_10022D20((int *)(*((_DWORD *)this + 1023) + 20 * v20));
    sub_1001C990((_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1023) + 20 * v30) + 132 * v27), (int)v28);
    goto LABEL_34;
  }
  return result;
}
