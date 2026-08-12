void __thiscall sub_1038FDC0(int *this, int a2)
{
  char v3; // al
  int *v4; // ecx
  bool v5; // al
  void (__thiscall *v6)(int *, int *); // edx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  int v16; // eax
  int v17; // edi
  int v18; // eax
  double v19; // st6
  long double v20; // st7
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // edi
  float *v26; // ebx
  double v27; // st7
  float *v28; // ebx
  double v29; // st7
  int *v30; // eax
  _DWORD *v31; // ebx
  float *v32; // eax
  float v33; // [esp+4h] [ebp-78h]
  float v34; // [esp+10h] [ebp-6Ch]
  float v35[12]; // [esp+20h] [ebp-5Ch] BYREF
  float v36[3]; // [esp+50h] [ebp-2Ch] BYREF
  _BYTE v37[12]; // [esp+5Ch] [ebp-20h] BYREF
  int v38[3]; // [esp+68h] [ebp-14h] BYREF
  int v39; // [esp+74h] [ebp-8h] BYREF
  float v40; // [esp+78h] [ebp-4h]
  float v41; // [esp+84h] [ebp+8h]

  switch ( *(_DWORD *)a2 )
  {
    case 0x98:
      sub_10043050(this, 0, 0);
      sub_10078720(this[651], (int)(this + 1052), -2.0);
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
      {
        v5 = sub_100B8D10((float *)this + 690);
        v4 = this;
        if ( v5 )
          goto LABEL_5;
        (*(void (__thiscall **)(int *))(*this + 1896))(this);
        sub_10043E90(this, 17);
      }
      break;
    case 0xA0:
      v6 = *(void (__thiscall **)(int *, int *))(*this + 1264);
      v40 = 0.0;
      v39 = 78;
      v6(this, &v39);
      break;
    case 0xA3:
      v24 = this[538];
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          sub_10042450(v35, (float *)this + 719, 11, -2.0, 0, dword_106767EC);
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], v35, 0);
        }
      }
      else
      {
        v25 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1460))(this, 1048351);
        if ( v25 )
        {
          v41 = 2000.0;
          v40 = 0.0;
          if ( sub_100CF460(this) )
          {
            v26 = (float *)(sub_100CF460(this) + 1220);
            if ( *(float *)(sub_100CF460(this) + 1224) >= (double)*v26 )
              v27 = *(float *)(sub_100CF460(this) + 1224);
            else
              v27 = *(float *)(sub_100CF460(this) + 1220);
            v41 = v27;
            v28 = (float *)(sub_100CF460(this) + 1212);
            if ( *(float *)(sub_100CF460(this) + 1216) <= (double)*v28 )
              v29 = *(float *)(sub_100CF460(this) + 1216);
            else
              v29 = *(float *)(sub_100CF460(this) + 1212);
            v40 = v29;
          }
          if ( *((float *)this + 724) < (double)v41 )
            v41 = *((float *)this + 724);
          v30 = sub_1023CC80(v25);
          v31 = (_DWORD *)this[704];
          v38[0] = *v30;
          v38[1] = v30[1];
          v33 = v40;
          v38[2] = v30[2];
          v32 = (float *)sub_1023CC80(v25);
          if ( sub_100B3EF0(v31, v32, (int)v38, v33, v41, 1.0, (float *)this + 719) )
            ++this[538];
          else
            (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 10);
        }
        else
        {
          (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 17);
        }
      }
      break;
    case 0xA5:
    case 0xA6:
      if ( !(*(int (__thiscall **)(int *))(*this + 368))(this)
        || *((float *)this + 1077) <= (double)*(float *)(dword_106B31C8 + 12) )
      {
        goto LABEL_4;
      }
      if ( *(_DWORD *)a2 != 166 )
        goto LABEL_43;
      v7 = sub_10389710((_DWORD **)this);
      v8 = sub_100B16F0((int *)this[699], 1);
      v4 = this;
      if ( v7 == v8 )
        goto LABEL_5;
      v9 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
      v10 = (float *)sub_10019640(v9);
      v11 = *((float *)this + 717) - v10[1];
      v12 = v11 * v11;
      v13 = *((float *)this + 716) - *v10;
      v14 = v12;
      v15 = *((float *)this + 718) - v10[2];
      if ( v13 * v13 + v14 + v15 * v15 > 10000.0 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 1644))(this, 2);
        sub_1038FD20(this);
      }
      else
      {
LABEL_43:
        if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
        {
          if ( sub_10021530(this) )
          {
            v16 = (*(int (__thiscall **)(int *))(*this + 368))(this);
            v17 = *this;
            v18 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v16 + 504))(v16, v37);
            v19 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v17 + 1696))(this, v18);
            v20 = *(float *)(this[651] + 20);
            v34 = v19;
            sub_10019610(*(float *)(this[651] + 20), v34);
            if ( fabs(v20) >= 45.0 )
            {
              v21 = (*(int (__thiscall **)(int *))(*this + 368))(this);
              v22 = this[651];
              v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 504))(v21);
              sub_10078690(v22, v23, COERCE_FLOAT(v36), 0.0);
              (*(void (__thiscall **)(int *))(*this + 2076))(this);
            }
          }
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this[651] + 76))(this[651], -1);
      }
      break;
    case 0xA8:
      sub_10043050(this, 0, 0);
      v3 = (*(int (__thiscall **)(int *))(*this + 732))(this);
      goto LABEL_3;
    case 0xA9:
      v3 = (*(int (__thiscall **)(int *, int))(*this + 1604))(this, (int)*(float *)(a2 + 4));
LABEL_3:
      if ( v3 )
      {
LABEL_4:
        v4 = this;
LABEL_5:
        sub_10027CD0(v4, 0);
      }
      break;
    default:
      sub_1001E820(this, (_DWORD *)a2);
      break;
  }
}
