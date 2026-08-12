void __thiscall sub_1002C7C0(int this, float *a2, float **a3, float **a4, float a5)
{
  float *v5; // ebx
  float *v6; // esi
  double v7; // st7
  double v8; // st6
  float *v9; // eax
  double v10; // st7
  int v11; // edi
  double v12; // st7
  float *v13; // ebx
  float *v14; // esi
  float v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-4h]
  float *v17; // [esp+2Ch] [ebp+10h]
  float v18; // [esp+30h] [ebp+14h]

  v5 = *a4;
  v6 = *a3;
  v7 = **a4 - **a3;
  v16 = this;
  v8 = a5;
  if ( fabs(a5 - v7) > 0.000099999997 && v7 > 0.000099999997 )
  {
    v9 = a2;
    v10 = v8 / v7;
    v11 = 0;
    *a2 = *v5 - v8;
    if ( *(_BYTE *)(this + 29) )
    {
      v12 = 1.0 - v10;
      v13 = v5 + 1;
      v17 = a2 + 1;
      v14 = v6 + 1;
      v18 = v12;
      do
      {
        if ( *(_BYTE *)(v11 + *(_DWORD *)(this + 32)) )
        {
          v15 = v12;
          *v17 = sub_1002BBD0(v15, *v14, *v13);
          this = v16;
          v12 = v18;
        }
        else
        {
          *v17 = (*v13 - *v14) * v12 + *v14;
        }
        ++v17;
        ++v11;
        ++v14;
        ++v13;
      }
      while ( v11 < *(unsigned __int8 *)(this + 29) );
      v9 = a2;
    }
    *a3 = v9;
  }
}
