int __thiscall sub_10034930(_BYTE *this, int a2)
{
  _BYTE *v3; // edi
  int v4; // edi
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD v12[6]; // [esp+8h] [ebp-4Ch] BYREF
  int v13; // [esp+20h] [ebp-34h]
  float v14[3]; // [esp+24h] [ebp-30h] BYREF
  float v15[3]; // [esp+30h] [ebp-24h] BYREF
  float v16[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v17[3]; // [esp+48h] [ebp-Ch] BYREF

  v3 = this + 225;
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  v4 = *((_DWORD *)this + 106);
  sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
  if ( v4 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v4 + 204))(v4, v17, v16);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v4 + 188))(v4, v15, v14);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v5 = *((_DWORD *)this + 63);
    v17[0] = *((float *)this + 119);
    v17[1] = *((float *)this + 120);
    v17[2] = *((float *)this + 121);
    v16[0] = *((float *)this + 124);
    v16[1] = *((float *)this + 122);
    v16[2] = *((float *)this + 123);
    if ( (v5 & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = *((_DWORD *)this + 63);
    v15[0] = *((float *)this + 145);
    v15[1] = *((float *)this + 146);
    v15[2] = *((float *)this + 147);
    if ( (v6 & 0x800) != 0 )
      sub_100DAE60(this);
    v14[0] = *((float *)this + 176);
    v14[1] = *((float *)this + 177);
    v14[2] = *((float *)this + 178);
  }
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = *((float *)this + 426);
  v12[0] = this + 580;
  *(float *)&v12[4] = v7;
  v12[1] = this + 704;
  v12[2] = v17;
  v8 = *((_DWORD *)this + 105);
  v12[3] = v16;
  v13 = v8;
  if ( !v8 )
    v13 = 4;
  v9 = *(_DWORD *)this;
  *(float *)&v12[5] = 100.0;
  v10 = (*(int (__thiscall **)(_BYTE *))(v9 + 24))(this);
  sub_10216B90(v10, v4, v12, this, -1, 0, 1);
  return sub_1025FAC0(this);
}
