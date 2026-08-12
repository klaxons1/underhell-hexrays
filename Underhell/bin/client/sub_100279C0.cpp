char __thiscall sub_100279C0(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  float *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v14; // [esp+Ch] [ebp-18h]
  char v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+14h] [ebp-10h]

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v2 = *(_DWORD **)(this + 1940);
  if ( v2 && *v2 )
    goto LABEL_11;
  v3 = sub_10034E90(this);
  sub_1003B810(v3);
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v4 = *(_DWORD **)(this + 1940);
  if ( v4 )
  {
    if ( *v4 )
    {
LABEL_11:
      v4 = *(_DWORD **)(this + 1192);
      if ( v4 )
      {
        v5 = (float *)(v4 + 1);
        if ( v4 == (_DWORD *)-4 || !v4[7] )
        {
          *(_BYTE *)(this + 1996) = 1;
          *(_DWORD *)(this + 1192) = 0;
        }
        else
        {
          v6 = *(_DWORD *)(this + 732);
          if ( (v6 & 0x10000000) != 0 )
          {
            sub_101143D0(this, *(float *)(this + 1968));
          }
          else if ( (v6 & 0x8000000) != 0 )
          {
            v7 = sub_100275E0((_DWORD *)this);
            v8 = __RTDynamicCast(
                   v7,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                   (int)&C_EntityFlame `RTTI Type Descriptor',
                   0);
            v9 = sub_10115560(this, v8);
            sub_1000FC30((_DWORD *)this, v9);
          }
          sub_1000F430((_DWORD *)this, 0);
          sub_1000F430((_DWORD *)this, *((_DWORD *)v5 + 6));
          (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)(this + 4) + 64))(
            0,
            -1,
            524032,
            *((float *)off_103DC81C + 3));
          v5[8] = NAN;
          v5[3] = 0.0;
          v5[4] = 0.0;
          v5[5] = 0.0;
          v10 = *(_DWORD *)dword_10413178;
          v15 = sub_10034480(this);
          v14 = sub_10034480(this);
          v11 = (*(int (__thiscall **)(int))(v10 + 16))(dword_10413178);
          sub_101148F0(v5, v11, v14, v15);
          v12 = sub_10034480(this);
          sub_10114240(dword_10436254, v5, v12);
          sub_1010ECE0(this);
          sub_10036200(this, 1);
          sub_10036100(7);
          sub_100349D0(this);
          sub_10036170(this);
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 408))(this, -1293.0, v16);
          if ( *(_BYTE *)(this + 1964) == 1 )
            sub_10115DE0(this, *(unsigned __int8 *)(this + 1965));
          sub_10111B80(this);
          sub_10039ED0(this);
          LOBYTE(v4) = sub_10027000((_DWORD **)this);
        }
      }
    }
  }
  return (char)v4;
}
