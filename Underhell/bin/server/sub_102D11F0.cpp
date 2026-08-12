void __usercall sub_102D11F0(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  float *v8; // eax
  double v9; // st7
  unsigned int v10; // eax
  int v11; // edi
  float *v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edi
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // eax
  float *v20; // edi
  int *v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // eax
  float *v31; // edi
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  float *v36; // esi
  int *v37; // ecx
  float v38[3]; // [esp+14h] [ebp-34h] BYREF
  _BYTE v39[12]; // [esp+20h] [ebp-28h] BYREF
  float v40; // [esp+2Ch] [ebp-1Ch]
  float v41; // [esp+30h] [ebp-18h]
  float v42; // [esp+34h] [ebp-14h]
  float v43[3]; // [esp+38h] [ebp-10h] BYREF
  float v44; // [esp+44h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 1420);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    if ( *(float *)(a1 + 1432) <= (double)*(float *)(dword_106B31C8 + 12) )
    {
      v5 = sub_100FB5C0("effects/blueblacklargebeam.vmt", 1.0);
      if ( v5 )
        *(_DWORD *)(a1 + 1420) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      else
        *(_DWORD *)(a1 + 1420) = -1;
      v6 = *(_DWORD *)(a1 + 1420);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      sub_1005C620((_BYTE *)(v7 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v7 + 116)));
      sub_100EC3F0((_DWORD *)a1, (int)sub_102D15F0, *(float *)(dword_106B31C8 + 12), off_10662E20);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_104222B0(a1 + 704, v43, 0, 0);
      v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 744))(a1, v39, a2);
      v40 = *v8 + v43[0];
      v41 = v8[1] + v43[1];
      v9 = v8[2];
      v10 = *(_DWORD *)(a1 + 1420);
      v42 = v9 + v43[2];
      if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 744))(a1);
      sub_100FAC00(v11, v12, v38);
      v13 = *(_DWORD *)(a1 + 1420);
      if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v13 >> 12 )
        v14 = 0;
      else
        v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      v15 = v14 + 116;
      if ( *(_BYTE *)(v14 + 119) != 0xFF )
      {
        if ( *(_BYTE *)(v14 + 84) )
        {
          *(_BYTE *)(v14 + 88) |= 1u;
        }
        else
        {
          v16 = *(int **)(v14 + 24);
          if ( v16 )
            sub_100194B0(v16, 116);
        }
        *(_BYTE *)(v15 + 3) = -1;
      }
      v17 = *(_DWORD *)(a1 + 1420);
      if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v17 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      v19 = *(_DWORD *)(v18 + 928);
      v20 = (float *)(v18 + 928);
      v44 = 0.0;
      if ( v19 != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(v18 + 84) )
        {
          *(_BYTE *)(v18 + 88) |= 1u;
        }
        else
        {
          v21 = *(int **)(v18 + 24);
          if ( v21 )
            sub_100194B0(v21, 928);
        }
        *v20 = 0.0;
      }
      v22 = *(_DWORD *)(a1 + 1420);
      if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v22 >> 12 )
        v23 = 0;
      else
        v23 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      sub_1005C3A0(v23, 3.0);
      v24 = *(_DWORD *)(a1 + 1420);
      if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v24 >> 12 )
        v25 = 0;
      else
        v25 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      sub_1005C410(v25, 0.0);
      v26 = *(_DWORD *)(a1 + 1420);
      if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v26 >> 12 )
        v27 = 0;
      else
        v27 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      sub_100FA830(v27, 0);
      v28 = *(_DWORD *)(a1 + 1420);
      if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v28 >> 12 )
        v29 = 0;
      else
        v29 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      v30 = *(_DWORD *)(v29 + 920);
      v31 = (float *)(v29 + 920);
      v44 = 60.0;
      if ( v30 != COERCE_INT(60.0) )
      {
        if ( *(_BYTE *)(v29 + 84) )
        {
          *(_BYTE *)(v29 + 88) |= 1u;
        }
        else
        {
          v32 = *(int **)(v29 + 24);
          if ( v32 )
            sub_100194B0(v32, 920);
        }
        *v31 = 60.0;
      }
      v33 = *(_DWORD *)(a1 + 1420);
      if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v33 >> 12 )
        v34 = 0;
      else
        v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
      v35 = *(_DWORD *)(v34 + 924);
      v36 = (float *)(v34 + 924);
      v44 = 4.0;
      if ( v35 != COERCE_INT(4.0) )
      {
        if ( *(_BYTE *)(v34 + 84) )
        {
          *(_BYTE *)(v34 + 88) |= 1u;
          *v36 = 4.0;
        }
        else
        {
          v37 = *(int **)(v34 + 24);
          if ( v37 )
            sub_100194B0(v37, 924);
          *v36 = 4.0;
        }
      }
    }
  }
}
