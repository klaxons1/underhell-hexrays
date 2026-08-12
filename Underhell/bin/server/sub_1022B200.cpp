void __thiscall sub_1022B200(void *this)
{
  char *v2; // eax
  int v3; // eax
  const char *v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  char v9; // bl
  int *v10; // ecx
  int v11; // eax
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // esi
  float v16; // [esp+14h] [ebp-18h]
  float v17; // [esp+18h] [ebp-14h]
  float v18; // [esp+28h] [ebp-4h] BYREF

  sub_100E0780((int)this);
  if ( *((float *)this + 226) < 0.25 || *((float *)this + 226) > 2.5 )
    *((float *)this + 226) = 1.0;
  if ( *((_BYTE *)this + 884) )
  {
    if ( !*((_DWORD *)this + 244) )
    {
      v2 = (char *)*((_DWORD *)this + 201);
      if ( !v2 )
        v2 = (char *)String;
      v3 = sub_1022A390(v2, (int)this + 800);
      *((_DWORD *)this + 244) = v3;
      if ( !v3 )
      {
        *((_BYTE *)this + 972) = 1;
        return;
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 720))(this);
      if ( sub_10225440((int)this) )
      {
        v4 = (const char *)*((_DWORD *)this + 201);
        if ( !v4 )
          v4 = String;
        v18 = COERCE_FLOAT(
                (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_106B323C + 32))(
                  dword_106B323C,
                  1,
                  v4,
                  -1,
                  0));
        sub_10227600((_DWORD *)this + 245, &v18);
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 84))(this);
    }
    v5 = *((_DWORD *)this + 244);
    *((_BYTE *)this + 972) = 0;
    v6 = 0;
    if ( sub_1041CB40(v5) > 0 )
    {
      do
      {
        v7 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 896))(this, v6);
        v8 = v7;
        if ( v7 && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7) )
          sub_100F12C0(v8, *((_DWORD *)this + 244));
        ++v6;
      }
      while ( v6 < sub_1041CB40(*((_DWORD *)this + 244)) );
    }
    v9 = *((_BYTE *)this + 885);
    if ( v9 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v10 = (int *)*((_DWORD *)this + 6);
        if ( v10 )
          sub_100194B0(v10, 885);
      }
      *((_BYTE *)this + 885) = 0;
    }
    v18 = *((float *)this + 223);
    v16 = *((float *)this + 223) - 0.001;
    sub_1041E210(1, v16, *((float *)this + 223));
    v17 = *((float *)this + 223) - 0.001;
    sub_1041CA50(v17);
    v11 = *((_DWORD *)this + 222);
    v18 = *((float *)this + 223);
    if ( v11 != LODWORD(v18) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v12 = (int *)*((_DWORD *)this + 6);
        if ( v12 )
          sub_100194B0(v12, 888);
      }
      *((float *)this + 222) = v18;
    }
    v13 = *((_DWORD *)this + 244);
    *((_BYTE *)this + 1500) = 1;
    if ( v13 )
      *(_BYTE *)(v13 + 524) |= 0x10u;
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 728))(this, 0.001);
    v14 = *((_DWORD *)this + 244);
    *((_BYTE *)this + 1500) = 0;
    if ( v14 )
      *(_BYTE *)(v14 + 524) &= ~0x10u;
    if ( v9 )
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 756))(this);
    v15 = (_DWORD *)*((_DWORD *)this + 6);
    if ( v15 )
    {
      *v15 |= 0x101u;
      *(_WORD *)(sub_10153460(v15) + 2) = 0;
    }
  }
}
