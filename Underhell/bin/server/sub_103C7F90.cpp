void __thiscall sub_103C7F90(int this, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // ebx
  _DWORD *v8; // eax
  float *v9; // edi
  float *v10; // eax
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5

  v2 = this;
  switch ( *a2 )
  {
    case 0x4A:
      if ( sub_10023D10((_DWORD *)this, 13)
        || !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2)
        || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2),
            !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3)) )
      {
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(v2 + 5848) )
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 1480))(v2);
          if ( v4 )
          {
            sub_100285C0((_DWORD *)v2, v4, 1);
            sub_1002B660(v2, 3);
          }
        }
      }
      this = v2;
      goto LABEL_9;
    case 0x9B:
    case 0x9C:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
        goto LABEL_12;
      return;
    case 0x9D:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        *(_BYTE *)(v2 + 5760) = 0;
        sub_10027CD0((_DWORD *)v2, 0);
      }
      return;
    case 0x9F:
      if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v5 = (_DWORD *)sub_10261B20(), (v6 = v5) != 0) )
      {
        v7 = *(_DWORD *)(v2 + 2604);
        v8 = sub_10019640(v5);
        sub_10078720(v7, (int)v8, -2.0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 2076))(v2);
        if ( sub_10078F10(*(_DWORD *)(v2 + 2604)) < 10.0 )
        {
          v9 = (float *)sub_10019640(v6);
          v10 = (float *)sub_10019640((_DWORD *)v2);
          v11 = *v10 - *v9;
          v12 = v11 * v11;
          v13 = v10[1] - v9[1];
          v14 = v10[2] - v9[2];
          if ( v14 * v14 + v13 * v13 + v12 < 147456.0 )
LABEL_12:
            sub_10027CD0((_DWORD *)v2, 0);
        }
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1312))(v2, 21);
      }
      return;
    case 0xA1:
      if ( *(_BYTE *)(this + 896) )
        sub_10027CD0((_DWORD *)this, 0);
      return;
    default:
LABEL_9:
      sub_103955D0(this, a2);
      return;
  }
}
