int __thiscall sub_1007A160(int this)
{
  int result; // eax
  void *v3; // esp
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ebx
  unsigned __int16 v13; // ax
  int v14; // edx
  int v15; // edi
  int v16; // eax
  char *v17; // eax
  int v18; // edx
  int v19; // ecx
  bool v20; // zf
  double v21; // st7
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // eax
  int v28; // [esp+4h] [ebp-20h] BYREF
  int v29; // [esp+10h] [ebp-14h]
  int v30; // [esp+14h] [ebp-10h]
  float v31; // [esp+18h] [ebp-Ch]
  int *v32; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h] BYREF

  result = *(unsigned __int16 *)(this + 22);
  if ( *(_WORD *)(this + 22) )
  {
    ++*(_DWORD *)(this + 72);
    v3 = alloca(4 * result);
    v4 = *(_WORD *)(this + 16);
    v32 = &v28;
    for ( i = 0; v4 != 0xFFFF; v4 = *(_WORD *)(*(_DWORD *)(this + 4) + v6 + 18) )
    {
      v5 = *(_DWORD *)(this + 4);
      v6 = 20 * v4;
      v7 = *(_DWORD *)(v5 + v6 + 12);
      v8 = v6 + v5;
      v31 = *(float *)&v6;
      if ( v7 != *(_DWORD *)(this + 72)
        && (-1293.0 == *(float *)(v8 + 4) || *((float *)off_103DC81C + 3) >= (double)*(float *)(v8 + 4)) )
      {
        v9 = sub_1007A770(*(_DWORD *)v8);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 324);
          if ( v10 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 2) == v10 >> 12 )
          {
            v11 = *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 1);
            if ( v11 )
            {
              v12 = v11 + 12;
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v11 + 12) + 8))(v11 + 12) != 0xFFFF )
              {
                v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
                sub_10079B70((_DWORD *)this, *(_DWORD *)(this + 4) + 20 * v13, 1, &i, (int)v32);
              }
              v6 = LODWORD(v31);
            }
          }
        }
        v14 = (int)v32;
        *(_DWORD *)(v8 + 12) = *(_DWORD *)(this + 72);
        *(_DWORD *)(v14 + 4 * i++) = v8;
      }
    }
    v15 = 0;
    for ( *(_BYTE *)(this + 76) = 1; v15 < i; ++v15 )
      sub_10079F60((void *)this, (int *)v32[v15], *((float *)off_103DC81C + 3));
    v16 = *(_DWORD *)(this + 64);
    *(_BYTE *)(this + 76) = 0;
    if ( v16 > 0 )
    {
      v32 = 0;
      v29 = v16;
      do
      {
        v17 = (char *)v32 + *(_DWORD *)(this + 52);
        v18 = *((_DWORD *)v17 + 1);
        v30 = v18;
        if ( v18 == 0xFFFF )
        {
          sub_1007A050(this, *(_DWORD *)v17, *((float *)v17 + 2));
        }
        else if ( (unsigned __int16)v18 < *(int *)(this + 8) && (unsigned __int16)v18 <= *(_WORD *)(this + 24) )
        {
          v19 = 20 * (unsigned __int16)v18;
          if ( *(_WORD *)(v19 + *(_DWORD *)(this + 4) + 16) != (_WORD)v18 )
          {
            v20 = *(_BYTE *)(this + 76) == 0;
            v21 = *((float *)v17 + 2);
            v31 = *((float *)v17 + 2);
            if ( v20 )
            {
              if ( -1.0 == v21 )
                sub_10079E70(this, v18);
              else
                *(float *)(v19 + *(_DWORD *)(this + 4) + 4) = v21;
            }
            else
            {
              v22 = *(_DWORD *)(this + 64);
              v23 = *(_DWORD *)(this + 56);
              if ( v22 + 1 > v23 )
              {
                sub_100798B0((_DWORD *)(this + 52), v22 - v23 + 1);
                v21 = v31;
                v18 = v30;
              }
              ++*(_DWORD *)(this + 64);
              v24 = *(_DWORD *)(this + 52);
              v25 = *(_DWORD *)(this + 64) - v22 - 1;
              *(_DWORD *)(this + 68) = v24;
              if ( v25 > 0 )
              {
                memcpy((void *)(v24 + 12 * v22 + 12), (const void *)(v24 + 12 * v22), 12 * v25);
                v21 = v31;
                v18 = v30;
              }
              v26 = 12 * v22;
              v27 = (_DWORD *)(v26 + *(_DWORD *)(this + 52));
              if ( v27 )
                *v27 = -1;
              *(_DWORD *)(v26 + *(_DWORD *)(this + 52)) = -1;
              *(_DWORD *)(v26 + *(_DWORD *)(this + 52) + 4) = v18;
              *(float *)(v26 + *(_DWORD *)(this + 52) + 8) = v21;
            }
          }
        }
        v32 += 3;
        --v29;
      }
      while ( v29 );
    }
    *(_DWORD *)(this + 64) = 0;
    return sub_10079C70((_DWORD *)this);
  }
  return result;
}
