void __thiscall sub_1038B180(float *this)
{
  int v2; // esi
  int i; // edi
  int v4; // ecx
  float *v5; // esi
  int v6; // edi
  int v7; // eax
  float *v8; // eax
  float *v9; // eax
  _DWORD *v10; // esi
  float *v11; // [esp+4h] [ebp-1Ch]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
LABEL_2:
    if ( *((_BYTE *)this + 2680) || *((_DWORD *)this + 581) == 4 || (*((_BYTE *)this + 251) & 1) == 0 )
    {
      *((_BYTE *)this + 4342) = 1;
      v2 = sub_1002A680(&dword_10690DF8);
      v14 = v2;
      v12 = sub_1016BFB0(&dword_10690DF8);
      for ( i = 0; ; ++i )
      {
        v13 = i;
        if ( i >= v12 )
          break;
        if ( *(float **)(v2 + 4 * i) != this
          && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 4 * i) + 220))(*(_DWORD *)(v2 + 4 * i)) == 14 )
        {
          v4 = *(_DWORD *)(v2 + 4 * i);
          if ( *(char **)(v4 + 92) == "npc_metropolice" || sub_100D6240((_DWORD *)v4, "npc_metropolice") )
          {
            v5 = *(float **)(v2 + 4 * i);
            if ( (*((_BYTE *)v5 + 251) & 1) != 0
              && (*(unsigned __int8 (__thiscall **)(float *, float *, int, _DWORD))(*(_DWORD *)this + 548))(
                   this,
                   v5,
                   16449,
                   0) )
            {
              v6 = *(_DWORD *)v5;
              v7 = sub_1025FB50(1);
              if ( (*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(v6 + 548))(v5, v7, 16449, 0) )
              {
                v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 576))(v5);
                v8 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
                if ( sub_101631D0(v8, v11) < 512.0 )
                {
                  this = v5;
                  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
                    goto LABEL_2;
                  return;
                }
              }
              i = v13;
            }
            v2 = v14;
          }
        }
      }
    }
    else
    {
      if ( sub_10018CD0(this + 1087, &flt_106F1CA8) )
      {
        v9 = (float *)sub_10019640(this);
        this[1087] = *v9;
        this[1088] = v9[1];
        this[1089] = v9[2];
        this[1090] = *((float *)sub_1001F410(this) + 1);
      }
      this[1086] = RandomFloat(3.0, 7.0) + *(float *)(dword_106B31C8 + 12);
      v10 = (_DWORD *)sub_1025FB50(1);
      sub_100285C0(this, v10, 1);
      sub_1002B660((int)this, 3);
      if ( (v10[63] & 0x800) != 0 )
        sub_100DAE60((int)v10);
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 1876))(this, v10);
    }
  }
}
