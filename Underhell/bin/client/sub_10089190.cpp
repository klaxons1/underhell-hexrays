void __thiscall sub_10089190(int this, int a2, int a3, float *a4, float a5, int a6, int a7)
{
  float *v8; // eax
  int v9; // ecx
  int v10; // edx
  float *v11; // esi
  int (__thiscall *v12)(int); // eax
  unsigned __int16 v13; // ax
  int v14; // eax
  __int16 v15; // ax
  int v16; // eax
  float *v17; // ecx
  double v18; // st7
  double v19; // st5
  double v20; // st6
  double v21; // rt1
  int v22; // edx
  _DWORD v23[3]; // [esp+Ch] [ebp-14h] BYREF
  char *v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  v8 = sub_10087890(this, a3);
  v9 = *(_DWORD *)v8;
  v10 = *((_DWORD *)v8 + 1);
  v11 = a4;
  *(float *)&v23[2] = v8[2];
  v23[0] = v9;
  v25 = a6 - (_DWORD)a4;
  v23[1] = v10;
  v24 = (char *)v23 - a6;
  a4 = (float *)(a7 - (_DWORD)a4);
  a6 = 3;
  do
  {
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 28);
    a3 = *(int *)(this + 212);
    v13 = v12(a2);
    if ( v13 == 0xFFFF )
    {
      v14 = 0;
    }
    else
    {
      v15 = *(_WORD *)(168 * v13 + *(_DWORD *)(this + 36) + 8);
      if ( (v15 & 4) != 0 )
        v16 = *(_BYTE *)(this + 208) != 0;
      else
        v16 = (v15 & 0x10) != 0 ? 3 : 0;
      v14 = v16 + 1;
    }
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 96))(a2, &a3, v14);
    v17 = (float *)((char *)v11 + v25);
    v18 = *(float *)&v24[(_DWORD)v11 + v25] * *(float *)&a3;
    v19 = *v11 - a5;
    v20 = a5;
    if ( *(float *)&v24[(_DWORD)v11 + v25] >= 0.0 )
    {
      v22 = (int)a4;
      *v17 = v19;
      *(float *)((char *)v11 + v22) = v18 + v20 + *v11;
    }
    else
    {
      v21 = a5;
      *v17 = v18 + v19;
      *(float *)((char *)v11 + (_DWORD)a4) = v21 + *v11;
    }
    ++v11;
    --a6;
  }
  while ( a6 );
}
