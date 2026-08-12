int __thiscall sub_1033F290(_DWORD *this, int a2)
{
  void (__thiscall *v3)(_DWORD *, _BYTE *); // edx
  const char *v4; // eax
  int v6; // edi
  int v7; // eax
  void (__thiscall *v8)(_DWORD *, _BYTE *); // edx
  void (__thiscall *v9)(_DWORD *, _BYTE *); // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  void (__thiscall *v15)(_DWORD *, _BYTE *); // edx
  int v16; // eax
  void (__thiscall *v17)(_DWORD *, _BYTE *); // edx
  float *v18; // eax
  double v19; // st7
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  float *v24; // edi
  _DWORD *v25; // eax
  float *v26; // eax
  double v27; // st7
  int v28; // eax
  _BYTE v29[8]; // [esp+14h] [ebp-2Ch] BYREF
  int v30; // [esp+1Ch] [ebp-24h]
  int v31; // [esp+28h] [ebp-18h]
  int v32; // [esp+2Ch] [ebp-14h]
  float v33; // [esp+34h] [ebp-Ch] BYREF
  float v34; // [esp+38h] [ebp-8h]
  float v35; // [esp+3Ch] [ebp-4h]

  switch ( a2 )
  {
    case 19:
      return 90;
    case 27:
      if ( this[202] == 9 )
      {
        v3 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1148);
        v30 = 0;
        v31 = -1;
        v32 = 0;
        v3(this, v29);
      }
      if ( !this[699] )
      {
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1)
          && sub_10023D10(this, 22) )
        {
          return 105;
        }
        goto LABEL_13;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3)
        || !sub_10023D10(this, 22)
        || !sub_1004AFF0(this, 8) )
      {
LABEL_13:
        if ( !sub_1033D050(this) )
          return 102;
        v6 = *this;
        v7 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v6 + 1768))(this, v7) )
          return 102;
        else
          return 113;
      }
      if ( !*((_BYTE *)this + 4173) )
      {
        v4 = "COMBINEPRISONGUARD_THROW_GRENADE";
        if ( !*((_BYTE *)this + 4976) )
          v4 = "COMBINE_THROW_GRENADE";
        sub_100AC410((int)(this + 1061), v4, 0, 2);
      }
      return 106;
    case 28:
      if ( this[202] == 9 )
      {
        v8 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1148);
        v30 = 0;
        v31 = -1;
        v32 = 0;
        v8(this, v29);
      }
      return 103;
    case 35:
      if ( this[202] == 9 )
      {
        v15 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1148);
        v30 = 0;
        v31 = -1;
        v32 = 0;
        v15(this, v29);
      }
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2320))(this, 1) && sub_1004AFF0(this, 7) )
        return 116;
      v16 = this[1245];
      if ( (v16 == 2 || v16 == 1) && !this[906] && sub_1004AE20(this, 0, 1) )
        return 98;
      else
        return 97;
    case 38:
      if ( this[202] == 9 )
      {
        v9 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1148);
        v30 = 0;
        v31 = -1;
        v32 = 0;
        v9(this, v29);
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this)
        && (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
        && (v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this), sub_10029FD0((char *)this, v10)) )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 2172))(this);
        return 12;
      }
      else if ( sub_10023D10(this, 10) )
      {
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 27);
      }
      else
      {
        if ( this[1075] )
          return sub_102FB410(this, a2);
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
        {
          v11 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
          sub_1003ABB0(this, v11, -1.0);
        }
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 109);
      }
    case 43:
      if ( sub_10023D10(this, 4) || sub_10023D10(this, 3) )
      {
        sub_1004AF00(this);
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 50);
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2320))(this, 1) && sub_1004AFF0(this, 7) )
      {
        return 116;
      }
      else
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this)
          && (!sub_102F3560(this) || sub_10023D10(this, 18)) )
        {
          goto LABEL_73;
        }
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
        {
          v18 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
          v33 = *((float *)this + 179) - v18[179];
          v34 = *((float *)this + 180) - v18[180];
          v19 = *((float *)this + 181) - v18[181];
          v35 = v19;
          sub_100D7A40(&v33);
          if ( v19 > 256.0 )
          {
            (*(void (__thiscall **)(_DWORD *))(*this + 2172))(this);
            v20 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
            v21 = sub_100CF460(this);
            (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v20 + 520))(v20, &v33, v21 + 716, 1);
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, float *, _DWORD))(*this + 2024))(
                    this,
                    this + 179,
                    &v33,
                    0) )
LABEL_73:
              (*(void (__thiscall **)(_DWORD *))(*this + 2176))(this);
          }
        }
        return 100;
      }
    case 44:
      if ( sub_100CF460(this)
        && (v22 = sub_100CF460(this), ((*(int (__thiscall **)(int))(*(_DWORD *)v22 + 1364))(v22) & 0x4000) != 0) )
      {
        return 44;
      }
      else
      {
        return 101;
      }
    case 50:
      if ( this[202] == 9 )
      {
        v17 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1148);
        v30 = 0;
        v31 = -1;
        v32 = 0;
        v17(this, v29);
      }
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2316))(this, 1)
        && sub_1004AFF0(this, 8)
        && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) < 20 )
      {
        return 108;
      }
      else
      {
        return sub_1033D050(this) ? 51 : 92;
      }
    case 81:
      return (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) != 0 ? 89 : 81;
    case 88:
      if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
        return 88;
      v23 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 320))(v23) )
        return 88;
      if ( !*((_BYTE *)this + 4213) )
        return 88;
      v24 = (float *)sub_10019640(this);
      v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v26 = (float *)sub_10019640(v25);
      v33 = *v26 - *v24;
      v34 = v26[1] - v24[1];
      v27 = v26[2] - v24[2];
      v35 = v27;
      sub_100D7A40(&v33);
      if ( v27 < 256.0 )
        return 88;
      *((_BYTE *)this + 4213) = 0;
      return 93;
    case 96:
      v12 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v13 = v12;
      if ( v12 )
      {
        if ( sub_100D7680(v12) )
        {
          v14 = sub_100D7680(v13);
          if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1672))(v14) & 0x2000) == 0 )
            return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 35);
        }
      }
      if ( this[702] )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 35);
      else
        return 96;
    case 107:
      if ( sub_10023D10(this, 21) && sub_1004AE20(this, 0, 1) )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 43);
      else
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 81);
    case 109:
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
        && (v28 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 264))(v28)) )
      {
        return 114;
      }
      else
      {
        return 109;
      }
    default:
      return sub_102FB410(this, a2);
  }
}
