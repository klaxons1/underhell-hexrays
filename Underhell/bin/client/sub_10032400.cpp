void __thiscall sub_10032400(int this, float *a2, float **a3, float **a4, float a5)
{
  float **v5; // edx
  float *v6; // eax
  float **v7; // edi
  float *v8; // esi
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st7
  int v13; // ebx
  double v14; // st6
  float *v15; // esi
  double v16; // st7
  bool v17; // zf
  float *v18; // ecx
  const void *v19; // eax
  int v20; // edx
  float v21; // [esp+0h] [ebp-40h]
  int v22; // [esp+8h] [ebp-38h]
  int v23[8]; // [esp+18h] [ebp-28h] BYREF
  float v24; // [esp+38h] [ebp-8h]
  int v25; // [esp+3Ch] [ebp-4h]
  int v26; // [esp+54h] [ebp+14h]

  v5 = a3;
  v6 = *a3;
  v7 = a4;
  v8 = *a4;
  v9 = **a4;
  v25 = this;
  v10 = v9 - *v6;
  v11 = a5;
  if ( fabs(a5 - v10) > 0.000099999997 && v10 > 0.000099999997 )
  {
    v12 = v11 / v10;
    v13 = 0;
    v26 = 0;
    v14 = *v8 - v11;
    v15 = a2;
    *a2 = v14;
    if ( *(_BYTE *)(this + 29) )
    {
      v16 = 1.0 - v12;
      v24 = v16;
      while ( 1 )
      {
        v17 = *(_BYTE *)(v26 + *(_DWORD *)(this + 32)) == 0;
        v18 = *v5;
        v22 = (int)&(*v7)[v13 + 1];
        v21 = v16;
        v19 = (const void *)(v17
                           ? sub_100317A0((int)v23, v21, (int)&v18[v13 + 1], v22)
                           : sub_10031710((int)v23, v21, (int)&v18[v13 + 1], v22));
        v20 = v25;
        qmemcpy(&v15[v13 + 1], v19, 0x20u);
        v15 = a2;
        v13 += 8;
        if ( ++v26 >= *(unsigned __int8 *)(v20 + 29) )
          break;
        v16 = v24;
        v7 = a4;
        this = v20;
        v5 = a3;
      }
      *a3 = a2;
    }
    else
    {
      *a3 = a2;
    }
  }
}
