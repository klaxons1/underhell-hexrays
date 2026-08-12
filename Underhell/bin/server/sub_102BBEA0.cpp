int *__thiscall sub_102BBEA0(int this)
{
  int v2; // edx
  int *v3; // ecx
  int *result; // eax
  float *v5; // edi
  int v6; // eax
  double v7; // st7
  __int64 v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+10h] [ebp-10h]

  HIDWORD(v8) = this;
  LODWORD(v8) = this;
  sub_1010DD80((_DWORD *)(this + 1316), v8, 0.0);
  if ( (*(_BYTE *)(this + 248) & 1) == 0 )
  {
    sub_1023B860((_DWORD *)this, (int)"HeadcrabCanister.IncomingSound");
    sub_1023C380((_DWORD *)this, (int)"HeadcrabCanister.Explosion", 0.0, 0);
  }
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    sub_100E0D20(this, (float *)(this + 1260));
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(
      this,
      "models/props_combine/headcrabcannister01b.mdl");
    sub_100E0970(this, v2, 0, 0);
    sub_100EAB80((_DWORD *)this, 8);
    if ( *(_BYTE *)(this + 1120) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 1120);
      }
      *(_BYTE *)(this + 1120) = 1;
    }
    sub_100EAB80((_DWORD *)this, 32);
    sub_101129A0((unsigned __int16 *)(this + 320), 4);
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    v10 = *(float *)(dword_106B31C8 + 12) + 3.0;
    return (int *)sub_100EC4A0((int *)this, v10, 0);
  }
  else
  {
    v5 = (float *)(this + 1260);
    result = (int *)sub_102BB720((float *)this, this + 1260);
    if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
    {
      v6 = sub_1025FB50(1);
      if ( v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1088))(v6) )
        v7 = *(float *)(dword_106DD834 + 44);
      else
        v7 = *(float *)(dword_106DD7EC + 44);
      v9 = v7;
      result = (int *)sub_10261B70((float *)(this + 1260), *(float *)(dword_106DD7A4 + 44), 150.0, 1.0, v9, 0, 0);
    }
    if ( (*(_DWORD *)(this + 248) & 0x80000) == 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1013D350(v5, (float *)(this + 704), this, 50, 500, 1121, 1300.0, 0, -1, 0, 0);
      result = (int *)sub_102AF950(v5);
      if ( result )
        return (int *)sub_100F5880(result, 10.0);
    }
  }
  return result;
}
