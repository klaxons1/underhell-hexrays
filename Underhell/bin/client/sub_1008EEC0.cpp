void __thiscall sub_1008EEC0(char *this, float *a2, float *a3)
{
  float *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  char v11; // [esp+4h] [ebp-4h]

  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) != 5 || this[40] == 4 )
  {
    switch ( this[40] )
    {
      case 0:
        v11 = 0;
        if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) == 6 )
        {
          v5 = *((_DWORD *)this + 1);
          if ( *(_BYTE *)(v5 + 316) == 6 )
          {
            v6 = *(_DWORD *)(v5 + 184);
            if ( !v6 || (v11 = 1, !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6)) )
              v11 = 0;
          }
        }
        sub_1008EE90(this, v11, a2, a3);
        break;
      case 1:
        v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this);
        sub_1008EE90(this, v7 == 6, a2, a3);
        break;
      case 2:
        v8 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 164))(*((_DWORD *)this + 1));
        if ( v8 )
          sub_10029FB0(v8, a2, a3);
        break;
      case 3:
        v9 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
        *a2 = *((float *)this + 11) + *v9;
        a2[1] = *((float *)this + 12) + v9[1];
        a2[2] = *((float *)this + 13) + v9[2];
        v10 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
        *a3 = *v10 + *((float *)this + 14);
        a3[1] = v10[1] + *((float *)this + 15);
        a3[2] = v10[2] + *((float *)this + 16);
        break;
      case 4:
        (*(void (__thiscall **)(_DWORD, float *, float *))(**((_DWORD **)this + 1) + 272))(
          *((_DWORD *)this + 1),
          a2,
          a3);
        break;
      case 5:
        sub_1008EDD0((int)this, a2, a3);
        break;
      case 6:
        (*(void (__thiscall **)(char *, float *, float *))(*(_DWORD *)this + 12))(this, a2, a3);
        break;
      default:
        return;
    }
  }
  else
  {
    v4 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
    *a2 = *v4;
    a2[1] = v4[1];
    a2[2] = v4[2];
    *a3 = *a2;
    a3[1] = a2[1];
    a3[2] = a2[2];
  }
}
