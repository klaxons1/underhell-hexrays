int __cdecl sub_100BA9F0(int a1, int a2, int a3, float a4, float a5, int a6)
{
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // edx
  double v11; // st7
  double v12; // st6
  char *i; // ecx
  int v14; // eax
  double v15; // rt0
  double v16; // st6
  double v17; // st7
  double v18; // rt1
  double v19; // rt2
  double v20; // st6
  double v21; // st7
  double v22; // rtt
  int v24; // eax
  int v25; // [esp+10h] [ebp+8h]

  if ( a1 && a2 < sub_10245270(a1) && a3 )
  {
    v6 = sub_10245550(a2);
    v7 = *(_DWORD *)(v6 + 24);
    if ( !v7 )
      return 0;
    v8 = a6;
    if ( a6 >= v7 )
      return 0;
    v9 = sub_100BA7A0((_DWORD *)v6);
    v10 = *(_DWORD *)(v6 + 24);
    v25 = (int)v9;
    if ( a6 >= v10 )
      return 0;
    v11 = a5;
    v12 = a4;
    for ( i = &v9[80 * a6]; ; i += 80 )
    {
      v14 = *((_DWORD *)i + 2);
      if ( (v14 & 0x400) != 0 )
      {
        if ( (v14 & 1) == 0 )
          goto LABEL_20;
      }
      else if ( *((int *)i + 1) >= 5000 )
      {
        goto LABEL_20;
      }
      if ( v12 <= *(float *)i )
      {
        v15 = v12;
        v16 = v11;
        v17 = v15;
        if ( v16 > *(float *)i )
          goto LABEL_22;
        v18 = v16;
        v12 = v17;
        v11 = v18;
      }
      if ( (*(_BYTE *)(v6 + 12) & 1) != 0 && v12 > v11 )
      {
        if ( v12 <= *(float *)i || (v19 = v12, v20 = v11, v21 = v19, v20 > *(float *)i) )
        {
LABEL_22:
          v24 = v25 + 80 * v8;
          *(_DWORD *)(a3 + 20) = 0;
          *(float *)(a3 + 8) = *(float *)v24;
          *(float *)(a3 + 12) = *(float *)(dword_106B31C8 + 12);
          *(_DWORD *)a3 = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(a3 + 4) = v24 + 12;
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(v24 + 8);
          return v8 + 1;
        }
        v22 = v20;
        v12 = v21;
        v11 = v22;
      }
LABEL_20:
      if ( ++v8 >= v10 )
        return 0;
    }
  }
  return 0;
}
