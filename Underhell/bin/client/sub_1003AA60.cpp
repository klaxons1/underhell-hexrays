int __thiscall sub_1003AA60(_BYTE *this, float *a2, float a3, int a4, float *a5, float *a6, int a7)
{
  float *v8; // ebx
  bool v9; // zf
  float *v10; // edx
  float *v11; // edi
  float *v12; // ecx
  float *v13; // esi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  double v17; // st7
  float *v18; // eax
  int v19; // ecx
  _BYTE *v20; // edx
  int v21; // ecx
  float v23; // [esp+10h] [ebp-60h]
  float v24[4]; // [esp+1Ch] [ebp-54h] BYREF
  int v25[3]; // [esp+2Ch] [ebp-44h] BYREF
  int v26[3]; // [esp+38h] [ebp-38h] BYREF
  int v27[3]; // [esp+44h] [ebp-2Ch] BYREF
  int v28[3]; // [esp+50h] [ebp-20h] BYREF
  int v29; // [esp+5Ch] [ebp-14h]
  int v30; // [esp+60h] [ebp-10h]
  float *v31; // [esp+64h] [ebp-Ch]
  _BYTE *v32; // [esp+68h] [ebp-8h]
  char v33; // [esp+6Fh] [ebp-1h] BYREF
  int v34; // [esp+78h] [ebp+8h]

  v32 = this;
  sub_1022DFC0(&v33);
  v8 = a5;
  v23 = *a6 - *a5;
  sub_1003A640((int)this, v24, (float **)&a4, &a5, v23);
  v9 = this[29] == 0;
  a5 = 0;
  if ( !v9 )
  {
    v10 = a6;
    v30 = (char *)a6 - (char *)v8;
    v29 = a4 - (_DWORD)v8;
    v11 = a2;
    a4 = (char *)a2 - (char *)v8;
    v12 = v8 + 1;
    v31 = v8 + 1;
    v13 = v8 + 1;
    v34 = -4 - (_DWORD)v8;
    while ( 1 )
    {
      if ( *((_BYTE *)a5 + *((_DWORD *)v32 + 8)) )
      {
        v28[0] = *(_DWORD *)((char *)v10 + (_DWORD)v13 + v34 + 4);
        v14 = *(_DWORD *)((char *)v10 + (_DWORD)v13 + v34 + 8);
        v28[2] = *(_DWORD *)((char *)v10 + (_DWORD)v13 + v34 + 12);
        v27[0] = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v34);
        v15 = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v34 + 8);
        v27[1] = *(_DWORD *)((char *)v12 + (_DWORD)v13 + v34 + 4);
        v27[2] = v15;
        v28[1] = v14;
        sub_1003A3C0(v26, a3, (int)v26, (float *)v27, (float *)v28);
        v16 = a4;
        *v11 = *(float *)v26;
        *(float *)((char *)v13 + v16) = *(float *)&v26[1];
        v17 = *(float *)&v26[2];
      }
      else
      {
        v18 = (float *)sub_1003A3C0(v25, a3, (int)v13 + v29, v13, (float *)((char *)v13 + v30));
        v19 = a4;
        *v11 = *v18;
        *(float *)((char *)v13 + v19) = v18[1];
        v17 = v18[2];
      }
      v20 = v32;
      v11[2] = v17;
      v21 = (unsigned __int8)v20[29];
      v13 += 3;
      v11 += 3;
      a5 = (float *)((char *)a5 + 1);
      if ( (int)a5 >= v21 )
        break;
      v10 = a6;
      v12 = v31;
    }
  }
  return sub_1022DFE0(&v33);
}
