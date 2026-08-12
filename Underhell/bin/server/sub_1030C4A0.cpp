char __thiscall sub_1030C4A0(float *this, int a2, int a3, int a4, float a5)
{
  int v6; // edi
  float *v8; // eax
  double v9; // st4
  double v10; // rt0
  char v11; // al
  int v12; // ebx
  int v13; // esi
  double v14; // st7
  float v15; // [esp+Ch] [ebp-24h]
  _BYTE v16[12]; // [esp+18h] [ebp-18h] BYREF
  float v17[3]; // [esp+24h] [ebp-Ch] BYREF

  sub_1030B5E0((int)this, (float *)&a2, 128.0, 350.0, 0);
  v6 = LODWORD(a5);
  if ( a5 == 0.0
    || !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
          dword_106B31D0,
          *(_DWORD *)(LODWORD(a5) + 24)) )
  {
    sub_1030A510((int)this, v6, &a5);
    v6 = LODWORD(a5);
    if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
            dword_106B31D0,
            *(_DWORD *)(LODWORD(a5) + 24)) )
    {
      ++*((_DWORD *)this + 917);
      return 1;
    }
  }
  if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1080))(this, v6) != 1
    || *(float *)(dword_106B31C8 + 12) <= (double)this[418] )
  {
    v11 = *(_BYTE *)(v6 + 306);
    if ( !v11 || v11 == 7 )
      return 1;
    if ( v11 == 6 )
    {
      v12 = *(_DWORD *)(v6 + 424);
      if ( v12 )
      {
        if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 76))(*(_DWORD *)(v6 + 424)) & 4) != 0 )
        {
          sub_101FB2A0(v6);
        }
        else
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 40))(v12) )
            return 1;
          v13 = *((_DWORD *)this + 106);
          a5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v12 + 116))(v12);
          v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v13 + 116))(v13) * 0.5;
          if ( v14 < a5 )
            return 1;
        }
      }
    }
    return 0;
  }
  sub_1023C380(this, (int)"NPC_AntlionGuard.Shove", 0.0, 0);
  if ( !sub_100C4E90(this, dword_106E2FF4) )
    sub_100C7570((volatile signed __int32 *)this, dword_106E2FF4, COERCE_FLOAT(1), 1);
  sub_10309040(this, v6);
  v8 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 904))(this, v16);
  v9 = v8[2];
  v10 = v8[1] * 400.0;
  v17[0] = *v8 * 400.0;
  v17[1] = v10;
  v17[2] = 400.0 * v9 + 200.0;
  sub_100EA150(v6, v17);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6)
    && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) == v6 )
  {
    sub_100285C0(this, 0, 1);
  }
  v15 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_10031BA0((int)this, v15);
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416))(this, dword_106E2FF8);
  this[917] = 0.0;
  return 0;
}
