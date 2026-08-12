int __thiscall sub_10061AB0(int *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // ebx
  int v8; // edi
  bool v9; // zf
  int v10; // edi
  int v11; // ebx
  int v12; // ebx
  int v13; // ecx
  double v14; // st7
  double v15; // st4
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  float *v19; // ecx
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int result; // eax
  _DWORD v24[3]; // [esp+Ch] [ebp-420h] BYREF
  _BYTE v25[208]; // [esp+18h] [ebp-414h] BYREF
  int v26; // [esp+E8h] [ebp-344h]
  int v27; // [esp+1B0h] [ebp-27Ch]
  int v28; // [esp+238h] [ebp-1F4h]
  _BYTE v29[180]; // [esp+23Ch] [ebp-1F0h] BYREF
  int v30; // [esp+2F0h] [ebp-13Ch]
  int v31; // [esp+2F4h] [ebp-138h]
  char v32; // [esp+2F8h] [ebp-134h]
  _DWORD v33[4]; // [esp+2FCh] [ebp-130h] BYREF
  int v34; // [esp+30Ch] [ebp-120h]
  int v35; // [esp+310h] [ebp-11Ch]
  int v36; // [esp+314h] [ebp-118h]
  int v37; // [esp+37Ch] [ebp-B0h]
  int v38; // [esp+3D4h] [ebp-58h]
  int v39; // [esp+3DCh] [ebp-50h]
  int v40; // [esp+3E0h] [ebp-4Ch]
  int v41; // [esp+424h] [ebp-8h]
  int v42; // [esp+428h] [ebp-4h]
  int v43; // [esp+43Ch] [ebp+10h]
  int v44; // [esp+43Ch] [ebp+10h]
  int v45; // [esp+440h] [ebp+14h]
  int v46; // [esp+440h] [ebp+14h]
  int v47; // [esp+444h] [ebp+18h]

  sub_10016C20((int)v29);
  v7 = 0;
  v8 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 224))(a2, 1, 0, 0, a3);
  v42 = v8;
  sub_10061780((int)v29, v8, 2, a4, a5);
  v24[0] = &CBeamSegDraw::`vftable';
  sub_10016C20((int)v25);
  v9 = a6 == 0;
  v28 = 0;
  v47 = 0;
  if ( v9 )
  {
    v46 = 0;
    if ( this[6] <= 0 )
      goto LABEL_29;
    v44 = 0;
    do
    {
      v20 = *(_DWORD *)(v7 + this[7]);
      sub_10233F90(a2, v20, a3, v29, v47);
      if ( v20 > 0 )
      {
        do
        {
          sub_10234090(this[7] + v7 + 4);
          v7 += 36;
          --v20;
        }
        while ( v20 );
        v7 = v44;
      }
      sub_10233EF0(v24);
      v21 = v47 + 2 * *(_DWORD *)(v7 + this[7]);
      v7 += 3288;
      v47 = v21;
      ++v46;
      v44 = v7;
    }
    while ( v46 < this[6] );
  }
  else
  {
    v43 = 0;
    if ( this[6] <= 0 )
      goto LABEL_29;
    v10 = 0;
    v41 = 0;
    do
    {
      if ( 0.0 != *(float *)(dword_1040E9FC + 44)
        || *(float *)(dword_1040E96C + 44) < (double)*(float *)(v10 + this[7] + 3284) )
      {
        v11 = *(_DWORD *)(v10 + this[7]);
        v45 = v11;
        sub_10233F90(a2, v11, a3, v29, v47);
        if ( v11 > 0 )
        {
          v12 = v10 + 2956;
          do
          {
            v13 = this[7];
            v14 = *(float *)(v12 + v13);
            *(float *)(v10 + v13 + 32) = *(float *)(v12 + v13);
            v15 = *(float *)(dword_1040E9B4 + 44);
            if ( v15 == *(float *)(dword_1040E96C + 44) )
            {
              v16 = v15 < v14;
              v17 = v15 == v14;
              v18 = *(float *)(dword_1040E9FC + 44);
              if ( v16 || v17 )
                v18 = *(float *)(dword_1040EA44 + 44);
            }
            else
            {
              v18 = *(float *)(dword_1040E9FC + 44)
                  + (v14 - *(float *)(dword_1040E96C + 44))
                  * (*(float *)(dword_1040EA44 + 44) - *(float *)(dword_1040E9FC + 44))
                  / (v15 - *(float *)(dword_1040E96C + 44));
            }
            v19 = (float *)(v10 + v13 + 36);
            *v19 = v18;
            if ( v18 <= 1.0 )
            {
              if ( v18 < 0.0 )
                v18 = 0.0;
            }
            else
            {
              v18 = 1.0;
            }
            *v19 = v18;
            sub_10234090(v10 + this[7] + 4);
            v12 += 4;
            v10 += 36;
            --v45;
          }
          while ( v45 );
          v10 = v41;
        }
        sub_10233EF0(v24);
        v47 += 2 * *(_DWORD *)(v10 + this[7]);
      }
      v10 += 3288;
      ++v43;
      v41 = v10;
    }
    while ( v43 < this[6] );
  }
  v8 = v42;
LABEL_29:
  if ( v32 )
  {
    switch ( v31 )
    {
      case 4:
        v22 = 2 * v40 - 2;
        break;
      case 5:
        v22 = 2 * v40;
        break;
      case 6:
        v22 = 3 * v40 - 6;
        break;
      case 7:
        v22 = 6 * v40 / 4;
        break;
      case 8:
        v22 = 0;
        break;
      default:
        v22 = v40;
        break;
    }
    sub_10016B00(v33, v31, v22);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v30 + 80))(v30, v40, v36, v29);
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v38 = 0;
  v37 = -1;
  v30 = 0;
  result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 48))(v8, -1, 0);
  if ( v27 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 16))(v27);
  }
  if ( v26 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 16))(v26);
  }
  if ( v38 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 16))(v38);
  }
  if ( v34 )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v34 + 8))(v34, v24[0]);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 16))(v34);
  }
  return result;
}
