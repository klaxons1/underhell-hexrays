int __thiscall sub_10038F60(_BYTE *this, float *a2, float a3, int a4, float *a5, float *a6, int a7)
{
  float *v8; // ebx
  bool v9; // zf
  int v10; // edx
  float *v11; // edi
  float *v12; // ecx
  float *v13; // esi
  int v14; // ebx
  int v15; // ecx
  int v16; // edx
  double v17; // st7
  float *v18; // eax
  _BYTE *v19; // ecx
  int v20; // edx
  float v22; // [esp+10h] [ebp-70h]
  float v23[4]; // [esp+1Ch] [ebp-64h] BYREF
  float v24[3]; // [esp+2Ch] [ebp-54h] BYREF
  int v25[3]; // [esp+38h] [ebp-48h] BYREF
  int v26[3]; // [esp+44h] [ebp-3Ch] BYREF
  int v27[3]; // [esp+50h] [ebp-30h] BYREF
  int v28[3]; // [esp+5Ch] [ebp-24h] BYREF
  int v29; // [esp+68h] [ebp-18h]
  int v30; // [esp+6Ch] [ebp-14h]
  int v31; // [esp+70h] [ebp-10h]
  float *v32; // [esp+74h] [ebp-Ch]
  _BYTE *v33; // [esp+78h] [ebp-8h]
  char v34; // [esp+7Fh] [ebp-1h] BYREF
  int v35; // [esp+88h] [ebp+8h]

  v33 = this;
  sub_1022DFC0(&v34);
  v8 = a5;
  v22 = *a6 - *a5;
  sub_100354D0((int)this, v23, (float **)&a4, &a5, v22);
  v9 = this[29] == 0;
  a5 = 0;
  if ( !v9 )
  {
    v10 = a4;
    v30 = (char *)a6 - (char *)v8;
    v29 = a4 - (_DWORD)v8;
    v11 = a2;
    v35 = (char *)a2 - (char *)v8;
    v12 = v8 + 1;
    v32 = v8 + 1;
    v13 = v8 + 1;
    v31 = -4 - (_DWORD)v8;
    while ( 1 )
    {
      if ( *((_BYTE *)a5 + *((_DWORD *)v33 + 8)) )
      {
        v28[0] = *(_DWORD *)((char *)a6 + (_DWORD)v13 + v31 + 4);
        v28[1] = *(_DWORD *)((char *)a6 + (_DWORD)v13 + v31 + 8);
        v28[2] = *(_DWORD *)((char *)a6 + (_DWORD)v13 + v31 + 12);
        v27[0] = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v31);
        v14 = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v31 + 4);
        v27[2] = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v31 + 8);
        v26[0] = *(int *)((char *)v13 + v31 + v10 + 4);
        v15 = *(_DWORD *)((char *)v13 + v31 + v10 + 8);
        v16 = *(_DWORD *)((char *)v13 + v31 + v10 + 12);
        v26[1] = v15;
        v26[2] = v16;
        v27[1] = v14;
        sub_100353D0((float *)v25, a3, (float *)v26, (float *)v27, (float *)v28);
        *v11 = *(float *)v25;
        *(float *)((char *)v13 + v35) = *(float *)&v25[1];
        v17 = *(float *)&v25[2];
      }
      else
      {
        v18 = sub_100353D0(v24, a3, (float *)((char *)v13 + v29), v13, (float *)((char *)v13 + v30));
        *v11 = *v18;
        *(float *)((char *)v13 + v35) = v18[1];
        v17 = v18[2];
      }
      v19 = v33;
      v11[2] = v17;
      v20 = (unsigned __int8)v19[29];
      v13 += 3;
      v11 += 3;
      a5 = (float *)((char *)a5 + 1);
      if ( (int)a5 >= v20 )
        break;
      v12 = v32;
      v10 = a4;
    }
  }
  return sub_1022DFE0(&v34);
}
