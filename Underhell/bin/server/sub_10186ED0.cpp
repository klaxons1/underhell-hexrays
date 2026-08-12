char __thiscall sub_10186ED0(int this)
{
  char result; // al
  const char *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  float v6; // edx
  int v7; // edx
  int v8; // ebx
  int *v9; // ecx
  char v10; // al
  int v11; // edx
  int v12; // eax
  __int64 v13; // [esp+18h] [ebp-28h]
  float v14[3]; // [esp+30h] [ebp-10h] BYREF
  int v15; // [esp+3Ch] [ebp-4h]

  result = sub_10186050(this, 0);
  if ( result )
  {
    v3 = *(const char **)(this + 932);
    if ( !v3 )
      v3 = String;
    v4 = (_DWORD *)sub_101811E0(v3, -1);
    if ( v4 )
    {
      v4[425] = *(_DWORD *)(this + 948);
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v4 + 8))(v4, -1);
      sub_1002A0F0((int *)(this + 812), *v5, (int)v4, this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100E0D20((int)v4, (float *)(this + 580));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v6 = *(float *)(this + 708);
      v14[0] = 0.0;
      v14[2] = 0.0;
      v14[1] = v6;
      sub_100E0EA0((int)v4, v14);
      v7 = (int)(v4 + 62);
      v8 = v4[62] | 4;
      if ( v4[62] != v8 )
      {
        if ( *((_BYTE *)v4 + 84) )
        {
          *((_BYTE *)v4 + 88) |= 1u;
        }
        else
        {
          v9 = (int *)v4[6];
          if ( v9 )
            sub_100194B0(v9, 248);
        }
        v4[62] = v8;
      }
      if ( (*(_BYTE *)(this + 248) & 0x10) != 0 )
        sub_10035270((int)v4, v7, 512);
      v4[725] = *(_DWORD *)(this + 944);
      v4[700] = *(_DWORD *)(this + 936);
      sub_100211D0(v4, *(_DWORD *)(this + 940), 0);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 724))(this, v4);
      sub_10260750((char *)v4);
      (*(void (__thiscall **)(_DWORD *, int))(*v4 + 76))(v4, this);
      v10 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, 0);
      v11 = *v4;
      LOBYTE(v15) = v10;
      (*(void (__thiscall **)(_DWORD *))(v11 + 136))(v4);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, v15);
      v12 = *(_DWORD *)(this + 952);
      if ( v12 )
        v4[65] = v12;
      result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 728))(this, v4);
      ++*(_DWORD *)(this + 908);
      if ( (*(_BYTE *)(this + 248) & 0x20) == 0 )
      {
        if ( *(int *)(dword_106B3E7C + 48) < 3 )
          --*(_DWORD *)(this + 800);
        else
          --*(_DWORD *)(this + 804);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 740))(this);
        if ( result )
        {
          HIDWORD(v13) = this;
          LODWORD(v13) = this;
          sub_1010DD80((_DWORD *)(this + 836), v13, 0.0);
          result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
          *(_DWORD *)(this + 200) = 0;
        }
      }
    }
    else
    {
      return Warning("NULL Ent in NPCMaker!\n");
    }
  }
  return result;
}
