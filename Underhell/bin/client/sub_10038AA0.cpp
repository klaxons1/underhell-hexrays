void __thiscall sub_10038AA0(_BYTE *this, int a2, float a3, float *a4, float *a5, float *a6)
{
  float *v6; // ebx
  float *v7; // esi
  bool v9; // zf
  double v10; // st7
  float *v11; // eax
  int v12; // edx
  char *v13; // edi
  float *v14; // ecx
  double v15; // st5
  _BYTE *v16; // ebx
  double v17; // st2
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st1
  int v23; // edi
  double v24; // st6
  double v25; // rt0
  double v26; // st1
  double v27; // st6
  int v28; // ebx
  float v29; // [esp+0h] [ebp-40h]
  float v30[6]; // [esp+10h] [ebp-30h] BYREF
  float v31; // [esp+28h] [ebp-18h]
  _BYTE *v32; // [esp+2Ch] [ebp-14h]
  int v33; // [esp+30h] [ebp-10h]
  int v34; // [esp+34h] [ebp-Ch]
  int v35; // [esp+38h] [ebp-8h]
  int v36; // [esp+3Ch] [ebp-4h]
  int i; // [esp+48h] [ebp+8h]

  v6 = a6;
  v7 = a5;
  v29 = *a6 - *a5;
  v32 = this;
  sub_100354D0((int)this, v30, &a4, &a5, v29);
  v9 = this[29] == 0;
  v36 = 0;
  if ( !v9 )
  {
    v10 = a3;
    v11 = a4 + 3;
    v34 = (char *)v6 - (char *)a4;
    v35 = (char *)a6 - (char *)v7;
    a5 = (float *)((char *)v7 - (char *)a4);
    v33 = a2 - (_DWORD)v7;
    v12 = a2 + 4;
    v13 = (char *)a6 - a2;
    v14 = v7 + 2;
    for ( i = (int)a6 - a2; ; v13 = (char *)i )
    {
      v11 += 3;
      v15 = *(v14 - 1) - *(v11 - 5);
      v14 += 3;
      v12 += 12;
      v16 = v32;
      v17 = 1.0 / (*v7 - *a4);
      v18 = v15 * v17;
      v19 = (*(v14 - 3) - *(v11 - 4)) * v17;
      v20 = (*(float *)((char *)v11 + (_DWORD)a5 - 12) - *(v11 - 3)) * v17;
      v21 = *(float *)&v13[v12 - 12] - *(v14 - 4);
      v22 = *(float *)((char *)v14 + v35 - 12) - *(v14 - 3);
      v31 = *(float *)((char *)v11 + v34 - 12) - *(float *)((char *)v11 + (_DWORD)a5 - 12);
      v23 = v33;
      v24 = 1.0 / (*a6 - *v7);
      v25 = v22 * v24;
      v26 = (v21 * v24 - v18) * v10;
      v27 = (v24 * v31 - v20) * v10 + v20;
      *(float *)(v12 - 16) = v18 + v26;
      *(float *)(v12 - 12) = v19 + (v25 - v19) * v10;
      *(float *)((char *)v14 + v23 - 12) = v27;
      v28 = (unsigned __int8)v16[29];
      if ( ++v36 >= v28 )
        break;
    }
  }
}
