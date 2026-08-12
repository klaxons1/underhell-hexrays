int __thiscall sub_1041EC00(int this, float a2)
{
  double v3; // st7
  int v4; // ebx
  int v5; // esi
  int v6; // ebx
  bool v7; // cc
  char v8; // bp
  float *v9; // esi
  int v10; // esi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  int *v14; // esi
  int v15; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // ecx
  _DWORD *v19; // ebp
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  _DWORD *v23; // ecx
  int result; // eax
  char v25[4]; // [esp+20h] [ebp-34h] BYREF
  float v26; // [esp+24h] [ebp-30h]
  _DWORD v27[2]; // [esp+28h] [ebp-2Ch] BYREF
  char (__cdecl *v28)(int, int); // [esp+30h] [ebp-24h] BYREF
  int v29; // [esp+34h] [ebp-20h]
  int v30; // [esp+38h] [ebp-1Ch]
  int v31; // [esp+3Ch] [ebp-18h]
  int v32; // [esp+40h] [ebp-14h]
  int v33; // [esp+44h] [ebp-10h]
  int v34; // [esp+48h] [ebp-Ch]
  int v35; // [esp+4Ch] [ebp-8h]
  int v36; // [esp+50h] [ebp-4h]

  v3 = *(float *)(this + 124);
  v26 = *(float *)(this + 124);
  v25[0] = a2 - v3 >= 0.0;
  v4 = *(_DWORD *)(this + 116);
  v5 = 0;
  for ( *(_DWORD *)(this + 144) = 0; v5 < v4; ++v5 )
    sub_1041A020(*(_DWORD **)(*(_DWORD *)(this + 104) + 4 * v5));
  v6 = 0;
  v7 = *(_DWORD *)(this + 16) <= 0;
  v28 = sub_1041C880;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = -1;
  v33 = 0;
  v34 = -1;
  v35 = -1;
  v36 = 0;
  if ( !v7 )
  {
    v8 = v25[0];
    do
    {
      v9 = *(float **)(*(_DWORD *)(this + 4) + 4 * v6);
      if ( v9 )
      {
        *(_DWORD *)(this + 144) += sub_1041CF20(this, v9, *(float *)(this + 124), a2, v8, v25);
        if ( *(_DWORD *)v25 )
        {
          v27[0] = *(_DWORD *)v25;
          v27[1] = v9;
          sub_1041E610((int)&v28, (int)v27);
        }
      }
      ++v6;
    }
    while ( v6 < *(_DWORD *)(this + 16) );
  }
  v10 = sub_1041D7D0(&v28);
  *(_DWORD *)v25 = v10;
  if ( v10 != -1 )
  {
    while ( 1 )
    {
      v11 = v29 + 24 * v10 + 16;
      switch ( *(_DWORD *)v11 )
      {
        case 1:
        case 2:
          sub_10418760(
            *(_BYTE **)(v29 + 24 * v10 + 20),
            *(int (__stdcall ****)(_DWORD, int, _BYTE *))(this + 160),
            this,
            *(float *)(this + 124));
          if ( *(_DWORD *)v11 == 2 )
          {
            v12 = *(_DWORD *)(this + 96);
            v13 = *(_DWORD *)(this + 88);
            v14 = (int *)(this + 84);
            if ( v12 + 1 > v13 )
              sub_1044A1C0(v12 - v13 + 1);
            ++*(_DWORD *)(this + 96);
            v15 = *v14;
            v16 = *(_DWORD *)(this + 96) - v12 - 1;
            v17 = *(_DWORD *)(this + 96) - v12 == 1;
            *(_DWORD *)(this + 100) = *(_DWORD *)(this + 84);
            if ( v16 >= 0 && !v17 )
              memcpy((void *)(v15 + 4 * v12 + 4), (const void *)(v15 + 4 * v12), 4 * v16);
            v18 = *v14;
            v10 = *(_DWORD *)v25;
            v19 = (_DWORD *)(v18 + 4 * v12);
            if ( v19 )
              *v19 = *(_DWORD *)(v11 + 4);
          }
          if ( sub_10418360(*(unsigned __int8 **)(v11 + 4)) == 1 )
          {
            v20 = *(_DWORD *)(this + 116);
            v21 = 0;
            if ( v20 <= 0 )
            {
LABEL_25:
              v21 = -1;
            }
            else
            {
              v22 = *(_DWORD *)(v11 + 4);
              v23 = *(_DWORD **)(this + 104);
              while ( *v23 != v22 )
              {
                ++v21;
                ++v23;
                if ( v21 >= v20 )
                  goto LABEL_25;
              }
            }
            *(_DWORD *)(this + 528) = v21;
          }
          break;
        case 3:
          sub_10418790(*(void **)(v29 + 24 * v10 + 20), *(_DWORD *)(this + 160), this, *(float *)(this + 124));
          break;
        case 4:
          sub_104187C0(*(_BYTE **)(v29 + 24 * v10 + 20), *(_DWORD *)(this + 160), this, *(float *)(this + 124));
          break;
        default:
          break;
      }
      *(_DWORD *)v25 = sub_1041D870(&v28, v10);
      if ( *(_DWORD *)v25 == -1 )
        break;
      v10 = *(_DWORD *)v25;
    }
  }
  if ( *(float *)(this + 124) == v26 )
    *(float *)(this + 124) = a2;
  if ( *(_DWORD *)(this + 144) )
    *(float *)(this + 152) = *(float *)(this + 124);
  result = sub_1041DA70(&v28);
  if ( v31 >= 0 )
  {
    result = v29;
    if ( v29 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29);
      return 0;
    }
  }
  return result;
}
