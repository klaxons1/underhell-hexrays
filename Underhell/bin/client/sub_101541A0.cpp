void __thiscall sub_101541A0(int *this, int a2)
{
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // eax
  int *v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  float *v11; // eax
  float *v12; // ebx
  int v13; // ebx
  _DWORD *v14; // eax
  float *v15; // ebx
  float *v16; // eax
  float *v17; // ebx
  float *v18; // eax

  if ( a2 )
  {
    v2 = this[351];
    v3 = 0;
    if ( v2 > 0 )
    {
      v4 = (_DWORD *)(this[348] + 4);
      do
      {
        if ( *v4 == a2 )
          break;
        ++v3;
        v4 += 9;
      }
      while ( v3 < v2 );
    }
    if ( v3 == v2 )
    {
      v5 = this[351];
      v6 = this[349];
      v7 = this + 348;
      if ( v5 + 1 > v6 )
        sub_10056920(v7, v5 - v6 + 1);
      ++v7[3];
      v8 = *v7;
      v9 = v7[3] - v5 - 1;
      v7[4] = *v7;
      if ( v9 > 0 )
        memcpy((void *)(v8 + 36 * v5 + 36), (const void *)(v8 + 36 * v5), 36 * v9);
      v10 = 36 * v5;
      *(_DWORD *)(v10 + *v7 + 4) = a2;
      v11 = (float *)sub_100DDA40(260);
      v12 = v11;
      if ( v11 )
      {
        sub_100F2BA0(v11, (int)"snowfall");
        *(_DWORD *)v12 = &SnowFallEffect::`vftable';
      }
      else
      {
        v12 = 0;
      }
      *(_DWORD *)(v10 + *v7 + 8) = v12;
      v13 = *v7;
      v14 = sub_100F0920();
      *(_DWORD *)(v13 + v10) = sub_100F0950((int)v14, v10, (int)v7, "particle/snow");
      v15 = (float *)(v10 + *v7 + 12);
      v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 260))(a2);
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v17 = (float *)(v10 + *v7 + 24);
      v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 264))(a2);
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      sub_101519F0((int)this, (float *)(*v7 + v10 + 12), (float *)(*v7 + v10 + 24));
    }
  }
}
