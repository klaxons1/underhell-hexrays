int __thiscall sub_10256A00(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // ebx
  int *v9; // ecx
  float *v10; // esi
  unsigned int v11; // eax
  float *v12; // eax
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  double v17; // st7
  double v18; // st7
  float v20; // [esp+4h] [ebp-1Ch]
  float v21; // [esp+4h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  float v24; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 1092);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1092) & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4)
    && *v3
    && (v3[1] != v4 ? (v5 = 0) : (v5 = *v3), *(_DWORD *)(v5 + 24)) )
  {
    v22 = 0;
    v24 = *(float *)(this + 1100) + 100.0;
    v6 = sub_101C46F0((_DWORD *)this, 1u);
    v7 = (_DWORD *)v6;
    v23 = v6;
    if ( v6 )
    {
      v8 = *(_DWORD **)(v6 + 8);
      if ( v8 != (_DWORD *)v6 )
      {
        do
        {
          if ( *v8 != -1 )
          {
            v9 = &off_1061BE18[4 * (*v8 & 0xFFF) + 1];
            if ( off_1061BE18[4 * (*v8 & 0xFFF) + 2] == *v8 >> 12 )
            {
              v10 = (float *)*v9;
              if ( *v9 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 752))(this, *v9) )
                {
                  v11 = *(_DWORD *)(this + 1092);
                  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1092) & 0xFFF) + 2] != v11 >> 12 )
                    v12 = 0;
                  else
                    v12 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 1092) & 0xFFF) + 1];
                  v13 = v10[179] - v12[179];
                  v14 = v13 * v13;
                  v15 = v10[180] - v12[180];
                  v16 = v10[181] - v12[181];
                  v20 = v16 * v16 + v15 * v15 + v14;
                  v17 = off_10689708(v20);
                  if ( v24 > v17 )
                  {
                    v24 = v17;
                    v22 = (int)v10;
                  }
                }
                v7 = (_DWORD *)v23;
              }
            }
          }
          v8 = (_DWORD *)v8[2];
        }
        while ( v8 != v7 );
      }
    }
    if ( v24 > (double)*(float *)(this + 1100) )
      return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    v18 = v24 / *(float *)(this + 1100);
    if ( *(float *)(this + 1108) == v18 )
    {
      return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
    else
    {
      v21 = v18;
      sub_10108AE0((int *)(this + 1108), SLOBYTE(v21), v22, this);
      return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
  else
  {
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
}
