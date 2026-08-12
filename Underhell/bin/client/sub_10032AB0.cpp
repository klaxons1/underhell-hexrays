int __thiscall sub_10032AB0(_BYTE *this, char *a2, float a3, int a4, float *a5, float *a6, int a7)
{
  float *v8; // esi
  void *v9; // edi
  float *v10; // eax
  int v11; // ecx
  int v12; // ebx
  const void *v13; // eax
  float *v14; // ecx
  int v16; // [esp+4h] [ebp-64h]
  float v17; // [esp+Ch] [ebp-5Ch]
  int v18; // [esp+Ch] [ebp-5Ch]
  int v19[9]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v20[8]; // [esp+40h] [ebp-28h] BYREF
  _BYTE *v21; // [esp+60h] [ebp-8h]
  char v22; // [esp+67h] [ebp-1h] BYREF

  v21 = this;
  sub_1022DFC0(&v22);
  *(float *)&v19[2] = 0.0;
  v8 = a5;
  *(float *)&v19[3] = 0.0;
  *(float *)&v19[5] = 0.0;
  *(float *)&v19[6] = 0.0;
  *(float *)&v19[7] = 0.0;
  v19[1] = 0;
  *(float *)&v19[8] = 0.0;
  v17 = *a6 - *a5;
  sub_10032400((int)this, (float *)v19, (float **)&a4, &a5, v17);
  a5 = 0;
  if ( this[29] )
  {
    v9 = a2;
    v10 = (float *)((char *)a6 - (char *)v8);
    v11 = a4 - (_DWORD)v8;
    v12 = (int)(v8 + 1);
    a6 = (float *)((char *)a6 - (int)v8);
    for ( a4 -= (int)v8; ; v11 = a4 )
    {
      v18 = (int)v10 + v12;
      v16 = v12 + v11;
      v13 = (const void *)(*((_BYTE *)a5 + *((_DWORD *)v21 + 8))
                         ? sub_10031820((int)v20, a3, v16, v12, v18)
                         : sub_100318C0((int)v20, a3, v16, v12, v18));
      qmemcpy(v9, v13, 0x20u);
      sub_100315D0((int)a2);
      v14 = (float *)(unsigned __int8)v21[29];
      v12 += 32;
      a5 = (float *)((char *)a5 + 1);
      a2 += 32;
      if ( (int)a5 >= (int)v14 )
        break;
      v9 = a2;
      v10 = a6;
    }
  }
  return sub_1022DFE0(&v22);
}
