char __thiscall sub_10080A30(int this)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edi
  int v5; // eax
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int *v13; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st7
  float v17; // [esp+0h] [ebp-44h]
  float v18; // [esp+18h] [ebp-2Ch] BYREF
  float v19; // [esp+1Ch] [ebp-28h]
  float v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h] BYREF
  float v22; // [esp+28h] [ebp-1Ch]
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h] BYREF
  double v25; // [esp+34h] [ebp-10h]
  int v26; // [esp+3Ch] [ebp-8h]
  float v27; // [esp+40h] [ebp-4h]

  v2 = *(_DWORD *)(this + 36);
  HIDWORD(v25) = *(_DWORD *)(*(_DWORD *)(this + 4) + 2596);
  v26 = sub_100A6140(v2);
  v3 = *(_DWORD *)(v2 + 16);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 16) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(v2 + 16) & 0xFFF) + 1];
  v27 = *(float *)(v2 + 4);
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 44) > 0.11 || *(_BYTE *)(this + 17) )
    sub_100B9C50(*(_DWORD *)(this + 40));
  if ( **(_DWORD **)(this + 40) )
  {
    v7 = sub_100B99B0();
    v21 = *(int *)v7;
    v22 = *(float *)(v7 + 4);
    v6 = *(float *)(v7 + 8);
  }
  else
  {
    v5 = *(_DWORD *)(this + 4);
    v21 = *(int *)(v5 + 716);
    v22 = *(float *)(v5 + 720);
    v6 = *(float *)(v5 + 724);
  }
  v23 = v6;
  *(_BYTE *)(this + 17) = 0;
  sub_100B9C50(v2);
  v8 = v27;
  v9 = v26;
  *(_DWORD *)(v2 + 44) = -1;
  v17 = v8;
  v10 = sub_1008E9F0((int)&v21, v9, v4, v17, *(_DWORD *)(this + 12), *(_BYTE *)(this + 94));
  v11 = v10;
  if ( !v10 )
    return 0;
  sub_100A61F0(v10, 0);
  v13 = *(int **)(this + 40);
  if ( *v13 )
  {
    v11 = *v13;
    unknown_libname_2(0);
    *(_DWORD *)(v11 + 32) |= 0x20u;
    sub_100A5F20(v11);
  }
  v14 = *(_DWORD *)(v11 + 40);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 36);
    if ( *(_DWORD *)(v11 + 36) == v15 && (*(_BYTE *)(v11 + 32) & 0x2A) == 0 && v15 == *(_DWORD *)(this + 12) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 80))(this, v11) )
      {
        sub_10424670(&v21, v11, *(_DWORD *)(v11 + 40), &v18, 0);
        v24 = *(float *)v11 - v18;
        *(float *)&v25 = *(float *)(v11 + 4) - v19;
        *((float *)&v25 + 1) = *(float *)(v11 + 8) - v20;
        if ( sub_100D7A40(&v24) > 0.1 )
        {
          v24 = *(float *)&v21 - v18;
          *(float *)&v25 = v22 - v19;
          *((float *)&v25 + 1) = v23 - v20;
          v16 = sub_100D7A40(&v24);
          v25 = v16;
          sub_10050F10((_DWORD *)this);
          if ( v16 * 0.5 > v25 )
            sub_100A6890(v2);
        }
      }
    }
  }
  return 1;
}
