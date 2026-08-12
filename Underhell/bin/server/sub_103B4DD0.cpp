void __thiscall sub_103B4DD0(float *this, int a2, int *a3)
{
  double v4; // st7
  unsigned __int8 (__thiscall *v5)(float *, int *); // eax
  double v6; // st7
  int v7; // ebx
  float *v8; // eax
  float *v9; // eax
  float v10; // [esp+10h] [ebp-A0h]
  float v11; // [esp+20h] [ebp-90h]
  _BYTE v12[44]; // [esp+2Ch] [ebp-84h] BYREF
  float v13; // [esp+58h] [ebp-58h]
  int *v14; // [esp+78h] [ebp-38h]
  float v15[3]; // [esp+80h] [ebp-30h] BYREF
  int v16[3]; // [esp+8Ch] [ebp-24h] BYREF
  float v17[3]; // [esp+98h] [ebp-18h] BYREF
  float v18; // [esp+A4h] [ebp-Ch]
  float v19; // [esp+A8h] [ebp-8h]
  int v20; // [esp+ACh] [ebp-4h] BYREF
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  if ( !sub_10023D10(this, 75) || !sub_10023D10(this, 75) )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v4 = this[147] - 10.0;
    v5 = *(unsigned __int8 (__thiscall **)(float *, int *))(*(_DWORD *)this + 876);
    v19 = v4;
    v18 = v4 - 290.0;
    *(float *)&v20 = 3.4028235e38;
    if ( v5(this, a3) )
    {
      if ( sub_103B0680(this, a2, v18, v19, 29.0, (int)a3, (float *)&v20) )
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        *(float *)&v20 = 500.0 - (this[147] - *(float *)&v20);
        if ( *(float *)(dword_106B31C8 + 12) - this[954] > -0.001 )
        {
          if ( a3 )
          {
            v6 = sub_100BE820((int)this, dword_106EAD9C);
            if ( fabs(*(float *)&v20 - v6) < 12.0 && *(float *)&v20 < 295.7 )
            {
              v7 = *a3;
              v8 = sub_103AFA80(this, v15);
              (*(void (__thiscall **)(int *, float *, float *, int))(v7 + 520))(a3, v17, v8, 1);
              sub_100BF1B0(this, "minigun", (int)v16, 0, 0, 0);
              sub_1002A5F0((int)&savedregs, (int)this, (float *)v16, v17, 1174421507, (int)this, 0, (int)v12);
              if ( v14 == a3 || 1.0 == v13 || sub_103B35A0(this, (int)v12, v17) )
              {
                this[954] = *(float *)(dword_106B31C8 + 12) + 5.0;
              }
              else
              {
                v10 = v18 + 95.7;
                if ( !sub_103B0680(this, a2, v10, v19, 29.0, (int)a3, (float *)&v20) )
                  return;
                v9 = (float *)sub_10019640(this);
                *(float *)&v20 = 500.0 - (v9[2] - *(float *)&v20);
              }
            }
          }
        }
        if ( !*(_DWORD *)(dword_106EB09C + 48) )
        {
          if ( fabs(490.0 - sub_100BE820((int)this, dword_106EAD9C)) >= 0.1 || fabs(200.0 - *(float *)&v20) >= 0.1 )
          {
            if ( fabs(200.0 - sub_100BE820((int)this, dword_106EAD9C)) < 0.1
              && fabs(490.0 - *(float *)&v20) < 0.1
              && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 10) <= 6 )
            {
              sub_10023CB0((char *)this, 76);
              goto LABEL_24;
            }
          }
          else if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 10) <= 6 )
          {
LABEL_23:
            sub_10023CB0((char *)this, 75);
LABEL_24:
            v11 = sub_100BE820((int)this, dword_106EAD9C);
            sub_103AEED0(this, v11);
            return;
          }
          if ( sub_1001ED60(this + 946) )
          {
            if ( sub_100BE820((int)this, dword_106EAD9C) - 200.0 > 246.5 && *(float *)&v20 - 200.0 < 43.5 )
            {
              sub_10050BE0(this + 946);
              goto LABEL_23;
            }
            if ( *(float *)&v20 - 200.0 > 246.5 && sub_100BE820((int)this, dword_106EAD9C) - 200.0 < 43.5 )
            {
              sub_10050BE0(this + 946);
              sub_10023CB0((char *)this, 76);
              goto LABEL_24;
            }
          }
        }
        sub_10023CB0((char *)this, 81);
        sub_103AEED0(this, *(float *)&v20);
        if ( *(float *)(dword_106EB0E4 + 44) > 0.1 )
          sub_103AEED0(this, *(float *)(dword_106EB0E4 + 44));
      }
    }
  }
}
