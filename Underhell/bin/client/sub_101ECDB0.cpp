void __thiscall sub_101ECDB0(_DWORD *this)
{
  int v2; // ebp
  int v3; // edi
  unsigned __int8 *v4; // ecx
  unsigned __int16 v5; // si
  float *v6; // esi
  int v7; // ebp
  float *v8; // edi
  int v9; // eax
  float *v10; // ebx
  double v11; // st7
  float v12; // [esp+0h] [ebp-44h]
  float v13; // [esp+4h] [ebp-40h]
  float v14; // [esp+1Ch] [ebp-28h] BYREF
  int v15; // [esp+20h] [ebp-24h] BYREF
  float v16; // [esp+24h] [ebp-20h] BYREF
  int (*v17)(); // [esp+28h] [ebp-1Ch] BYREF
  int v18; // [esp+2Ch] [ebp-18h]
  int v19; // [esp+30h] [ebp-14h]
  int v20; // [esp+34h] [ebp-10h]
  __int16 v21; // [esp+38h] [ebp-Ch]
  __int16 v22; // [esp+3Ah] [ebp-Ah]
  __int16 v23; // [esp+3Ch] [ebp-8h]
  __int16 v24; // [esp+3Eh] [ebp-6h]
  int v25; // [esp+40h] [ebp-4h]

  v2 = this[36];
  v3 = 0;
  v17 = sub_101EABE0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = -1;
  v22 = 0;
  v23 = -1;
  v24 = -1;
  v25 = 0;
  if ( v2 <= 0 )
    goto LABEL_11;
  do
  {
    if ( v3 < 0 || v3 >= this[36] )
      v4 = 0;
    else
      v4 = *(unsigned __int8 **)(this[33] + 4 * v3);
    v14 = *(float *)&v4;
    if ( sub_101E1B20(v4) == 6 )
    {
      sub_101EAEB0(&v17, (int)&v14, (unsigned __int16 *)&v16, &v15);
      v5 = sub_101EAFC0((int)&v17);
      sub_101EC900((int)&v17, v5, LOWORD(v16), v15);
      ++v22;
      if ( v18 + 12 * v5 != -8 )
        *(float *)(v18 + 12 * v5 + 8) = v14;
    }
    ++v3;
    v6 = 0;
  }
  while ( v3 < v2 );
  if ( v22 )
  {
    v7 = (unsigned __int16)sub_101EB8D0((int)&v17);
    if ( v7 != 0xFFFF )
    {
      do
      {
        v8 = *(float **)(v18 + 12 * (unsigned __int16)v7 + 8);
        if ( v6 )
        {
          if ( sub_101E1F50(v6) )
          {
            v16 = COERCE_FLOAT(sub_101E31B0(v8, 0));
            v9 = sub_101E31F0(v6, 0);
            v10 = (float *)v9;
            if ( v16 != 0.0 )
            {
              if ( v9 )
              {
                v14 = sub_101E2390(SLODWORD(v16));
                v16 = ((double (__thiscall *)(float *))**(_DWORD **)v6)(v6);
                v11 = sub_101E19C0(v10);
                v16 = (1.0 - v11) * v16 + v14;
                v13 = v16;
                v12 = sub_10103A90(v6);
                sub_101E2E70(v6, v12, v13, COERCE_FLOAT(1));
                sub_101E3DE0((int)v6, v16);
                sub_101E23C0((int)v10, v14);
                sub_101E2F50(v8);
                sub_101E2F50(v6);
              }
            }
          }
        }
        v6 = v8;
        v7 = (unsigned __int16)sub_101EB990(&v17, v7);
      }
      while ( v7 != 0xFFFF );
      if ( v8 )
        sub_100347F0(v8);
    }
    sub_101EB810((int)&v17);
    if ( v20 >= 0 && v18 )
      goto LABEL_25;
  }
  else
  {
LABEL_11:
    sub_101EB810((int)&v17);
    if ( v20 >= 0 && v18 )
LABEL_25:
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v18);
  }
}
