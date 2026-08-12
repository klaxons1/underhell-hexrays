void __thiscall sub_1009E530(float *this, float *a2, float *a3)
{
  float *v4; // esi
  int v6; // ebx
  unsigned int v7; // ecx
  float *v8; // eax
  float *v9; // ecx
  float *v10; // edi
  unsigned int v11; // edx
  float *v12; // eax
  int v13; // edi
  float v14; // edx
  float v15; // eax
  float v16[3]; // [esp+Ch] [ebp-14h] BYREF
  float *v17; // [esp+18h] [ebp-8h]
  float *v18; // [esp+1Ch] [ebp-4h]
  int v19; // [esp+28h] [ebp+8h]

  v4 = this + 306;
  v6 = (char *)(this + 306) - (char *)a2;
  v18 = this;
  v17 = this + 306;
  v7 = 12;
  v8 = a2;
  v19 = v6;
  while ( *(_DWORD *)((char *)v8 + v6) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_7;
    v6 = v19;
  }
  *v4 = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
LABEL_7:
  v9 = this + 309;
  v10 = this + 309;
  v11 = 12;
  v12 = a3;
  v13 = (char *)v10 - (char *)a3;
  while ( *(_DWORD *)((char *)v12 + v13) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_12;
  }
  *v9 = *a3;
  v9[1] = a3[1];
  v9[2] = a3[2];
LABEL_12:
  if ( v18[308] < (double)v18[311] )
  {
    v14 = v9[1];
    v16[0] = *v9;
    v15 = v9[2];
    v16[1] = v14;
    v16[2] = v15;
    sub_1009E4E0(v9, v17);
    sub_1009E4E0(v17, v16);
  }
}
