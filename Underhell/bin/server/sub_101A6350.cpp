void __thiscall sub_101A6350(int this, _DWORD *a2)
{
  void *v3; // eax
  unsigned int v4; // eax
  void *v5; // edi
  float *v6; // edi
  _DWORD *v7; // eax
  float *v8; // eax
  void (__thiscall *v9)(int, float *, _DWORD, _DWORD); // edx
  double v10; // st7
  float *v11; // eax
  _BYTE *v12; // edi
  _BYTE v13[8]; // [esp+Ch] [ebp-50h] BYREF
  int v14; // [esp+14h] [ebp-48h]
  int v15; // [esp+20h] [ebp-3Ch]
  int v16; // [esp+24h] [ebp-38h]
  float v17[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v18; // [esp+38h] [ebp-24h]
  float v19; // [esp+3Ch] [ebp-20h]
  float v20; // [esp+40h] [ebp-1Ch]
  float v21; // [esp+44h] [ebp-18h] BYREF
  float v22; // [esp+48h] [ebp-14h]
  float v23; // [esp+4Ch] [ebp-10h]
  float v24; // [esp+50h] [ebp-Ch]
  float v25; // [esp+54h] [ebp-8h]
  float v26; // [esp+58h] [ebp-4h]
  float v27; // [esp+64h] [ebp+8h]

  switch ( *a2 )
  {
    case 0xFB:
      if ( (unsigned __int8)sub_103E0CF0(0) )
        *(float *)(*(_DWORD *)(this + 2604) + 20) = *(float *)(this + 3844);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0xFC:
      if ( *(_DWORD *)(this + 2372) == dword_106EC798
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      if ( sub_1026A890(this + 3840) )
      {
        v6 = (float *)sub_10019640((_DWORD *)this);
        v7 = (_DWORD *)sub_1026A890(this + 3840);
        v8 = (float *)sub_10019640(v7);
        v9 = *(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528);
        v24 = *v8 - *v6;
        v25 = v8[1] - v6[1];
        v26 = v8[2] - v6[2];
        v9(this, &v21, 0, 0);
        v27 = v22 * v25 + v21 * v24 + v26 * v23;
        off_10689714();
        v10 = v27 - *(float *)(dword_106B924C + 44);
        v18 = v21 * v10;
        v19 = v22 * v10;
        v20 = v10 * v23;
        v11 = (float *)sub_10019640((_DWORD *)this);
        v17[0] = *v11 + v18;
        v17[1] = v11[1] + v19;
        v17[2] = v11[2] + v20;
        sub_100E0D20(this, v17);
      }
      else
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      sub_10050BE0((float *)(this + 3848));
      sub_10039F40((int *)this, dword_106EC798);
      return;
    case 0xFD:
      if ( *(_DWORD *)(this + 2372) == dword_106B9100
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      if ( !(unsigned __int8)sub_103E0CF0(0) )
        goto LABEL_8;
      v12 = (_BYTE *)sub_1026A890(this + 3840);
      if ( !v12[1720] )
      {
        sub_10039F40((int *)this, dword_106B9100);
        (*(void (__thiscall **)(_BYTE *, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v12 + 852))(
          v12,
          this,
          this,
          1,
          LODWORD(flt_106F1CA8),
          LODWORD(flt_106F1CAC),
          LODWORD(flt_106F1CB0));
        *(_DWORD *)(this + 3840) = -1;
      }
      return;
    case 0xFE:
      goto LABEL_4;
    case 0xFF:
      goto LABEL_3;
    case 0x100:
      v14 = 0;
      v15 = -1;
      v16 = 0;
      v3 = (void *)sub_10022C40((_DWORD *)this);
      sub_100D68C0(v3, (int)v13);
      sub_10027CD0((_DWORD *)this, 0);
LABEL_3:
      sub_10039F40((int *)this, 74);
LABEL_4:
      v4 = *(_DWORD *)(this + 2420);
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1] )
      {
        v5 = (void *)sub_10022C40((_DWORD *)this);
        (*(void (__thiscall **)(void *))(*(_DWORD *)v5 + 844))(v5);
        sub_100D6A00(v5);
      }
LABEL_8:
      sub_10027CD0((_DWORD *)this, 0);
      break;
    default:
      sub_10332690(this, (char)a2);
      break;
  }
}
