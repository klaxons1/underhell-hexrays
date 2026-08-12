void __thiscall sub_1003A0F0(int this, int a2, float a3)
{
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  double v17; // st7
  double v18; // st6
  int v19; // ecx
  double v20; // st7
  int v21; // eax
  double v22; // st6
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  float v27; // [esp+10h] [ebp-24h]
  int v28[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+28h] [ebp-Ch]
  float v31; // [esp+2Ch] [ebp-8h]
  _BYTE *v32; // [esp+30h] [ebp-4h]

  v27 = *(float *)(this + 36);
  v32 = (_BYTE *)this;
  if ( sub_10038CB0(this, (int)v28, a3, v27, 0) )
  {
    v4 = (_DWORD *)(this + 8);
    if ( LOBYTE(v28[0]) )
    {
      v5 = *(unsigned __int16 *)(this + 14);
      v6 = *(unsigned __int16 *)(this + 12);
      v7 = v5 + v30;
      if ( v5 + v30 >= v6 )
        v7 -= v6;
      v8 = v5 + v29;
      if ( v5 + v29 >= v6 )
        v8 -= v6;
      v9 = v28[1] + v5;
      if ( v9 >= v6 )
        v9 -= v6;
      sub_10038AA0(v32, a2, v31, (float *)(*v4 + 16 * v9), (float *)(*v4 + 16 * v8), (float *)(*v4 + 16 * v7));
    }
    else
    {
      v10 = v30;
      if ( v30 == v29
        && byte_10433C4C
        && (v32 = (_BYTE *)(v30 + 1), v30 + 1 >= 0)
        && v30 + 1 < *(unsigned __int16 *)(this + 16)
        && 0.0 != *(float *)sub_10036A90((unsigned __int16 *)(this + 8), v30 + 1)
        && *(float *)(this + 36) > 0.000001
        && a3 - *(float *)(this + 36) >= flt_10433C50 )
      {
        v11 = *(unsigned __int16 *)(this + 14);
        v12 = *(unsigned __int16 *)(this + 12);
        v13 = v11 + v10;
        if ( v11 + v10 >= v12 )
          v13 -= v12;
        v14 = (int)&v32[v11];
        if ( v14 >= v12 )
          v14 -= v12;
        sub_10036980((unsigned __int8 *)this, a2, (float *)(*v4 + 16 * v14), (float *)(*v4 + 16 * v13));
        v15 = *(unsigned __int16 *)(this + 12);
        v16 = v30 + *(unsigned __int16 *)(this + 14);
        if ( v16 >= v15 )
          v16 -= v15;
        v17 = a3 - *(float *)(this + 36) - *(float *)(*v4 + 16 * v16);
        v18 = *(float *)(dword_10433C74 + 44) + *(float *)(dword_10433C74 + 44);
        if ( v18 >= v17 )
        {
          if ( v17 < 0.0 )
            v17 = 0.0;
        }
        else
        {
          v17 = v18;
        }
        if ( v17 > *(float *)(dword_10433C74 + 44) )
        {
          v19 = 0;
          v20 = 1.0 - (v17 - *(float *)(dword_10433C74 + 44)) / *(float *)(dword_10433C74 + 44);
          if ( *(_BYTE *)(this + 29) )
          {
            v21 = a2 + 8;
            do
            {
              ++v19;
              v22 = v20 * *(float *)(v21 - 8);
              v21 += 12;
              *(float *)(v21 - 20) = v22;
              *(float *)(v21 - 16) = *(float *)(v21 - 16) * v20;
              *(float *)(v21 - 12) = *(float *)(v21 - 12) * v20;
            }
            while ( v19 < *(unsigned __int8 *)(this + 29) );
          }
        }
      }
      else
      {
        v23 = *(unsigned __int16 *)(this + 14);
        v24 = *(unsigned __int16 *)(this + 12);
        v25 = v23 + v10;
        if ( v23 + v10 >= v24 )
          v25 -= v24;
        v26 = v29 + v23;
        if ( v26 >= v24 )
          v26 -= v24;
        sub_10036980((unsigned __int8 *)this, a2, (float *)(*v4 + 16 * v26), (float *)(*v4 + 16 * v25));
      }
    }
  }
}
