void __thiscall sub_10380740(int *this, int a2)
{
  int v2; // edi
  int *v3; // esi
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7
  int v9; // ecx
  _DWORD v10[12]; // [esp+10h] [ebp-3Ch] BYREF
  float v11; // [esp+40h] [ebp-Ch]
  float v12; // [esp+44h] [ebp-8h]
  float v13; // [esp+48h] [ebp-4h]

  v2 = a2;
  v3 = this;
  switch ( *(_DWORD *)a2 )
  {
    case 0x4C:
      *(float *)&a2 = 1.0;
      sub_10045790((float *)this + 216, (float *)&a2);
      this = v3;
      goto LABEL_12;
    case 0x96:
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
      {
        v4 = (*(int (__thiscall **)(int *))(*v3 + 368))(v3);
        if ( sub_1007EE30((_DWORD **)v3[647], v4 + 716, *(float *)(v2 + 4), (int)&flt_106F1CA8) )
          goto LABEL_3;
      }
      if ( sub_1007F110(v3[647], *(float *)(v2 + 4), (int)&flt_106F1CA8) )
        goto LABEL_3;
      (*(void (__thiscall **)(int *, int))(*v3 + 1312))(v3, 22);
      break;
    case 0x97:
      v5 = *(float *)(a2 + 4);
      v10[0] = 4;
      v6 = *((float *)this + 179);
      v10[10] = 0;
      v11 = v6;
      v7 = *((float *)this + 180);
      *(float *)&v10[1] = v11;
      v12 = v7;
      v8 = *((float *)this + 181) - v5;
      v10[11] = dword_10675168;
      v9 = this[647];
      *(float *)&v10[2] = v12;
      v13 = v8;
      *(float *)&v10[3] = v13;
      *(float *)&v10[8] = -1.0;
      memset(&v10[4], 255, 16);
      *(float *)&v10[9] = -1.0;
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v9 + 20))(v9, v10, 2) )
        sub_10027CD0(v3, 0);
      else
        (*(void (__thiscall **)(int *, int))(*v3 + 1312))(v3, 11);
      return;
    case 0x98:
      sub_1007DD70(dword_106E98B0);
LABEL_3:
      sub_10027CD0(v3, 0);
      break;
    default:
LABEL_12:
      sub_10046510((int)this, v2);
      break;
  }
}
