int __thiscall sub_10085820(_DWORD *this, int *a2, int a3, float *a4, float *a5, int a6)
{
  float v6; // edi
  float *v8; // esi
  double v9; // st7
  int v10; // esi
  _DWORD *v12[2]; // [esp+8h] [ebp-2Ch] BYREF
  int v13; // [esp+10h] [ebp-24h]
  int v14; // [esp+14h] [ebp-20h]
  int v15; // [esp+18h] [ebp-1Ch]
  BOOL (__cdecl *v16)(float *, float *); // [esp+1Ch] [ebp-18h]
  float v17[2]; // [esp+20h] [ebp-14h] BYREF
  float v18; // [esp+28h] [ebp-Ch]
  float v19; // [esp+2Ch] [ebp-8h]
  bool v20; // [esp+33h] [ebp-1h]

  v19 = 1.0e12;
  v6 = 0.0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = sub_10084F40;
  v20 = 0;
  if ( (int)this[1] > 0 )
  {
    while ( 1 )
    {
      v8 = *(float **)(this[2] + 4 * LODWORD(v6));
      if ( *a4 > (double)v8[1]
        || *a5 < (double)v8[1]
        || a4[1] > (double)v8[2]
        || a5[1] < (double)v8[2]
        || a4[2] > (double)v8[3]
        || a5[2] < (double)v8[3]
        || !(**(unsigned __int8 (__thiscall ***)(int, float *))a6)(a6, v8) )
      {
        goto LABEL_15;
      }
      v9 = ((double (__thiscall *)(int, float *))*(_DWORD *)(*(_DWORD *)a6 + 4))(a6, v8);
      v18 = v9;
      if ( v19 > v9 )
        v19 = v9;
      if ( !v20 )
        goto LABEL_14;
      if ( v9 < *(float *)v12[0] )
        break;
LABEL_15:
      ++LODWORD(v6);
      if ( SLODWORD(v6) >= this[1] )
        goto LABEL_16;
    }
    sub_10085690((int *)v12);
    v9 = v18;
LABEL_14:
    v17[0] = v9;
    v17[1] = v6;
    sub_10085760((int *)v12, v17);
    v20 = v14 == a3;
    goto LABEL_15;
  }
LABEL_16:
  a2[3] = 0;
  while ( v14 )
  {
    sub_10085760(a2, v12[0]);
    sub_10085690((int *)v12);
  }
  v10 = a2[3];
  if ( v13 >= 0 && v12[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v12[0]);
  return v10;
}
