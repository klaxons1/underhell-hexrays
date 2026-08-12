char __thiscall sub_10058500(float *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  char v9; // al
  double v10; // st7
  char v11; // cl
  int v12; // edi
  int v13; // eax
  int v14; // eax
  double v15; // st6
  double v16; // st6
  double v17; // st5
  double v18; // st6
  double v19; // st7
  int v20; // edx
  int v21; // eax
  int v23; // [esp+4h] [ebp-8h]
  float v24; // [esp+8h] [ebp-4h]
  int v25; // [esp+8h] [ebp-4h]
  char v26; // [esp+17h] [ebp+Bh]

  v3 = *((_DWORD *)this + 1);
  LOBYTE(v4) = *(_BYTE *)(v3 + 28) & 0xF;
  if ( (_BYTE)v4 == 3 )
  {
    v4 = (**(int (__thiscall ***)(int))v3)(v3);
    v6 = v4;
    if ( a2 )
    {
      if ( *(_BYTE *)(a2 + 1964) )
      {
        v7 = *(_DWORD *)(a2 + 1968);
        v8 = *(_DWORD *)(a2 + 1972);
        v9 = *(_BYTE *)(a2 + 1976);
        this[9] = *(float *)(a2 + 1980);
        *((_DWORD *)this + 6) = v7;
        *((_DWORD *)this + 7) = v8;
        *((_BYTE *)this + 33) = v9;
        *((_BYTE *)this + 32) = 0;
        this[13] = *((float *)off_103DC81C + 3);
        *(_BYTE *)(a2 + 1964) = 0;
      }
      if ( *((_DWORD *)this + 6) == -1 )
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
        v10 = this[3];
        v11 = *((_BYTE *)this + 16);
        v12 = v14;
        v23 = v14;
        v13 = v14 - 1;
      }
      else
      {
        if ( *((_DWORD *)this + 7) == -1 )
          *((_DWORD *)this + 7) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
        v10 = this[9];
        v11 = *((_BYTE *)this + 33);
        v12 = *((_DWORD *)this + 7) - *((_DWORD *)this + 6) + 1;
        v23 = v12;
        v13 = *((_DWORD *)this + 7) - 1;
      }
      v24 = v10;
      v26 = v11;
      if ( !*((_BYTE *)this + 32) || v11 )
      {
        if ( *((_DWORD *)this + 6) == -1 )
        {
          v15 = ((double (__thiscall *)(float *, int))*(_DWORD *)(*(_DWORD *)this + 20))(this, a2);
          v10 = v24;
        }
        else
        {
          v15 = this[13];
        }
        v16 = *((float *)off_103DC81C + 3) - v15;
        v17 = v16 - *((float *)off_103DC81C + 4);
        if ( v16 < 0.0 )
          v16 = 0.0;
        if ( v17 < 0.0 )
          v17 = 0.0;
        v18 = v10 * v16;
        v19 = v17 * v10;
        v25 = (int)v18 % v12;
        v20 = (int)v19 % v12;
        v21 = *((_DWORD *)this + 6);
        if ( v21 != -1 )
        {
          v25 += v21;
          v20 += v21;
        }
        if ( v20 > v25 )
        {
          *((_BYTE *)this + 32) = 1;
          if ( v26 )
          {
            (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 24))(this, a2);
          }
          else
          {
            if ( (double)v23 > v19 )
              (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 24))(this, a2);
            v25 = v12 - 1;
          }
        }
        LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 16))(*((_DWORD *)this + 2), v25);
      }
      else
      {
        LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 16))(*((_DWORD *)this + 2), v13);
      }
    }
  }
  return v4;
}
