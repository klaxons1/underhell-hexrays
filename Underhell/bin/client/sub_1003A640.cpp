void __thiscall sub_1003A640(int this, float *a2, float **a3, float **a4, float a5)
{
  float **v5; // edx
  float *v6; // eax
  float **v7; // edi
  float *v8; // esi
  double v9; // st7
  double v10; // st7
  double v11; // st6
  float *v12; // eax
  double v13; // st7
  float *v14; // esi
  bool v15; // zf
  float *v16; // ecx
  char *v17; // eax
  float *v18; // edx
  double v19; // st6
  float v20; // edi
  float v21; // ecx
  float v22; // edx
  double v23; // st2
  double v24; // st3
  double v25; // st5
  double v26; // st6
  double v27; // st6
  int v28; // edi
  int v29; // ecx
  float v30; // eax
  float v31; // ecx
  int v32; // ecx
  float v33; // [esp+0h] [ebp-7Ch]
  int v34[4]; // [esp+14h] [ebp-68h] BYREF
  int v35[4]; // [esp+24h] [ebp-58h] BYREF
  int v36[4]; // [esp+34h] [ebp-48h] BYREF
  _DWORD v37[3]; // [esp+44h] [ebp-38h] BYREF
  float v38; // [esp+50h] [ebp-2Ch]
  float v39; // [esp+54h] [ebp-28h]
  float v40; // [esp+58h] [ebp-24h]
  float v41; // [esp+5Ch] [ebp-20h]
  float v42; // [esp+60h] [ebp-1Ch]
  float v43; // [esp+64h] [ebp-18h]
  float v44; // [esp+68h] [ebp-14h]
  float v45; // [esp+6Ch] [ebp-10h]
  float v46; // [esp+70h] [ebp-Ch]
  int v47; // [esp+74h] [ebp-8h]
  float v48; // [esp+78h] [ebp-4h]
  int v49; // [esp+90h] [ebp+14h]

  v5 = a3;
  v6 = *a3;
  v7 = a4;
  v8 = *a4;
  v9 = **a4;
  v47 = this;
  v10 = v9 - *v6;
  v11 = a5;
  if ( fabs(a5 - v10) > 0.000099999997 && v10 > 0.000099999997 )
  {
    v12 = a2;
    v49 = 0;
    v48 = v11 / v10;
    *a2 = *v8 - v11;
    if ( *(_BYTE *)(this + 29) )
    {
      v13 = 1.0;
      v14 = a2 + 3;
      while ( 1 )
      {
        v15 = *(_BYTE *)(v49 + *(_DWORD *)(this + 32)) == 0;
        v16 = *v7;
        v17 = (char *)v14 - 12 - (_DWORD)a2;
        if ( v15 )
        {
          v27 = *(float *)((char *)v16 + (_DWORD)v17 + 4);
          v28 = (int)v16 + (_DWORD)v17 + 4;
          v29 = (int)*v5 + (_DWORD)v17 + 4;
          if ( *(float *)v29 == v27
            && *(float *)((char *)*v5 + (_DWORD)v17 + 8) == *(float *)(v28 + 4)
            && *(float *)((char *)*v5 + (_DWORD)v17 + 12) == *(float *)(v28 + 8) )
          {
            v44 = *(float *)v29;
            v30 = *(float *)(v29 + 4);
            v31 = *(float *)(v29 + 8);
            v45 = v30;
            v46 = v31;
          }
          else
          {
            sub_101EF050(v29, v35);
            sub_101EF050(v28, v36);
            v33 = 1.0 - v48;
            sub_101F0F00((int)v35, (int)v36, v33, (int)v34);
            sub_101F0F70(v34, v37);
            v13 = 1.0;
            v46 = *(float *)&v37[2];
            v5 = a3;
            v44 = *(float *)v37;
            v45 = *(float *)&v37[1];
          }
          *(v14 - 2) = v44;
          *(v14 - 1) = v45;
          v26 = v46;
        }
        else
        {
          v18 = *v5;
          v19 = v13 - v48;
          v38 = *(float *)((char *)v16 + (_DWORD)v17 + 4);
          v20 = *(float *)((char *)v16 + (_DWORD)v17 + 8);
          v40 = *(float *)((char *)v16 + (_DWORD)v17 + 12);
          v41 = *(float *)((char *)v18 + (_DWORD)v17 + 4);
          v21 = *(float *)((char *)v18 + (_DWORD)v17 + 8);
          v22 = *(float *)((char *)v18 + (_DWORD)v17 + 12);
          v42 = v21;
          v43 = v22;
          v23 = v22;
          v5 = a3;
          v39 = v20;
          v24 = v19 * v40;
          *(v14 - 2) = v41 * (v13 - v19) + v19 * v38;
          v25 = v21 * (v13 - v19) + v19 * v20;
          v26 = (v13 - v19) * v23 + v24;
          *(v14 - 1) = v25;
        }
        v32 = v47;
        *v14 = v26;
        v14 += 3;
        if ( ++v49 >= *(unsigned __int8 *)(v32 + 29) )
          break;
        this = v47;
        v7 = a4;
      }
      v12 = a2;
    }
    *v5 = v12;
  }
}
