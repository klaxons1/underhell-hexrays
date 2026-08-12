void __thiscall sub_103CF560(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  float *v6; // ebx
  float *v7; // eax
  double v8; // st7
  int v9; // edx
  int (__thiscall *v10)(int *); // eax
  float *v11; // edi
  _DWORD *v12; // eax
  float *v13; // eax
  double v14; // st7
  double (__thiscall *v15)(int, _DWORD, _DWORD); // eax
  double v16; // st7
  float v17; // [esp+28h] [ebp-14h] BYREF
  float v18; // [esp+2Ch] [ebp-10h]
  float v19; // [esp+30h] [ebp-Ch]
  float v20; // [esp+34h] [ebp-8h]
  float v21; // [esp+38h] [ebp-4h]

  if ( this[964] > 0
    && *(float *)(dword_106B31C8 + 12) >= (double)flt_106EC8A0
    && *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 963)
    && *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 962)
    && !sub_103CF380(this) )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v2 = *this;
      v3 = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 368))(this, 16449, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v2 + 548))(this, v3) )
      {
        if ( !sub_103CF050((float *)this)
          && (this[64] & 0x8000000) == 0
          && !sub_1002A570(this)
          && !sub_10295590((_BYTE *)this + 3652)
          && *(int *)(dword_106B31C8 + 20) <= 1 )
        {
          v4 = sub_10261B20();
          v5 = (_DWORD *)v4;
          if ( v4 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 548))(v4, this, 16449, 0) )
            {
              v6 = (float *)sub_10019640(this);
              v7 = (float *)sub_10019640(v5);
              v17 = *v7 - *v6;
              v18 = v7[1] - v6[1];
              v8 = v7[2] - v6[2];
              v19 = v8;
              sub_100D7A40(&v17);
              v9 = *this;
              v20 = v8;
              v10 = *(int (__thiscall **)(int *))(v9 + 368);
              v21 = v8;
              if ( v5 == (_DWORD *)v10(this) )
              {
                v14 = v21;
              }
              else
              {
                v11 = (float *)sub_10019640(this);
                v12 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
                v13 = (float *)sub_10019640(v12);
                v17 = *v13 - *v11;
                v18 = v13[1] - v11[1];
                v14 = v13[2] - v11[2];
                v19 = v14;
                sub_100D7A40(&v17);
              }
              if ( v20 <= 256.0 && v14 <= 256.0 )
              {
                *((float *)this + 963) = *(float *)(dword_106B31C8 + 12) + 0.5;
                v15 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
                v20 = 1.0 - v14 * 0.00390625;
                v16 = v15(dword_106B31E4, 0.0, 1.0);
                if ( v16 <= v20 )
                {
                  flt_106EC8A0 = *(float *)(dword_106B31C8 + 12) + 10.0;
                  sub_10023CB0((char *)this, 76);
                }
              }
            }
          }
        }
      }
    }
  }
}
