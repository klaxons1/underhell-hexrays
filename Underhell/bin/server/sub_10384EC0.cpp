void __thiscall sub_10384EC0(float *this, float a2)
{
  _DWORD *v3; // ecx
  _BYTE *v4; // edi
  float *v5; // eax
  int v6; // eax
  float *v7; // ebx
  float *v8; // eax
  unsigned int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // [esp+10h] [ebp-80h]
  int v13[13]; // [esp+20h] [ebp-70h] BYREF
  char v14; // [esp+57h] [ebp-39h]
  int v15; // [esp+6Ch] [ebp-24h]
  float v16[3]; // [esp+74h] [ebp-1Ch] BYREF
  float v17; // [esp+80h] [ebp-10h] BYREF
  float v18; // [esp+84h] [ebp-Ch]
  float v19; // [esp+88h] [ebp-8h]
  float *v20; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  (*(void (__thiscall **)(_DWORD *, float *, _DWORD))(**((_DWORD **)this + 106) + 204))(
    *((_DWORD **)this + 106),
    &v17,
    0);
  v3 = (_DWORD *)*((_DWORD *)this + 106);
  v17 = v17 * a2;
  v18 = v18 * a2;
  v19 = a2 * v19;
  if ( v3 )
  {
    if ( ((*(int (__thiscall **)(_DWORD *))(*v3 + 76))(v3) & 4) != 0 )
    {
      v4 = (_BYTE *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 632))(this, 3.4028235e38);
      if ( v4 )
      {
        v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
        sub_10111AB0(v4 + 320, v5);
        if ( 3.4028235e38 < 30.0 )
        {
          v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 508))(v4);
          sub_104222B0(v6, &v17, 0, 0);
          v17 = v17 * 40.0;
          v18 = v18 * 40.0;
          v19 = 40.0 * v19;
        }
      }
    }
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v12 = *((_DWORD *)this + 419);
  v16[0] = this[145] + v17;
  v16[1] = this[146] + v18;
  v16[2] = this[147] + v19;
  v7 = (float *)sub_10073730(v12);
  v8 = (float *)sub_10073710(*((_DWORD *)this + 419));
  v9 = *((_DWORD *)this + 63) >> 11;
  v20 = v8;
  if ( (v9 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_100231A0((int)&savedregs, (int)this, this + 145, v16, v20, v7, 33701899, (int)this, 0, (int)v13);
  if ( 1.0 != *(float *)&v13[11] || v14 )
  {
    if ( v15 )
    {
      sub_101C6C20(this, v15, (int)v13);
      v10 = v15;
      if ( !*((_BYTE *)this + 3894)
        || !sub_100D7680(v15)
        || (v11 = sub_100D7680(v15), !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 1528))(v11, 0)) )
      {
        if ( v10
          && *(_BYTE *)(v10 + 225) == 2
          && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 220))(v10) != 13
          && this[957] < (double)*(float *)(dword_106B31C8 + 12) )
        {
          sub_10383F60(this, (char **)v10, a2, (int)v13);
          this[964] = 20.0;
        }
        else
        {
          sub_10384820((int)this, (_BYTE *)v10, a2, (int)v13);
          this[964] = 20.0;
        }
      }
    }
  }
}
