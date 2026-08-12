int __thiscall sub_101FCEE0(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // ebx
  int v6; // edi
  int (__thiscall *v7)(int, int); // eax
  int *v8; // ebp
  int v9; // ecx
  int result; // eax
  _DWORD *v11; // esi
  int v12; // edx
  int v13; // ebx
  int v14; // edi
  int v15; // edx
  int v16; // eax
  int v17; // edi
  bool v18; // sf
  _DWORD *v19; // esi
  int v20; // eax
  int v21; // [esp+0h] [ebp-48h]
  int v23; // [esp+18h] [ebp-30h]
  int v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h] BYREF
  int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  int v28; // [esp+2Ch] [ebp-1Ch]
  _DWORD v29[2]; // [esp+30h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-Ch]
  int v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h] BYREF
  int v34; // [esp+4Ch] [ebp+4h]
  int v35; // [esp+50h] [ebp+8h]

  v4 = a4;
  sub_101FBF20(a4);
  v6 = 24 * a2;
  v21 = *(_DWORD *)(24 * a2 + this[61]);
  v7 = *(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 516);
  v27 = 24 * a2;
  v24 = v7(a3, v21);
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 520))(a3);
  v8 = (int *)(*a4 + 28 * sub_10247330(a4[3]));
  v9 = 0;
  *v8 = 0;
  v8[1] = 0;
  v28 = *(_DWORD *)(24 * a2 + this[61] + 16);
  result = v28;
  v35 = 0;
  if ( v28 > 0 )
  {
    do
    {
      v11 = *(_DWORD **)(*(_DWORD *)(v6 + this[61] + 4) + 4 * v9);
      result = v11[16];
      if ( result )
      {
        result = *(_DWORD *)(result + 600);
        v12 = 0;
        v26 = result;
        v34 = 0;
        if ( result > 0 )
        {
          do
          {
            v13 = 0;
            if ( (int)v11[10] > 0 )
            {
              while ( 1 )
              {
                v29[0] = v11;
                v14 = sub_101F9C40(v11, v12);
                v29[1] = v14;
                v30 = sub_101F9C60(v11, v15);
                v31 = v13;
                v16 = (*(int (__thiscall **)(int, _DWORD *, int, int, int, int, int *, int *))(*(_DWORD *)v14 + 48))(
                        v14,
                        v11,
                        v30,
                        v13,
                        v24,
                        v23,
                        &v33,
                        &v25);
                v13 += v16;
                v32 = v16;
                if ( v16 <= 0 )
                {
                  if ( !*v8 )
                    break;
                  v8 = (int *)(*a4 + 28 * sub_10247330(a4[3]));
                  *v8 = 0;
                  v8[1] = 0;
                }
                else
                {
                  *v8 += v33;
                  v8[1] += v25;
                  sub_101FB100(v8 + 2, v8[5], v29);
                }
                if ( v13 >= v11[10] )
                  break;
                v12 = v34;
              }
              v12 = v34;
              result = v26;
              v6 = v27;
            }
            v34 = ++v12;
          }
          while ( v12 < result );
          v4 = a4;
          v9 = v35;
        }
      }
      v35 = ++v9;
    }
    while ( v9 < v28 );
  }
  if ( *v8 <= 0 || v8[1] <= 0 )
  {
    v17 = 28 * (v4[3] - 1);
    v18 = *(int *)(v17 + *v4 + 16) < 0;
    v19 = (_DWORD *)(v17 + *v4 + 8);
    *(_DWORD *)(v17 + *v4 + 20) = 0;
    if ( !v18 )
    {
      if ( *v19 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v19);
        *v19 = 0;
      }
      v19[1] = 0;
    }
    v18 = (int)v19[2] < 0;
    v20 = *v19;
    v19[4] = *v19;
    if ( !v18 )
    {
      if ( v20 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20);
        *v19 = 0;
      }
      v19[1] = 0;
    }
    result = v4[3];
    if ( result > 0 )
    {
      qmemcpy((void *)(*v4 + v17), (const void *)(*v4 + 28 * result - 28), 0x1Cu);
      --v4[3];
    }
  }
  return result;
}
