void __thiscall sub_100C6B20(int this, int a2, int a3, int a4, int a5)
{
  signed int v6; // edx
  signed int v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  signed int i; // esi
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23[1023]; // [esp+20h] [ebp-10A0h] BYREF
  _DWORD v24[2]; // [esp+101Ch] [ebp-A4h] BYREF
  int v25; // [esp+1024h] [ebp-9Ch]
  int v26; // [esp+102Ch] [ebp-94h]
  int v27; // [esp+1030h] [ebp-90h]
  int v28; // [esp+1034h] [ebp-8Ch]
  int v29; // [esp+1038h] [ebp-88h]
  int v30; // [esp+103Ch] [ebp-84h]
  int v31; // [esp+1040h] [ebp-80h]
  _DWORD v32[15]; // [esp+1080h] [ebp-40h] BYREF
  int v33; // [esp+10BCh] [ebp-4h]

  if ( a2 && (unsigned __int8)sub_10245FE0(a2) )
  {
    sub_101027A0(a2, a3, a4, a5);
    sub_10107490(
      a2,
      *(_DWORD *)(this + 888),
      a3,
      a4,
      *(_DWORD *)(this + 908),
      *(float *)(this + 904),
      this + 912,
      a5,
      1.0,
      *(float *)(dword_106B31C8 + 12));
    v6 = *(_DWORD *)(this + 1132);
    if ( v6 > 0 )
      memset32(v32, 15, v6);
    v7 = 0;
    if ( v6 >= 4 )
    {
      v8 = *(_DWORD *)(this + 1120);
      v9 = v8 + 136;
      v10 = v8 + 60;
      v33 = v8 + 136;
      do
      {
        if ( *(float *)(v10 - 40) > 0.0 && (*(_BYTE *)(v10 - 60) & 1) != 0 )
        {
          v11 = *(_DWORD *)v10;
          if ( *(int *)v10 >= 0 && v11 < v6 )
            v32[v11] = v7;
        }
        if ( *(float *)(v9 - 40) > 0.0 && (*(_BYTE *)(v10 + 16) & 1) != 0 )
        {
          v12 = *(_DWORD *)v9;
          if ( *(int *)v9 >= 0 && v12 < v6 )
          {
            v32[v12] = v7 + 1;
            v9 = v33;
          }
        }
        if ( *(float *)(v9 + 36) > 0.0 && (*(_BYTE *)(v10 + 92) & 1) != 0 )
        {
          v13 = *(_DWORD *)(v9 + 76);
          if ( v13 >= 0 && v13 < v6 )
          {
            v32[v13] = v7 + 2;
            v9 = v33;
          }
        }
        if ( *(float *)(v9 + 112) > 0.0 && (*(_BYTE *)(v10 + 168) & 1) != 0 )
        {
          v14 = *(_DWORD *)(v9 + 152);
          if ( v14 >= 0 && v14 < v6 )
          {
            v32[v14] = v7 + 3;
            v9 = v33;
          }
        }
        v7 += 4;
        v9 += 304;
        v10 += 304;
        v33 = v9;
      }
      while ( v7 < v6 - 3 );
    }
    if ( v7 < v6 )
    {
      v15 = *(_DWORD *)(this + 1120) + 76 * v7;
      do
      {
        if ( *(float *)(v15 + 20) > 0.0 && (*(_BYTE *)v15 & 1) != 0 )
        {
          v16 = *(_DWORD *)(v15 + 60);
          if ( v16 >= 0 && v16 < v6 )
            v32[v16] = v7;
        }
        ++v7;
        v15 += 76;
      }
      while ( v7 < v6 );
    }
    for ( i = 0; i < v6; ++i )
    {
      v18 = v32[i];
      if ( v18 >= 0 && v18 < v6 )
        sub_10107490(
          a2,
          *(_DWORD *)(this + 888),
          a3,
          a4,
          *(_DWORD *)(*(_DWORD *)(this + 1120) + 76 * v18 + 8),
          *(float *)(*(_DWORD *)(this + 1120) + 76 * v18 + 12),
          this + 912,
          a5,
          *(float *)(*(_DWORD *)(this + 1120) + 76 * v18 + 20),
          *(float *)(dword_106B31C8 + 12));
      v6 = *(_DWORD *)(this + 1132);
    }
    if ( *(_DWORD *)(this + 888) )
    {
      sub_10106F20(v23);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v19 = a5;
      v20 = a2;
      sub_101073B0(v23, a2, this + 704, this + 580, *(float *)(dword_106B31C8 + 12), 0, a5);
      sub_101076A0(a2, (int)v23, a3, a4, this + 912, a5, *(float *)(dword_106B31C8 + 12));
      v21 = v27;
      v30 = 0;
      if ( v29 >= 0 )
      {
        if ( v27 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27);
          v21 = 0;
          v27 = 0;
        }
        v28 = 0;
      }
      v31 = v21;
      if ( v29 >= 0 )
      {
        if ( v21 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21);
          v27 = 0;
        }
        v28 = 0;
      }
      sub_101C8220(v24);
      v22 = v24[0];
      if ( v25 >= 0 )
      {
        if ( v24[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
          v22 = 0;
          v24[0] = 0;
        }
        v24[1] = 0;
      }
      v26 = v22;
      if ( v25 >= 0 )
      {
        if ( v22 )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22);
      }
    }
    else
    {
      sub_101076A0(a2, 0, a3, a4, this + 912, a5, *(float *)(dword_106B31C8 + 12));
      v19 = a5;
      v20 = a2;
    }
    sub_10102900(v20, a3, a4, this + 1008, v19);
  }
}
