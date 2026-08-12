void __thiscall sub_10135D00(float *this)
{
  char *v2; // edi
  double v3; // st7
  int (__thiscall *v4)(char *); // eax
  double v5; // st7
  double v6; // st5
  double v7; // rt0
  double v8; // st5
  double v9; // st7
  float *v10; // eax
  double v11; // st5
  float *v12; // eax
  float v13; // [esp+8h] [ebp-10h] BYREF
  float v14; // [esp+Ch] [ebp-Ch]
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+14h] [ebp-4h]

  v2 = (char *)sub_100422D0();
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C)
      || !sub_100F7AF0(v2)
      || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C) )
    {
      this[32] = 0.0;
      this[30] = 0.0;
    }
    else if ( *((_BYTE *)this + 124) )
    {
      if ( fabs(((double (__thiscall *)(int *))*(_DWORD *)(*off_103ED0D8 + 124))(off_103ED0D8)) >= *(float *)(dword_10432954 + 44) )
        v3 = *((float *)off_103DC81C + 4) + this[32];
      else
        v3 = 0.0;
      this[32] = v3;
      if ( *(float *)(dword_10439CA4 + 44) < (double)this[32] )
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 32))(this);
    }
    else
    {
      v4 = *(int (__thiscall **)(char *))(*(_DWORD *)v2 + 40);
      v16 = *((float *)off_103ED0FC + 8);
      v5 = v16 - *(float *)v4(v2);
      if ( 0.0 == v5 )
      {
        this[30] = 0.0;
      }
      else
      {
        v6 = *((float *)off_103DC81C + 4) * this[30];
        v16 = v6;
        this[30] = *(float *)(dword_10439CEC + 44) * *((float *)off_103DC81C + 4) + this[30];
        v7 = v6;
        v8 = v5;
        v9 = v7;
        if ( v8 <= 0.0 )
        {
          if ( v8 < 0.0 )
          {
            v11 = -v8;
            if ( v11 < v9 )
            {
              this[30] = 0.0;
              v16 = v11;
            }
            v12 = (float *)sub_10034AE0(v2);
            v13 = *v12 - v16;
            v14 = v12[1];
            v15 = v12[2];
            sub_10034B10((float *)v2, &v13);
          }
        }
        else
        {
          if ( v8 < v9 )
          {
            this[30] = 0.0;
            v16 = v8;
          }
          v10 = (float *)sub_10034AE0(v2);
          v13 = *v10 + v16;
          v14 = v10[1];
          v15 = v10[2];
          sub_10034B10((float *)v2, &v13);
        }
      }
    }
  }
}
