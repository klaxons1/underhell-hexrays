void __stdcall sub_102EA430(float *a1, float a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st7
  int v12; // eax
  int v13; // edx
  int v14; // edi
  _DWORD *v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // [esp+0h] [ebp-10h] BYREF
  float v21; // [esp+4h] [ebp-Ch]
  int v22; // [esp+8h] [ebp-8h]
  float v23; // [esp+Ch] [ebp-4h]

  v23 = a2 * a2;
  v4 = 0;
  v22 = sub_1014EB70(a3);
  if ( v22 > 0 )
  {
    v5 = a4;
    do
    {
      v6 = sub_1014F350(a3, v4);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        v7 = *(float *)(v6 + 580) - *a1;
        v8 = v7 * v7;
        v9 = *(float *)(v6 + 584) - a1[1];
        v10 = *(float *)(v6 + 588) - a1[2];
        v11 = v10 * v10 + v9 * v9 + v8;
        if ( v23 >= v11 )
        {
          v21 = v11;
          v20 = v6;
          sub_102E8790(
            (unsigned __int8 (__cdecl **)(int, int))v5,
            (int)&v20,
            (unsigned __int8 (__cdecl **)(int, int))&a4,
            (_BYTE *)&a2 + 3);
          v12 = sub_102E8880((_DWORD *)v5);
          v13 = a4;
          v14 = 24 * v12;
          v15 = (_DWORD *)(24 * v12 + *(_DWORD *)(v5 + 4));
          v15[2] = a4;
          v15[1] = -1;
          *v15 = -1;
          v15[3] = 0;
          if ( v13 == -1 )
          {
            *(_DWORD *)(v5 + 16) = v12;
          }
          else
          {
            v16 = 3 * v13;
            v17 = *(_DWORD *)(v5 + 4);
            if ( HIBYTE(a2) )
              *(_DWORD *)(v17 + 8 * v16) = v12;
            else
              *(_DWORD *)(v17 + 8 * v16 + 4) = v12;
          }
          sub_102E9410((_DWORD *)v5, v12);
          v18 = *(_DWORD *)(v5 + 4);
          ++*(_DWORD *)(v5 + 20);
          v19 = v14 + v18 + 16;
          if ( v19 )
          {
            *(_DWORD *)v19 = v20;
            *(float *)(v19 + 4) = v21;
          }
        }
      }
      ++v4;
    }
    while ( v4 < v22 );
  }
}
