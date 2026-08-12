void __thiscall sub_10340950(int this, _DWORD *a2)
{
  char v3; // al
  int v4; // eax
  double v5; // st6
  double v6; // st7
  int v7; // eax
  _DWORD *v8; // eax
  float *v9; // eax
  float v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int *v13; // eax
  int v14; // edx
  int v15; // eax
  float v16[12]; // [esp+14h] [ebp-60h] BYREF
  float v17[3]; // [esp+44h] [ebp-30h] BYREF
  int v18[3]; // [esp+50h] [ebp-24h] BYREF
  int v19[3]; // [esp+5Ch] [ebp-18h] BYREF
  float v20; // [esp+68h] [ebp-Ch]
  double v21; // [esp+6Ch] [ebp-8h] BYREF

  switch ( *a2 )
  {
    case 3:
      v4 = sub_10021B90((void *)this);
      if ( !v4 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 876))(v4, this) )
        sub_10027CD0((_DWORD *)this, 0);
      v3 = sub_10022810((float *)this);
      goto LABEL_5;
    case 0x4A:
      sub_10043050((void *)this, 0, 0);
      v13 = (int *)sub_100217F0((void *)this);
      v19[0] = *v13;
      v19[1] = v13[1];
      v14 = v13[2];
      v15 = *(_DWORD *)this;
      v19[2] = v14;
      if ( (*(unsigned __int8 (__thiscall **)(int, int *))(v15 + 880))(this, v19) )
        sub_10078210(*(float **)(this + 2604), *(float *)(*(_DWORD *)(this + 2604) + 20), -2.0);
      else
        sub_10078720(*(_DWORD *)(this + 2604), (int)v19, -2.0);
      if ( *(float *)(this + 1672) <= (double)*(float *)(dword_106B31C8 + 12)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        if ( (int)--*(_DWORD *)(this + 4232) <= 0 )
        {
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          sub_10043E90((int *)this, 17);
          *(float *)(this + 2740) = *(float *)(dword_106B31C8 + 12);
          v21 = *(float *)(this + 4236) + *(float *)(dword_106B31C8 + 12) - 0.1;
          sub_10169D00((float *)(this + 1672), &v21);
        }
      }
      return;
    case 0x96:
      v5 = 64.0 * *(float *)(this + 4204);
      v6 = *(float *)(this + 4200) * 64.0;
      *(float *)v18 = *(float *)(this + 4196) * 64.0 + *(float *)(this + 716);
      *(float *)&v18[1] = v6 + *(float *)(this + 720);
      *(float *)&v18[2] = v5 + *(float *)(this + 724);
      sub_10078720(*(_DWORD *)(this + 2604), (int)v18, -2.0);
      if ( sub_10021530((_DWORD *)this) )
        sub_10027CD0((_DWORD *)this, 1);
      return;
    case 0x98:
      sub_10043050((void *)this, 0, 0);
      goto LABEL_4;
    case 0x9A:
      sub_1033DAB0(this, (int)a2);
      return;
    case 0x9C:
      sub_10078720(*(_DWORD *)(this + 2604), this + 4964, -2.0);
LABEL_4:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 732))(this);
LABEL_5:
      if ( v3 )
        sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x9D:
      if ( sub_102DC130((unsigned int *)(this + 4208)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
      }
      else
      {
        v7 = *(_DWORD *)(this + 2152);
        if ( v7 <= 0 )
        {
          *(_DWORD *)(this + 2152) = v7 + 1;
        }
        else
        {
          *(_DWORD *)(this + 2152) = 0;
          v8 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4208));
          v9 = (float *)sub_10019640(v8);
          v10 = *v9;
          v11 = *((_DWORD *)v9 + 1);
          v12 = *((_DWORD *)v9 + 2);
          v20 = v10;
          v21 = COERCE_DOUBLE(__PAIR64__(v12, v11));
          sub_10042450(v16, (float *)(this + 2876), 11, -2.0, 0, dword_1066F6E8);
          (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 2588) + 20))(
            *(_DWORD *)(this + 2588),
            v16,
            2);
          v17[0] = v20 - v16[1];
          v17[1] = *(float *)&v21 - v16[2];
          v17[2] = *((float *)&v21 + 1) - v16[3];
          sub_1007DF40((int)v17);
        }
      }
      break;
    case 0x9F:
      return;
    default:
      sub_1001E820((_DWORD *)this, a2);
      break;
  }
}
