void __thiscall sub_103C7C80(float *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  __int64 v9; // [esp+14h] [ebp-18h]
  float v10; // [esp+1Ch] [ebp-10h]
  float v11; // [esp+28h] [ebp-4h]

  switch ( *a2 )
  {
    case 3:
      if ( sub_1001ED60(this + 1407) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float *, const char *, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
               this,
               "TLK_ATTACKING",
               "attacking_with_weapon:zap",
               0,
               0,
               0) )
        {
          sub_100925F0(this + 1407, 10.0, 30.0);
        }
      }
      sub_103953B0((int *)this, a2);
      break;
    case 0x9A:
      v4 = sub_100C74B0((volatile signed __int32 *)this, dword_106EBEB0, 1);
      sub_100C60B0(this, v4, 1);
      *((_DWORD *)this + 1433) = 1;
      v5 = sub_1026A890((unsigned int *)this + 1430);
      v6 = sub_1001F4B0(v5);
      if ( v6 )
      {
        v11 = (float)*(int *)(dword_106EBEFC + 48);
        v10 = (v11 - (double)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1572))(v6))
            / (double)*(int *)(dword_106EBF44 + 48);
        v7 = (int)sub_1001EE70(v10);
        v8 = *((_BYTE *)this + 5753) == 0;
        *((_DWORD *)this + 1434) = v7;
        if ( !v8 && v7 <= 0 )
          *((_DWORD *)this + 1434) = 1;
        sub_10027CD0(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 1312))(
          this,
          "NULL Player in heal schedule!\n");
      }
      break;
    case 0x9B:
      sub_10043E90((int *)this, dword_106EBEB8);
      break;
    case 0x9C:
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416))(this, 17);
      break;
    case 0x9D:
      sub_10043E90((int *)this, dword_106EBEB4);
      break;
    case 0x9E:
      HIDWORD(v9) = this;
      LODWORD(v9) = this;
      sub_1010DD80((_DWORD *)this + 1441, v9, 0.0);
      sub_10027CD0(this, 0);
      break;
    case 0x9F:
      return;
    case 0xA0:
      if ( sub_1012B040((unsigned int *)this + 1430, 0) )
      {
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1312))(this, 1);
      }
      else
      {
        v3 = sub_1026A890((unsigned int *)this + 1430);
        sub_100218B0(this, v3);
        sub_10027CD0(this, 0);
      }
      break;
    case 0xA1:
      if ( sub_10093C50(this) )
        (*(void (__thiscall **)(float *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
          this,
          "TLK_VORTIGAUNT_DISPEL",
          0,
          0,
          0,
          0);
      sub_10043E90((int *)this, dword_106EBEAC);
      break;
    default:
      sub_103953B0((int *)this, a2);
      break;
  }
}
