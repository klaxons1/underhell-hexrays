void __thiscall sub_100ACCA0(int *this)
{
  float *v2; // eax
  float *v3; // eax
  int v4; // ecx
  unsigned __int8 v5; // al
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  _BYTE *v11; // ecx

  (*(void (__thiscall **)(int *))(*this + 148))(this);
  v2 = (float *)this[2];
  v2[26] = 0.0;
  v2[27] = 0.0;
  v2[28] = 0.0;
  v3 = (float *)this[2];
  v3[29] = 0.0;
  v3[30] = 0.0;
  v3[31] = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10434620 + 4))(dword_10434620);
  (*(void (__thiscall **)(int *))(*this + 152))(this);
  sub_101EE040(this[2] + 12, this + 6, this + 9, this + 12);
  v4 = this[1];
  v5 = *(_BYTE *)(v4 + 316);
  if ( v5 == 8 || v5 < 2u || v5 == 10 || *(_BYTE *)(v4 + 3964) || !sub_100A7E00(this, 1) || !sub_100AB850(this) )
  {
    if ( *(_BYTE *)(this[1] + 316) == 2 && (v6 = this[2], (*(_BYTE *)v6 & 2) == 0) && *(_DWORD *)(dword_1042E86C + 48) )
    {
      if ( *(float *)(v6 + 72) > 250.0 )
        (*(void (__thiscall **)(int *, _DWORD))(*this + 188))(this, 0);
    }
    else
    {
      (*(void (__thiscall **)(int *))(*this + 144))(this);
    }
    v7 = this[1];
    this[3] = *(unsigned __int8 *)(v7 + 320);
    if ( !sub_100F7AF0(v7) )
      *(float *)(this[1] + 3548) = -*(float *)(this[2] + 72);
    v8 = this[2];
    v9 = (_DWORD *)this[1];
    this[5] = 0;
    (*(void (__stdcall **)(_DWORD, int, int))(*v9 + 992))(v9[1168], v8 + 152, v8 + 64);
    sub_100AC430(this);
    (*(void (__thiscall **)(int *))(*this + 164))(this);
    v10 = this[1];
    if ( !*(_BYTE *)(v10 + 3964)
      && (*(_BYTE *)(v10 + 732) & 8) == 0
      && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 116))(this) )
    {
      v11 = (_BYTE *)this[1];
      if ( v11[316] == 9 )
      {
        sub_10035C70(v11, 2, 0);
        sub_10034490((_BYTE *)this[1], 0);
      }
    }
    switch ( *(_BYTE *)(this[1] + 316) )
    {
      case 0:
        return;
      case 1:
      case 2:
        (*(void (__thiscall **)(int *))(*this + 88))(this);
        break;
      case 4:
      case 5:
        (*(void (__thiscall **)(int *))(*this + 104))(this);
        break;
      case 8:
        sub_100A8850(this, *(float *)(dword_1043471C + 44), *(float *)(dword_104346D4 + 44));
        break;
      case 9:
        (*(void (__thiscall **)(int *))(*this + 108))(this);
        break;
      case 0xA:
        sub_100AAED0((int)this);
        break;
      default:
        DevMsg(1, "Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n", *(unsigned __int8 *)(this[1] + 316), 0);
        break;
    }
  }
}
