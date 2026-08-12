void __thiscall sub_1015B2D0(_DWORD *this)
{
  double v1; // st7
  float *v3; // edi
  double v4; // st6
  double v5; // st7
  int v6; // edi
  bool v7; // c0
  bool v8; // c3
  float *v9; // edi
  int v10; // edi
  bool v11; // c0
  float *v12; // edi
  int v13; // edi
  bool v14; // c0
  bool v15; // c3
  float *v16; // edi
  int v17; // edi
  bool v18; // c0
  float *v19; // edi
  int v20; // edi
  bool v21; // c0
  bool v22; // c3
  float *v23; // edi
  int v24; // ecx
  int v25; // edx
  float v26; // [esp+8h] [ebp-8h]
  float v27; // [esp+8h] [ebp-8h]
  float v28; // [esp+8h] [ebp-8h]
  float v29; // [esp+8h] [ebp-8h]
  float v30; // [esp+8h] [ebp-8h]
  float v31; // [esp+8h] [ebp-8h]
  float v32; // [esp+Ch] [ebp-4h]

  v1 = *(float *)(dword_106B31C8 + 16) * 1000.0;
  v32 = v1;
  v3 = (float *)(this[1] + 2276);
  if ( *v3 <= 0.0 )
  {
    v5 = 0.0;
  }
  else
  {
    v4 = *v3 - v1;
    v5 = 0.0;
    v26 = v4;
    if ( *(_DWORD *)v3 != LODWORD(v26) )
    {
      (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2276);
      *v3 = v26;
      v5 = 0.0;
    }
    v6 = this[1];
    v7 = v5 < *(float *)(v6 + 2276);
    v8 = v5 == *(float *)(v6 + 2276);
    v9 = (float *)(v6 + 2276);
    if ( !v7 && !v8 )
    {
      v27 = v5;
      if ( *(_DWORD *)v9 != LODWORD(v27) )
      {
        (**((void (__thiscall ***)(int, float *))v9 - 21))((int)(v9 - 21), v9);
        v5 = 0.0;
        *v9 = 0.0;
      }
    }
  }
  v10 = this[1];
  v11 = v5 < *(float *)(v10 + 2280);
  v12 = (float *)(v10 + 2280);
  if ( v11 )
  {
    v28 = *v12 - v32;
    if ( *(_DWORD *)v12 != LODWORD(v28) )
    {
      (**((void (__thiscall ***)(int, float *))v12 - 22))((int)(v12 - 22), v12);
      *v12 = v28;
      v5 = 0.0;
    }
    v13 = this[1];
    v14 = v5 < *(float *)(v13 + 2280);
    v15 = v5 == *(float *)(v13 + 2280);
    v16 = (float *)(v13 + 2280);
    if ( !v14 && !v15 )
    {
      v29 = v5;
      if ( *(_DWORD *)v16 != LODWORD(v29) )
      {
        (**((void (__thiscall ***)(int, float *))v16 - 22))((int)(v16 - 22), v16);
        v5 = 0.0;
        *v16 = 0.0;
      }
    }
  }
  v17 = this[1];
  v18 = v5 < *(float *)(v17 + 2284);
  v19 = (float *)(v17 + 2284);
  if ( v18 )
  {
    v30 = *v19 - v32;
    if ( *(_DWORD *)v19 != LODWORD(v30) )
    {
      (**((void (__thiscall ***)(int, float *))v19 - 23))((int)(v19 - 23), v19);
      *v19 = v30;
      v5 = 0.0;
    }
    v20 = this[1];
    v21 = v5 < *(float *)(v20 + 2284);
    v22 = v5 == *(float *)(v20 + 2284);
    v23 = (float *)(v20 + 2284);
    if ( !v21 && !v22 )
    {
      v31 = v5;
      if ( *(_DWORD *)v23 != LODWORD(v31) )
      {
        (**((void (__thiscall ***)(int, float *))v23 - 23))((int)(v23 - 23), v23);
        v5 = 0.0;
        *v23 = 0.0;
      }
    }
  }
  v24 = this[1];
  if ( v5 < *(float *)(v24 + 4156) )
  {
    *(float *)(v24 + 4156) = *(float *)(v24 + 4156) - v32;
    v25 = this[1];
    if ( v5 > *(float *)(v25 + 4156) )
      *(float *)(v25 + 4156) = v5;
  }
}
