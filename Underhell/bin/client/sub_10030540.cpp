int __thiscall sub_10030540(int this)
{
  int v2; // ebx
  _DWORD *v3; // ebx
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // [esp+18h] [ebp-8h] BYREF
  int v23; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 1940) )
  {
    sub_10026650(this);
    v2 = *(_DWORD *)(this + 1940);
    if ( v2 )
    {
      nullsub_4();
      if ( *(_DWORD *)(v2 + 84) )
        sub_10034930(*(_DWORD *)(v2 + 84));
      sub_100F9890(v2 + 96);
      sub_100F9DC0(v2 + 96);
      sub_1011A810(v2 + 64);
      sub_1011A810(v2 + 44);
      sub_1011A810(v2 + 8);
      sub_10034930(v2);
    }
    *(_DWORD *)(this + 1940) = 0;
  }
  *(_DWORD *)(this + 1220) = 0;
  v3 = *(_DWORD **)(this + 1904);
  if ( v3 )
  {
    sub_1002CF20(*(_WORD **)(this + 1904));
    if ( (int)v3[2] >= 0 )
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
        *v3 = 0;
      }
      v3[1] = 0;
    }
    sub_10034930(v3);
    *(_DWORD *)(this + 1904) = 0;
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    return 0;
  sub_10026520(this);
  sub_10027C90((_DWORD *)this);
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v5 = *(_DWORD *)(this + 1940);
  if ( !v5 || !*(_DWORD *)v5 )
    return 0;
  v6 = dword_10403664;
  v7 = *(_DWORD *)(this + 1872);
  *(float *)(this + 1900) = -3.4028235e38;
  *(_DWORD *)(this + 1264) = v6 - 1;
  if ( v7 )
  {
    sub_1011A810(v7 + 40);
    sub_1011A810(v7 + 20);
    sub_10034930(v7);
    *(_DWORD *)(this + 1872) = 0;
  }
  sub_1001E3C0(*(_DWORD *)(this + 1896));
  v8 = 0;
  *(_DWORD *)(this + 1896) = 0;
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 156);
  if ( *(_DWORD *)(this + 1888) != v9 )
  {
    *(_DWORD *)(this + 1888) = 0;
    sub_1002A7B0((int *)(this + 1876), 0, v9, 0);
    if ( *(int *)(*(_DWORD *)v5 + 156) > 0 )
    {
      v23 = 0;
      do
      {
        sub_101EE350((void *)(v23 + *(_DWORD *)(this + 1876)));
        v10 = *(_DWORD *)v5;
        v23 += 48;
        ++v8;
      }
      while ( v8 < *(_DWORD *)(v10 + 156) );
    }
  }
  v11 = *(_DWORD *)(this + 1876);
  *(_DWORD *)(this + 1280) = this;
  *(_DWORD *)(this + 1284) = v11;
  v12 = *(_DWORD *)(this + 1228);
  if ( v12 )
  {
    sub_1011A810(v12 + 4112);
    sub_100F9DC0(v12 + 4092);
    *(_DWORD *)(v12 + 4080) = 0;
    *(_DWORD *)(v12 + 4084) = v12;
    sub_10034930(v12);
    *(_DWORD *)(this + 1228) = 0;
  }
  v13 = *(_DWORD *)(this + 1920);
  if ( v13 != sub_10126DB0(v5) )
  {
    v14 = sub_10126DB0(v5);
    *(_DWORD *)(this + 1920) = 0;
    sub_1002CF90((int *)(this + 1908), 0, v14, 0);
    v15 = 0;
    if ( *(int *)(this + 1920) > 0 )
    {
      v16 = 0;
      do
      {
        *(_DWORD *)(v16 + *(_DWORD *)(this + 1908) + 72) &= ~0x80000000;
        *(_DWORD *)(v16 + *(_DWORD *)(this + 1908) + 72) &= 0x80000000;
        ++v15;
        v16 += 76;
      }
      while ( v15 < *(_DWORD *)(this + 1920) );
    }
  }
  v17 = sub_10126D90(v5);
  sub_10025A40((unsigned __int8 *)(this + 1500), v17);
  v18 = 0;
  if ( sub_10126D90(v5) > 0 )
  {
    v23 = this + 1404;
    do
    {
      *(_BYTE *)(v18 + *(_DWORD *)(this + 1532)) = 0.0 != *(float *)(sub_10127A80(v18) + 16);
      if ( *(_DWORD *)(this + 80) == -1 && v18 >= 0 )
      {
        sub_1001D8C0(v5, v18, 0.0, (float *)&v22);
        *(float *)v23 = *(float *)&v22;
      }
      v23 += 4;
      ++v18;
    }
    while ( v18 < sub_10126D90(v5) );
  }
  v23 = *(_DWORD *)(*(_DWORD *)v5 + 164);
  if ( (unsigned int)v23 >= 4 )
    v23 = 4;
  sub_10025A40((unsigned __int8 *)(this + 1700), v23);
  v19 = 0;
  if ( v23 > 0 )
  {
    *(float *)&v22 = 0.0;
    do
    {
      *(_BYTE *)(v19 + *(_DWORD *)(this + 1732)) = (*(_BYTE *)(v22 + *(_DWORD *)(*(_DWORD *)v5 + 168) + *(_DWORD *)v5 + 4)
                                                  & 0x38) != 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 596))(this, v19, 0.0);
      v22 += 56;
      ++v19;
    }
    while ( v19 < v23 );
  }
  *(_BYTE *)(this + 1938) = 1;
  sub_1002DD00(this);
  v20 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(this + 4) + 140))(this + 4, "eyes");
  v21 = *(_DWORD *)this;
  *(_DWORD *)(this + 1232) = v20;
  if ( (*(unsigned __int8 (__thiscall **)(int))(v21 + 552))(this) )
    sub_1003D9E0(this);
  if ( sub_10126DB0(v5) )
    *(_DWORD *)(this + 312) |= 0x40000u;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 720))(this) && *(_DWORD *)(this + 1808) )
  {
    *(_DWORD *)(this + 1808) = 0;
    sub_1000F6C0(this, 8);
    if ( *(_BYTE *)(this + 1760) )
      sub_10029560((_DWORD *)this);
  }
  return v5;
}
