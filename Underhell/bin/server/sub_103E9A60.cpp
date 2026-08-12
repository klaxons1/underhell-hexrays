int __cdecl sub_103E9A60(_DWORD *a1, int a2)
{
  int v2; // esi
  double (__thiscall *v3)(int); // edx
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // esi
  int result; // eax
  int i; // esi
  int v15; // [esp+40h] [ebp-68h] BYREF
  int v16; // [esp+44h] [ebp-64h]
  int v17; // [esp+48h] [ebp-60h]
  int v18; // [esp+4Ch] [ebp-5Ch]
  int v19; // [esp+50h] [ebp-58h]
  _BYTE v20[12]; // [esp+54h] [ebp-54h] BYREF
  float v21[3]; // [esp+60h] [ebp-48h] BYREF
  float v22[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  float v23[3]; // [esp+78h] [ebp-30h] BYREF
  float v24[3]; // [esp+84h] [ebp-24h] BYREF
  float v25; // [esp+90h] [ebp-18h] BYREF
  float v26; // [esp+94h] [ebp-14h]
  float v27; // [esp+98h] [ebp-10h]
  float v28; // [esp+9Ch] [ebp-Ch]
  float v29; // [esp+A0h] [ebp-8h]
  int v30; // [esp+A4h] [ebp-4h]

  v2 = a2;
  v3 = *(double (__thiscall **)(int))(*(_DWORD *)a2 + 116);
  v4 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v28 = v3(a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, float *))(*a1 + 528))(a1, 0, 0, &v25);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 316))(v2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
  {
    do
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
      v29 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
      v30 = v7;
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 306) == 6 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6) )
          {
            if ( v29 * 4.0 < v28 )
            {
              (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 20))(v5, v24);
              if ( v24[1] * v26 + v25 * v24[0] + v24[2] * v27 < -0.89999998 )
              {
                (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 16))(v5, v20);
                if ( (a1[63] & 0x800) != 0 )
                  sub_100DAE60((int)a1);
                sub_10421BA0(v20, a1 + 125, v22);
                v23[0] = 0.0;
                v23[1] = 0.0;
                v23[2] = -1.0;
                v8 = *(_DWORD *)dword_106BAFF0;
                v9 = (*(int (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)a2 + 292))(
                       a2,
                       &flt_106F1CA8,
                       &flt_106F1CB4,
                       v23);
                (*(void (__thiscall **)(int, float *, int))(v8 + 88))(dword_106BAFF0, v21, v9);
                if ( v26 * v21[1] + v25 * v21[0] + v27 * v21[2] + 8.0 >= v22[2] * v27 + v22[0] * v25 + v22[1] * v26 )
                {
                  v10 = 0;
                  if ( v4 <= 0 )
                    goto LABEL_15;
                  while ( *(_DWORD *)(v15 + 4 * v10) != v30 )
                  {
                    if ( ++v10 >= v4 )
                      goto LABEL_15;
                  }
                  if ( v10 < 0 )
                  {
LABEL_15:
                    v11 = v4;
                    if ( v4 + 1 > v16 )
                    {
                      sub_102ABFC0(&v15, v4 - v16 + 1);
                      v4 = v18;
                    }
                    v18 = ++v4;
                    v19 = v15;
                    if ( v4 - v11 - 1 > 0 )
                      memcpy((void *)(v15 + 4 * v11 + 4), (const void *)(v15 + 4 * v11), 4 * (v4 - v11 - 1));
                    v12 = (int *)(v15 + 4 * v11);
                    if ( v12 )
                      *v12 = v30;
                  }
                }
              }
            }
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
    }
    while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) );
    v2 = a2;
  }
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 320))(v2, v5);
  if ( v4 )
  {
    for ( i = 0; i < v4; ++i )
      sub_101CA9F0((int)a1, *(_DWORD *)(v15 + 4 * i), 1, 4.0);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 108))(a2);
  }
  if ( v17 >= 0 )
  {
    result = v15;
    if ( v15 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
  }
  return result;
}
