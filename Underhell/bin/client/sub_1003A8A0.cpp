void __thiscall sub_1003A8A0(_BYTE *this, float *a2, float a3, int a4, int a5)
{
  int v7; // esi
  float *v8; // ecx
  int v9; // eax
  _BYTE *v10; // edx
  double v11; // st7
  int v12; // eax
  double v13; // st7
  float *v14; // edi
  int v15; // ebx
  int v16; // edx
  float *v17; // esi
  double v18; // st6
  double v19; // st5
  float v20; // ecx
  float v21; // eax
  _BYTE *v22; // ecx
  int v23[4]; // [esp+14h] [ebp-64h] BYREF
  int v24[4]; // [esp+24h] [ebp-54h] BYREF
  int v25[4]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v26[3]; // [esp+44h] [ebp-34h] BYREF
  float v27; // [esp+50h] [ebp-28h]
  float v28; // [esp+54h] [ebp-24h]
  float v29; // [esp+58h] [ebp-20h]
  float v30; // [esp+5Ch] [ebp-1Ch]
  float v31; // [esp+60h] [ebp-18h]
  float v32; // [esp+64h] [ebp-14h]
  float v33; // [esp+68h] [ebp-10h]
  float v34; // [esp+6Ch] [ebp-Ch]
  float v35; // [esp+70h] [ebp-8h]
  _BYTE *v36; // [esp+74h] [ebp-4h]
  int v37; // [esp+80h] [ebp+8h]
  int v38; // [esp+88h] [ebp+10h]

  v36 = this;
  if ( a4 == a5 )
  {
    v7 = 0;
    if ( this[29] )
    {
      v8 = a2 + 2;
      v9 = a5 + 12;
      do
      {
        v10 = v36;
        *(v8 - 2) = *(float *)(v9 - 8);
        ++v7;
        v11 = *(float *)(v9 - 4);
        v9 += 12;
        *(v8 - 1) = v11;
        v8 += 3;
        *(v8 - 3) = *(float *)(v9 - 12);
      }
      while ( v7 < (unsigned __int8)v10[29] );
    }
  }
  else
  {
    v12 = 0;
    v38 = 0;
    if ( this[29] )
    {
      v13 = a3;
      v14 = a2;
      v15 = a5 - a4;
      v16 = (int)a2 - a4;
      v17 = (float *)(a4 + 4);
      v37 = (int)a2 - a4;
      do
      {
        if ( *(_BYTE *)(v12 + *((_DWORD *)v36 + 8)) )
        {
          v27 = *(float *)((char *)v17 + v15);
          v28 = *(float *)((char *)v17 + v15 + 4);
          v29 = *(float *)((char *)v17 + v15 + 8);
          v30 = *v17;
          v31 = v17[1];
          v32 = v17[2];
          v18 = (1.0 - v13) * v32 + v29 * v13;
          v19 = v31 * (1.0 - v13) + v28 * v13;
          *v14 = v30 * (1.0 - v13) + v27 * v13;
          *(float *)((char *)v17 + v16) = v19;
        }
        else
        {
          if ( *v17 == *(float *)((char *)v17 + v15)
            && v17[1] == *(float *)((char *)v17 + v15 + 4)
            && v17[2] == *(float *)((char *)v17 + v15 + 8) )
          {
            v20 = v17[1];
            v33 = *v17;
            v21 = v17[2];
            v34 = v20;
            v35 = v21;
          }
          else
          {
            sub_101EF050(v17, v24);
            sub_101EF050((char *)v17 + v15, v25);
            sub_101F0F00((int)v24, (int)v25, a3, (int)v23);
            sub_101F0F70(v23, v26);
            v13 = a3;
            v33 = *(float *)v26;
            v16 = v37;
            v34 = *(float *)&v26[1];
            v35 = *(float *)&v26[2];
          }
          v12 = v38;
          *v14 = v33;
          *(float *)((char *)v17 + v16) = v34;
          v18 = v35;
        }
        v22 = v36;
        v14[2] = v18;
        ++v12;
        v17 += 3;
        v14 += 3;
        v38 = v12;
      }
      while ( v12 < (unsigned __int8)v22[29] );
    }
  }
}
