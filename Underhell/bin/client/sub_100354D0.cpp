void __thiscall sub_100354D0(int this, float *a2, float **a3, float **a4, float a5)
{
  float *v5; // ebx
  float *v6; // edi
  double v7; // st7
  double v8; // st6
  float *v9; // edx
  double v10; // st7
  double v11; // st7
  int v12; // ecx
  float *v13; // esi
  float *v14; // eax
  double v15; // st5
  double v16; // st4
  double v17; // st4
  double v18; // st5
  int v19; // [esp+20h] [ebp-10h]
  int v21; // [esp+40h] [ebp+10h]
  int v22; // [esp+44h] [ebp+14h]

  v5 = *a4;
  v6 = *a3;
  v7 = **a4 - **a3;
  v8 = a5;
  if ( fabs(a5 - v7) > 0.000099999997 && v7 > 0.000099999997 )
  {
    v9 = a2;
    v10 = v8 / v7;
    v21 = 0;
    *a2 = *v5 - v8;
    if ( *(_BYTE *)(this + 29) )
    {
      v19 = (char *)v5 - (char *)v6;
      v11 = 1.0 - v10;
      v22 = (char *)a2 - (char *)v6;
      v12 = 0;
      v13 = a2 + 1;
      v14 = v6 + 3;
      do
      {
        if ( *(_BYTE *)(v12 + *(_DWORD *)(this + 32)) )
        {
          v15 = (1.0 - v11) * *v14 + v11 * *(float *)((char *)v5 + (_DWORD)((char *)v14 - 12 - (_DWORD)v6) + 12);
          v16 = *(v14 - 1) * (1.0 - v11) + v11 * *(float *)((char *)v5 + (_DWORD)((char *)v14 - 12 - (_DWORD)v6) + 8);
          *v13 = *(v14 - 2) * (1.0 - v11) + v11 * *(float *)((char *)v5 + (_DWORD)((char *)v14 - 12 - (_DWORD)v6) + 4);
          v13[1] = v16;
          *(float *)((char *)v14 + v22) = v15;
          v12 = v21;
        }
        else
        {
          v17 = (*(float *)((char *)v14 + v19) - *v14) * v11 + *v14;
          v18 = (*(float *)((char *)v14 + v19 - 4) - *(v14 - 1)) * v11 + *(v14 - 1);
          *v13 = (*(float *)((char *)v13 + (char *)v5 - (char *)a2) - *(v14 - 2)) * v11 + *(v14 - 2);
          v13[1] = v18;
          *(float *)((char *)v14 + v22) = v17;
        }
        ++v12;
        v14 += 3;
        v13 += 3;
        v21 = v12;
      }
      while ( v12 < *(unsigned __int8 *)(this + 29) );
      v9 = a2;
    }
    *a3 = v9;
  }
}
