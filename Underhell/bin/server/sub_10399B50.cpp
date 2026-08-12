void __usercall sub_10399B50(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  int v12; // ecx
  double v13; // st6
  double v14; // st5
  float *v15; // eax
  double v16; // st6
  double v17; // st7
  int v18; // eax
  unsigned int v19; // eax
  int (__thiscall *v20)(int, _BYTE *); // edx
  float *v21; // eax
  double v22; // st6
  double v23; // st7
  _BYTE *v24; // edi
  void (__thiscall *v25)(int); // edx
  int v26; // ecx
  _BYTE v27[12]; // [esp+4h] [ebp-3Ch] BYREF
  float v28[3]; // [esp+10h] [ebp-30h] BYREF
  float v29[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v30; // [esp+28h] [ebp-18h] BYREF
  float v31; // [esp+2Ch] [ebp-14h]
  float v32; // [esp+30h] [ebp-10h]
  float v33; // [esp+34h] [ebp-Ch] BYREF
  float v34; // [esp+38h] [ebp-8h]
  float v35; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    v3 = *(_DWORD *)(a1 + 5632);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5632) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5632) & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5632) & 0xFFF) + 2] == v5 ? *v4 : 0;
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 876))(a1, v6) )
          {
            v7 = sub_10394DA0((_DWORD *)a1);
            v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
            v9 = *v8;
            v10 = v8[1];
            v11 = v8[2];
            v33 = v9;
            v12 = *(_DWORD *)(a1 + 252) >> 11;
            v34 = v10;
            v35 = v11;
            if ( (v12 & 1) != 0 )
              sub_100DAE60(a1);
            v13 = v34 - *(float *)(a1 + 584);
            v14 = v33 - *(float *)(a1 + 580);
            if ( v14 * v14 + v13 * v13 >= 576.0 )
            {
              v15 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, v28);
              v16 = v34 - v15[1];
              v17 = v35 - v15[2];
              v30 = v33 - *v15;
              v31 = v16;
              v32 = v17;
              off_10689714();
              (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 1836))(a1, &v30);
              v18 = sub_10394DA0((_DWORD *)a1);
              if ( !sub_103989D0(a1, (int)&savedregs, a2, a1, v18) && !sub_10399800((_BYTE *)a1) )
                sub_103959C0((int *)a1, (int)"No LOS");
            }
            else
            {
              sub_103959C0((int *)a1, (int)"Target too near");
            }
            return;
          }
        }
      }
    }
    v19 = *(_DWORD *)(a1 + 5632);
    if ( v19 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5632) & 0xFFF) + 2] == v19 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5632) & 0xFFF) + 1] )
    {
      if ( sub_10399800((_BYTE *)a1) )
        return;
      sub_103959C0((int *)a1, (int)"Went out of view cone");
    }
    if ( sub_103942C0(a1) == 2 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, &v33);
      (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)a1 + 528))(a1, v28, 0, v29);
      v20 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 968);
      v33 = v29[0] * -64.0 + v28[0] * 128.0 + v33;
      v34 = v29[1] * -64.0 + v28[1] * 128.0 + v34;
      v35 = -64.0 * v29[2] + 128.0 * v28[2] + v35;
      v21 = (float *)v20(a1, v27);
      v22 = v34 - v21[1];
      v23 = v35 - v21[2];
      v30 = v33 - *v21;
      v31 = v22;
      v32 = v23;
      off_10689714();
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 1836))(a1, &v30);
      return;
    }
  }
  v24 = *(_BYTE **)(a1 + 3624);
  if ( !v24
    || (v25 = *(void (__thiscall **)(int))(*(_DWORD *)v24 + 116),
        v26 = *(_DWORD *)(a1 + 3624),
        v24[8] = 1,
        v25(v26),
        !v24[8]) )
  {
    sub_10020040((int *)a1);
  }
}
