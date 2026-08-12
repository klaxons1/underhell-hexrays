int __thiscall sub_1013A8A0(int this)
{
  int v2; // ebx
  float *v3; // ecx
  int v4; // esi
  bool v5; // zf
  int result; // eax
  int *v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8h]
  int *v19; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(this + 16) - 1;
  if ( v2 >= 0 )
  {
    v3 = (float *)off_103DC81C;
    do
    {
      v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v2);
      v5 = (*(_BYTE *)(v4 + 16) & 8) == 0;
      v17 = v4;
      if ( !v5 )
      {
        *(float *)(v4 + 8) = v3[3] + 0.1;
        v3 = (float *)off_103DC81C;
      }
      if ( *(float *)(v4 + 8) < (double)v3[3] && *(float *)(v4 + 4) < (double)v3[3] )
      {
        if ( dword_1043A108 )
        {
          dword_1043A108(dword_1043A10C);
          dword_1043A108 = 0;
          dword_1043A10C = 0;
        }
        sub_1012D820((_DWORD *)(this + 4), &v17);
        sub_10034930(v4);
        v3 = (float *)off_103DC81C;
      }
      --v2;
    }
    while ( v2 >= 0 );
  }
  result = 0;
  *(_BYTE *)(this + 76) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 60) = 0;
  v17 = 0;
  if ( *(int *)(this + 16) > 0 )
  {
    v7 = *(int **)(this + 4);
    v8 = 0;
    v18 = 0;
    v9 = 0;
    v19 = v7;
    while ( 1 )
    {
      v10 = *v19;
      v9 += *(unsigned __int8 *)(*v19 + 12);
      *(_DWORD *)(this + 60) = v9;
      v8 += *(unsigned __int8 *)(v10 + 13);
      *(_DWORD *)(this + 64) = v8;
      v11 = *(unsigned __int8 *)(v10 + 14) + result;
      *(_DWORD *)(this + 68) = v11;
      v12 = *(_DWORD *)(v10 + 16);
      v16 = v11;
      if ( (v12 & 3) != 0 )
      {
        v13 = (int)((*(float *)(v10 + 4) - *((float *)off_103DC81C + 3)) * *(float *)v10);
        if ( (v12 & 2) != 0 )
          v13 += *(unsigned __int8 *)(v10 + 15);
        if ( v13 >= *(unsigned __int8 *)(v10 + 15) )
          v13 = *(unsigned __int8 *)(v10 + 15);
        v14 = v13 < 0 ? 0 : v13;
      }
      else
      {
        v14 = *(unsigned __int8 *)(v10 + 15);
      }
      if ( v14 > v18 )
      {
        v18 = v14;
        *(_DWORD *)(this + 72) = v14;
      }
      if ( (*(_BYTE *)(v10 + 16) & 4) != 0 )
        *(_BYTE *)(this + 76) = 1;
      ++v19;
      if ( ++v17 >= *(_DWORD *)(this + 16) )
        break;
      result = v16;
    }
    result = 0;
  }
  v15 = *(_DWORD *)(this + 16);
  if ( v15 )
  {
    *(int *)(this + 60) /= v15;
    *(int *)(this + 64) /= v15;
    result = *(_DWORD *)(this + 68) / v15;
    *(_DWORD *)(this + 68) = result;
  }
  return result;
}
