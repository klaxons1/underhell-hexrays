void __thiscall sub_103DB6F0(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  _DWORD *v5; // eax
  float *v6; // eax
  char v7; // al
  int v8; // eax
  float *v9; // eax
  int v10; // eax
  bool v11; // al
  unsigned int *v12; // ecx
  char *v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax
  float *v16; // eax
  unsigned int *v17; // ecx
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float *v22; // eax
  float v23; // [esp+8h] [ebp-24h]
  float v24; // [esp+8h] [ebp-24h]
  float v25[3]; // [esp+14h] [ebp-18h] BYREF
  float v26[3]; // [esp+20h] [ebp-Ch] BYREF
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0x4A:
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v9 = sub_103D9EE0((float *)this, v26, v8);
      if ( sub_103DB520(this, v9, 1) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10) )
            *(float *)(this + 3804) = *(float *)(dword_106B31C8 + 12);
        }
        sub_10027CD0((_DWORD *)this, 0);
      }
      return;
    case 0x4B:
      if ( !sub_1012B040((unsigned int *)(this + 3656), 0) )
      {
        v7 = sub_103DB520(this, (float *)(this + 3664), 0);
        goto LABEL_7;
      }
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "sniper: bad decoy");
      return;
    case 0x96:
      v7 = sub_103DB520(this, (float *)(this + 3676), 0);
      goto LABEL_7;
    case 0x97:
      if ( sub_10022810((float *)this) )
        sub_10027CD0((_DWORD *)this, 0);
      v24 = *(float *)(this + 3640);
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v22 = sub_103D9EE0((float *)this, v25, v21);
      sub_103DAAF0(this, (int)&savedregs, this, v22, v24);
      return;
    case 0x98:
      if ( sub_10022810((float *)this) )
        sub_10027CD0((_DWORD *)this, 0);
      sub_103DAAF0(this, (int)&savedregs, this, (float *)(this + 3664), *(float *)(a2 + 4));
      return;
    case 0x99:
      if ( sub_10022810((float *)this) )
        sub_10027CD0((_DWORD *)this, 0);
      sub_103DAAF0(this, (int)&savedregs, this, (float *)(this + 3676), *(float *)(this + 3640));
      return;
    case 0x9A:
      if ( !sub_1026A890((unsigned int *)(this + 3660)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 1);
        return;
      }
      v11 = sub_10022810((float *)this);
      v12 = (unsigned int *)(this + 3660);
      if ( v11 )
      {
        v13 = *(char **)(sub_1026A890(v12) + 212);
        if ( !v13 )
          v13 = (char *)String;
        v14 = sub_1012BF20(&dword_1069E3E0, 0, v13, 0, 0, 0, 0);
        if ( (*(_BYTE *)(sub_1026A890((unsigned int *)(this + 3660)) + 248) & 1) != 0 )
        {
          v15 = sub_1026A890((unsigned int *)(this + 3660));
          sub_103DB520(this, (float *)(v15 + 716), 0);
          sub_10027CD0((_DWORD *)this, 0);
        }
        if ( v14 || *(int *)(this + 3720) > 0 )
        {
          v16 = (float *)sub_1026A890((unsigned int *)(this + 3660));
          *(float *)(this + 3628) = v16[179];
          v17 = (unsigned int *)(this + 3660);
          *(float *)(this + 3632) = v16[180];
          *(float *)(this + 3636) = v16[181];
          if ( *(int *)(this + 3720) <= 0 )
          {
            sub_10019680(v17, (int)v14);
          }
          else
          {
            v18 = sub_1026A890(v17);
            if ( *(int *)(this + 3720) > 1 )
            {
              do
              {
                v19 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                        dword_106B31E4,
                        0,
                        *(_DWORD *)(this + 3720) - 1);
                sub_10019680((_DWORD *)(this + 3660), *(_DWORD *)(this + 4 * v19 + 3724));
              }
              while ( sub_1012B040((unsigned int *)(this + 3660), v18) );
            }
          }
          *(float *)(this + 3688) = *(float *)(this + 3628);
          *(float *)(this + 3692) = *(float *)(this + 3632);
          *(float *)(this + 3696) = *(float *)(this + 3636);
          v20 = sub_1026A890((unsigned int *)(this + 3660));
          sub_10022750((float *)this, *(float *)(v20 + 108), 0.0);
        }
        else
        {
          *(_DWORD *)(this + 3660) = -1;
          sub_103D8550((int *)this);
          sub_10027CD0((_DWORD *)this, 0);
        }
        return;
      }
      if ( (*(_DWORD *)(sub_1026A890(v12) + 248) & 4) != 0 )
        *(_BYTE *)(this + 3716) = 1;
      v4 = *(float *)(sub_1026A890((unsigned int *)(this + 3660)) + 108);
      goto LABEL_5;
    case 0x9B:
      v7 = sub_103DB520(this, (float *)(this + 3628), 1);
LABEL_7:
      if ( v7 )
        sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x9C:
      if ( sub_10022810((float *)this) )
      {
        sub_10023E00((char *)this, 79);
        sub_10027CD0((_DWORD *)this, 0);
      }
      sub_103DAAF0(this, (int)&savedregs, this, (float *)(this + 3676), 0.69999999);
      return;
    case 0x9D:
      if ( sub_10022810((float *)this) )
      {
        v3 = sub_103D8E30((void *)this);
        sub_10019680((_DWORD *)(this + 3660), v3);
        *(float *)(this + 3688) = *(float *)(this + 3628);
        *(float *)(this + 3692) = *(float *)(this + 3632);
        *(float *)(this + 3696) = *(float *)(this + 3636);
        sub_10022750((float *)this, 4.0, 0.0);
      }
      else
      {
        v4 = 4.0;
LABEL_5:
        v23 = v4;
        v5 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3660));
        v6 = (float *)sub_10019640(v5);
        sub_103DAAF0(this, (int)&savedregs, this, v6, v23);
      }
      return;
    default:
      sub_100497D0((int *)this, (_DWORD *)a2);
      return;
  }
}
