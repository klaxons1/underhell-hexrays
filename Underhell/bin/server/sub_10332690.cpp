void __thiscall sub_10332690(int this, int a2)
{
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int (__thiscall *v11)(int, _BYTE *); // edx
  int v12; // eax
  int v13; // eax
  _BYTE *v14; // edi
  void (__thiscall *v15)(_BYTE *, int); // eax
  float v16; // [esp+8h] [ebp-64h]
  int v17; // [esp+Ch] [ebp-60h]
  int v18; // [esp+10h] [ebp-5Ch]
  float v19[12]; // [esp+18h] [ebp-54h] BYREF
  _BYTE v20[12]; // [esp+48h] [ebp-24h] BYREF
  float v21[3]; // [esp+54h] [ebp-18h] BYREF
  float v22; // [esp+60h] [ebp-Ch] BYREF
  float v23; // [esp+64h] [ebp-8h]
  float v24; // [esp+68h] [ebp-4h]

  switch ( *(_DWORD *)a2 )
  {
    case 0x96:
      *(float *)(this + 3804) = *(float *)(dword_106B31C8 + 12) + *(float *)(a2 + 4);
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x97:
      v3 = (float *)sub_1026A890((unsigned int *)(this + 3796));
      v4 = *(float *)(this + 720) - v3[180];
      v5 = *(float *)(this + 724) - v3[181];
      v22 = *(float *)(this + 716) - v3[179];
      v23 = v4;
      v24 = v5;
      off_10689714();
      v24 = 0.0;
      v6 = sub_1026A890((unsigned int *)(this + 3796));
      v16 = flt_1066E1F4;
      v7 = (float *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 576))(v6, -1, -1.0);
      sub_10042450(v19, v7, 0, v16, v17, v18);
      v8 = sub_1026A890((unsigned int *)(this + 3796));
      v9 = *(_DWORD *)(this + 2588);
      LODWORD(v19[11]) = v8;
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v9 + 20))(v9, v19, 0);
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x98:
      if ( sub_1012B040((unsigned int *)(this + 3796), 0) )
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Physics ent NULL");
      }
      else if ( sub_1032EBA0(this) <= 80.0 )
      {
        v10 = sub_1032EA00((float *)this);
        sub_10039F40((int *)this, v10);
      }
      else
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Physics swat item has moved");
      }
      break;
    case 0x99:
      sub_1032ED50((_DWORD *)this);
      goto LABEL_3;
    case 0x9A:
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_10422220(this + 704, &v22);
      v11 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504);
      v21[0] = v22 * 30.0;
      v21[1] = v23 * 30.0;
      v21[2] = 30.0 * v24 + 100.0;
      v12 = v11(this, v20);
      sub_10330EE0(this, v12, v21, 1, 1, 0.0);
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x9B:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
        && (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 320))(v13)) )
      {
LABEL_3:
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
        sub_10022750((float *)this, 0.1, 0.0);
      }
      break;
    default:
      v14 = *(_BYTE **)(this + 3624);
      if ( !v14
        || (v15 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v14 + 108), v14[8] = 1, v15(v14, a2), !v14[8]) )
      {
        sub_10046510(this, a2);
      }
      break;
  }
}
