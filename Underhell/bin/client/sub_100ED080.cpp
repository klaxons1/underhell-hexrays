void __thiscall sub_100ED080(int this, float a2)
{
  int v3; // esi
  bool v4; // cf
  bool v5; // zf
  int i; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  _DWORD v10[5]; // [esp+4h] [ebp-3Ch] BYREF
  _DWORD v11[2]; // [esp+18h] [ebp-28h] BYREF
  float v12; // [esp+20h] [ebp-20h] BYREF
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+28h] [ebp-18h]
  float v15; // [esp+2Ch] [ebp-14h] BYREF
  float v16; // [esp+30h] [ebp-10h]
  float v17; // [esp+34h] [ebp-Ch]
  int v18; // [esp+3Bh] [ebp-5h] BYREF
  char v19; // [esp+3Fh] [ebp-1h]

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 140) + 12))(*(_DWORD *)(this + 140)) )
  {
    if ( (*(_DWORD *)(this + 148) & 0x1000) != 0 )
    {
      v11[0] = this;
      v12 = a2;
      v3 = *(_DWORD *)(this + 140);
      v14 = 0.0;
      v11[1] = 0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 20))(v3, v11);
    }
    else
    {
      v12 = 0.0;
      ++*(_WORD *)(this + 212);
      v13 = 0.0;
      v4 = *(_WORD *)(this + 212) < 8u;
      v14 = 0.0;
      v15 = 0.0;
      LOBYTE(v18) = 0;
      v16 = 0.0;
      v19 = 0;
      v17 = 0.0;
      if ( !v4 && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 8)
        || *(_WORD *)(this + 212) >= 0x10u )
      {
        v5 = (*(_BYTE *)(this + 148) & 8) == 0;
        v19 = 1;
        *(_WORD *)(this + 212) = 0;
        if ( !v5 )
        {
          v12 = 3.4028235e38;
          v13 = 3.4028235e38;
          v14 = 3.4028235e38;
          v15 = -3.4028235e38;
          v16 = -3.4028235e38;
          v17 = -3.4028235e38;
        }
      }
      for ( i = *(unsigned __int16 *)(this + 196); i != 0xFFFF; i = *(unsigned __int16 *)(v7
                                                                                        + *(_DWORD *)(this + 184)
                                                                                        + 6) )
      {
        v7 = 8 * (unsigned __int16)i;
        v8 = *(_DWORD *)(v7 + *(_DWORD *)(this + 184));
        v9 = *(_DWORD *)(this + 140);
        *(float *)&v10[2] = a2;
        v10[4] = 0;
        v10[0] = this;
        v10[1] = v8;
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 20))(v9, v10);
        if ( v19 )
          sub_100EC430((_BYTE *)this, v8, &v18, &v12, &v15);
      }
      if ( v19 )
        sub_100EC320(this, v18, &v12, &v15);
    }
  }
}
