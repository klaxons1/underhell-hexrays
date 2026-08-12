void __thiscall sub_1022F2C0(int this)
{
  char *v2; // eax
  int v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  _DWORD *v6; // ecx
  double v7; // st7
  int *v8; // ecx
  int v9; // edi
  int *v10; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // edx
  int *v14; // ecx
  _DWORD *v15; // ecx
  _DWORD *v16; // [esp+8h] [ebp-78h]
  __int64 v17; // [esp+Ch] [ebp-74h]
  float v18; // [esp+10h] [ebp-70h]
  float v19; // [esp+14h] [ebp-6Ch]
  int v20[14]; // [esp+24h] [ebp-5Ch] BYREF
  int v21[7]; // [esp+5Ch] [ebp-24h] BYREF
  float v22; // [esp+78h] [ebp-8h] BYREF
  char v23; // [esp+7Fh] [ebp-1h] BYREF

  if ( !*(_DWORD *)(this + 976) )
  {
    if ( *(_BYTE *)(this + 972) )
      return;
    v2 = *(char **)(this + 804);
    if ( !v2 )
      v2 = (char *)String;
    v3 = sub_1022A390(v2, this + 800);
    *(_DWORD *)(this + 976) = v3;
    if ( !v3 )
    {
      v4 = *(const char **)(this + 804);
      if ( !v4 )
        v4 = String;
      DevMsg("%s missing from scenes.image\n", v4);
      *(_BYTE *)(this + 972) = 1;
      return;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 720))(this);
    if ( sub_10225440(this) )
    {
      v5 = *(const char **)(this + 804);
      if ( !v5 )
        v5 = String;
      v22 = COERCE_FLOAT(
              (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_106B323C + 32))(
                dword_106B323C,
                1,
                v5,
                -1,
                0));
      sub_10227600((_DWORD *)(this + 980), &v22);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  }
  if ( !*(_BYTE *)(this + 884) && sub_10228070((_DWORD *)this) )
  {
    *(_BYTE *)(this + 1456) = 0;
    *(_WORD *)(this + 925) = 0;
    v23 = 1;
    sub_10227560((_BYTE *)(this + 884), &v23);
    v6 = *(_DWORD **)(this + 24);
    if ( v6 )
    {
      *v6 |= 0x101u;
      *(_WORD *)(sub_10153460(v6) + 2) = 0;
    }
    v23 = 0;
    sub_102275B0((_BYTE *)(this + 885), &v23);
    v7 = 0.0;
    v22 = 0.0;
    *(float *)(this + 892) = 0.0;
    if ( *(_DWORD *)(this + 888) != LODWORD(v22) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
        {
          sub_100194B0(v8, 888);
          v7 = 0.0;
        }
      }
      *(float *)(this + 888) = v7;
    }
    v19 = v7;
    v18 = v7;
    sub_1041E210(1, v18, v19);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 736))(this);
    sub_10223D20((_DWORD *)this, *(unsigned int *)(this + 976));
    HIDWORD(v17) = this;
    LODWORD(v17) = this;
    sub_1010DD80((_DWORD *)(this + 988), v17, 0.0);
    sub_1042F8A0(0, 32, 0);
    v16 = *(_DWORD **)(this + 976);
    v21[0] = (int)sub_10223B50;
    memset(&v21[1], 0, 12);
    v21[4] = 0xFFFF;
    v21[5] = -1;
    v21[6] = 0;
    sub_1022ED50((void *)this, v16, (int)v20, (int)v21, 0.0);
    sub_1022A110((int)v20, v21);
    v9 = 0;
    v22 = *(float *)(this + 1492);
    if ( SLODWORD(v22) > 0 )
    {
      v10 = off_1061BE18;
      do
      {
        v11 = *(_DWORD *)(this + 1480);
        v12 = *(_DWORD *)(v11 + 4 * v9);
        v13 = (_DWORD *)(v11 + 4 * v9);
        if ( v12 != -1 )
        {
          v14 = &v10[4 * (*(_DWORD *)(v11 + 4 * v9) & 0xFFF) + 1];
          if ( v14[1] == v12 >> 12 )
          {
            if ( *v14 )
            {
              if ( *v13 == -1 || v10[4 * (*v13 & 0xFFF) + 2] != *v13 >> 12 )
                v15 = 0;
              else
                v15 = (_DWORD *)v10[4 * (*v13 & 0xFFF) + 1];
              sub_10227450(v15, this);
              v10 = off_1061BE18;
            }
          }
        }
        ++v9;
      }
      while ( v9 < SLODWORD(v22) );
    }
    sub_1022F000((void *)this, *(_DWORD **)(this + 976));
    sub_1022CD90((int)v21);
    sub_1042F820(v20);
  }
}
