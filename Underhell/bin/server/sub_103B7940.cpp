void __thiscall sub_103B7940(float *this, int a2)
{
  float *v2; // esi
  void (__thiscall *v3)(float *, int *); // edx
  int v4; // edx
  float v5; // eax
  int v6; // edx
  int v7; // ecx
  void (__thiscall *v8)(float *, _DWORD, _DWORD *); // edx
  int v9; // eax
  bool v10; // al
  int v11; // eax
  float *v12; // eax
  bool v13; // c3
  double v14; // st7
  bool v15; // c3
  float v16; // [esp+0h] [ebp-80h]
  float v17; // [esp+0h] [ebp-80h]
  _DWORD v18[20]; // [esp+Ch] [ebp-74h] BYREF
  float v19[3]; // [esp+5Ch] [ebp-24h] BYREF
  _DWORD v20[2]; // [esp+68h] [ebp-18h] BYREF
  float v21; // [esp+70h] [ebp-10h]
  int v22; // [esp+74h] [ebp-Ch] BYREF
  int v23; // [esp+78h] [ebp-8h] BYREF
  float v24; // [esp+7Ch] [ebp-4h]

  v2 = this;
  switch ( *(_DWORD *)a2 )
  {
    case 0x18:
      v3 = *(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 1264);
      v24 = *(float *)(a2 + 4);
      v23 = 21;
      v3(this, &v23);
      return;
    case 0x64:
      if ( *((_BYTE *)this + 3864) )
      {
        if ( 45.0 == *(float *)(a2 + 4) )
        {
          sub_10045B20((int)this, 10.0);
          if ( *((_BYTE *)v2 + 896) )
            *((_BYTE *)v2 + 3864) = 0;
        }
      }
      if ( v2[226] > 0.5 )
      {
        if ( sub_100697A0(v2, 91, 0) && (v13 = 490.0 == sub_100BE820((int)v2, dword_106EAD9C), v14 = 490.0, !v13)
          || sub_100697A0(v2, 90, 0) && (v15 = 200.0 == sub_100BE820((int)v2, dword_106EAD9C), v14 = 200.0, !v15) )
        {
          v16 = v14;
          sub_103B0A00((int)v2, v16);
        }
        v17 = sub_100BE820((int)v2, dword_106EAD9C);
        sub_103AEED0(v2, v17);
      }
      this = v2;
      goto LABEL_35;
    case 0x96:
      v9 = sub_103B0EE0(this);
      sub_103B7180(v2, v9, 0.1);
      v10 = sub_10022810(v2);
      goto LABEL_12;
    case 0x97:
      sub_10027CD0(this, 0);
      return;
    case 0x98:
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 732))(this) )
        sub_10027CD0(v2, 0);
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 368))(v2) )
      {
        v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 368))(v2);
        v12 = sub_103AF5C0(v2, v19, v11);
        sub_103B4D60(v2 + 925, v12);
      }
      return;
    case 0x99:
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 732))(this) && ((_BYTE)v2[63] & 1) == 0 )
      {
        sub_10247EC0(v18);
        sub_101D0270((int)v2, 0, (int)v18, 0, 0);
        sub_10027CD0(v2, 0);
        sub_1025FAC0((int)v2);
      }
      return;
    case 0x9D:
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 651) + 76))(*((_DWORD *)this + 651), -1);
      v10 = sub_10021530(v2);
LABEL_12:
      if ( v10 )
        sub_10027CD0(v2, 0);
      break;
    case 0xA2:
      if ( ((_DWORD)this[63] & 0x1000) != 0 )
        sub_100DAFD0((int)this);
      v4 = *((_DWORD *)v2 + 120);
      v5 = v2[121];
      v22 = *((_DWORD *)v2 + 119);
      v24 = v5;
      v23 = v4;
      v24 = v5 - *(float *)(dword_106B6F0C + 44) * 0.1;
      sub_100DD660((int)v2, (float *)&v22);
      if ( ((_DWORD)v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      v6 = *((_DWORD *)v2 + 146);
      v7 = *((_DWORD *)v2 + 145);
      v21 = v2[147];
      v20[1] = v6;
      v8 = *(void (__thiscall **)(float *, _DWORD, _DWORD *))(*(_DWORD *)v2 + 2040);
      v20[0] = v7;
      v8(v2, 0, v20);
      if ( ((_DWORD)v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      if ( v2[147] - v21 <= 0.0 )
      {
        sub_100DD660((int)v2, &flt_106F1CA8);
        sub_10027CD0(v2, 0);
      }
      break;
    default:
LABEL_35:
      sub_100497D0((int *)this, (_DWORD *)a2);
      break;
  }
}
