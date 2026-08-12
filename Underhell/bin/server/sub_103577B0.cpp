void __thiscall sub_103577B0(_DWORD *this)
{
  _BYTE *v2; // esi
  unsigned int v3; // eax
  int **v4; // ecx
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  float *v9; // esi
  int *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  float *v13; // esi
  int *v14; // ecx
  int v15; // ecx
  float *v16; // esi
  int *v17; // ecx
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v2 = this + 56;
  if ( *((_BYTE *)this + 224) != 1 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 472))(this, this + 56);
    *v2 = 1;
  }
  sub_10353A10((int)this, (int)this, 0);
  sub_103564E0(this);
  v3 = this[1022];
  if ( v3 != -1 )
  {
    v4 = (int **)&off_1061BE18[4 * (this[1022] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[1022] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[1022] & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_100F5880(v6, -1.0);
        v7 = this[1022];
        if ( v7 == -1 || off_1061BE18[4 * (this[1022] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[1022] & 0xFFF) + 1];
        v9 = (float *)(v8 + 848);
        if ( *(_DWORD *)(v8 + 848) != COERCE_INT(64.0) )
        {
          if ( *(_BYTE *)(v8 + 84) )
          {
            *(_BYTE *)(v8 + 88) |= 1u;
          }
          else
          {
            v10 = *(int **)(v8 + 24);
            if ( v10 )
              sub_100194B0(v10, 848);
          }
          *v9 = 64.0;
        }
        v11 = this[1022];
        if ( v11 == -1 || off_1061BE18[4 * (this[1022] & 0xFFF) + 2] != v11 >> 12 )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (this[1022] & 0xFFF) + 1];
        v13 = (float *)(v12 + 852);
        if ( *(_DWORD *)(v12 + 852) != COERCE_INT(128.0) )
        {
          if ( *(_BYTE *)(v12 + 84) )
          {
            *(_BYTE *)(v12 + 88) |= 1u;
          }
          else
          {
            v14 = *(int **)(v12 + 24);
            if ( v14 )
              sub_100194B0(v14, 852);
          }
          *v13 = 128.0;
        }
        if ( this[1022] == -1 || off_1061BE18[4 * (this[1022] & 0xFFF) + 2] != this[1022] >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (this[1022] & 0xFFF) + 1];
        v16 = (float *)(v15 + 824);
        if ( *(_DWORD *)(v15 + 824) != COERCE_INT(0.5) )
        {
          if ( *(_BYTE *)(v15 + 84) )
          {
            *(_BYTE *)(v15 + 88) |= 1u;
          }
          else
          {
            v17 = *(int **)(v15 + 24);
            if ( v17 )
              sub_100194B0(v17, 824);
          }
          *v16 = 0.5;
        }
      }
    }
  }
  if ( !sub_103546F0((int)this, (int)&savedregs) )
    sub_10357140((int)this);
}
