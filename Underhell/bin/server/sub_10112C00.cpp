void __thiscall sub_10112C00(int this, int a2)
{
  unsigned __int8 v3; // al
  _BYTE *v4; // ebx
  bool v5; // zf
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  unsigned int v9; // eax
  int i; // esi
  char v11; // al
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  char v15; // [esp+1Fh] [ebp-1h]

  v3 = *(_BYTE *)(this + 41);
  v4 = (_BYTE *)(this + 41);
  if ( v3 != a2 )
  {
    if ( !v3 || (v5 = (*(_BYTE *)(this + 36) & 4) == 0, v15 = 1, !v5) )
      v15 = 0;
    sub_101126F0((int *)this);
    if ( a2 == 1 )
    {
      v6 = *(_DWORD **)(this + 4);
      if ( v6[77] != -1 && off_1061BE18[4 * (v6[77] & 0xFFF) + 2] == v6[77] >> 12 )
      {
        if ( off_1061BE18[4 * (v6[77] & 0xFFF) + 1] )
        {
          v7 = sub_100E99F0(v6);
          if ( (*(int (__thiscall **)(_DWORD *))(v7[80] + 44))(v7 + 80) != 1 )
            LOBYTE(a2) = 6;
        }
      }
      v8 = *(_DWORD *)(this + 4);
      v9 = *(_DWORD *)(v8 + 308);
      if ( v9 == -1
        || off_1061BE18[4 * (*(_DWORD *)(v8 + 308) & 0xFFF) + 2] != v9 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(v8 + 308) & 0xFFF) + 1] )
      {
        memset(v12, 0, sizeof(v12));
        v13 = 0;
        v14 = 0;
        sub_1016B400(v8, v12);
        for ( i = v13 - 1; i >= 0; --i )
          sub_101129A0(
            (unsigned __int16 *)(*(_DWORD *)(v12[0] + 4 * i) + 320),
            *(_WORD *)(*(_DWORD *)(v12[0] + 4 * i) + 356) | 0x100);
        sub_102375F0(v12);
      }
    }
    if ( (_BYTE)a2 != *v4 )
    {
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 41) + 72))(v4 - 41, v4);
      *v4 = a2;
    }
    sub_100E8D20(*(_DWORD **)(this + 4));
    sub_10112060(this);
    v11 = *v4 && (*(_BYTE *)(this + 36) & 4) == 0;
    if ( v15 != v11 && (!*v4 || (*(_BYTE *)(this + 36) & 4) != 0) && (*(_BYTE *)(this + 36) & 8) == 0 )
    {
      if ( (unsigned __int8)sub_101C4690(*(_DWORD *)(this + 4)) )
        sub_100DAE10(*(_DWORD **)(this + 4), 1);
    }
  }
}
