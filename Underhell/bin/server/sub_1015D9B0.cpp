void __thiscall sub_1015D9B0(int *this)
{
  float *v2; // eax
  float *v3; // eax
  int v4; // ecx
  unsigned __int8 v5; // al
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  float *v10; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  float v16; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(int *))(*this + 148))(this);
  v2 = (float *)this[2];
  v2[26] = 0.0;
  v2[27] = 0.0;
  v2[28] = 0.0;
  v3 = (float *)this[2];
  v3[29] = 0.0;
  v3[30] = 0.0;
  v3[31] = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 4))(dword_106B6E60);
  (*(void (__thiscall **)(int *))(*this + 152))(this);
  sub_104222B0(this[2] + 12, this + 6, this + 9, this + 12);
  v4 = this[1];
  v5 = *(_BYTE *)(v4 + 306);
  if ( v5 == 8 || v5 < 2u || v5 == 10 || *(_BYTE *)(v4 + 3244) || !sub_10157680(this, 1) || !sub_10159DF0(this) )
  {
    if ( *(_BYTE *)(this[1] + 306) == 2 && (v6 = this[2], (*(_BYTE *)v6 & 2) == 0) && *(_DWORD *)(dword_106B3CAC + 48) )
    {
      if ( *(float *)(v6 + 72) > 250.0 )
        (*(void (__thiscall **)(int *, _DWORD))(*this + 188))(this, 0);
    }
    else
    {
      (*(void (__thiscall **)(int *))(*this + 144))(this);
    }
    v7 = this[1];
    this[3] = *(unsigned __int8 *)(v7 + 447);
    if ( !sub_101C5260(v7) )
    {
      v8 = this[1];
      v9 = *(_DWORD *)(v8 + 2292);
      v10 = (float *)(v8 + 2292);
      v16 = -*(float *)(this[2] + 72);
      if ( v9 != LODWORD(v16) )
      {
        (**((void (__thiscall ***)(int, float *))v10 - 25))((int)(v10 - 25), v10);
        *v10 = v16;
      }
    }
    v11 = this[2];
    v12 = (_DWORD *)this[1];
    this[5] = 0;
    (*(void (__stdcall **)(_DWORD, int, int))(*v12 + 1280))(v12[1127], v11 + 152, v11 + 64);
    sub_1015C720((int)this);
    (*(void (__thiscall **)(int *))(*this + 164))(this);
    v13 = this[1];
    if ( !*(_BYTE *)(v13 + 3244)
      && (*(_BYTE *)(v13 + 256) & 8) == 0
      && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 116))(this) )
    {
      v15 = this[1];
      if ( *(_BYTE *)(v15 + 306) == 9 )
      {
        sub_100E0970(v15, v14, 2, 0);
        sub_1015D550(this[1], 0);
      }
    }
    switch ( *(_BYTE *)(this[1] + 306) )
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
        sub_10157F10(this, *(float *)(dword_106B6FE4 + 44), *(float *)(dword_106B6F9C + 44));
        break;
      case 9:
        (*(void (__thiscall **)(int *))(*this + 108))(this);
        break;
      case 0xA:
        sub_10159AB0((int)this);
        break;
      default:
        DevMsg(1, "Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n", *(unsigned __int8 *)(this[1] + 306), 1);
        break;
    }
  }
}
