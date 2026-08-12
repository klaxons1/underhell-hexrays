char *__thiscall sub_10053A00(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  char *result; // eax
  _DWORD *v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  _DWORD *v15; // eax
  void (__thiscall *v16)(int); // eax
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  _DWORD *v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax

  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  v2 = *(_DWORD *)(this + 20);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1] )
  {
    if ( -1.0 == *(float *)(this + 104) )
    {
      v11 = *(_DWORD **)(this + 4);
      if ( v11 )
      {
        if ( *(_DWORD *)(dword_10692124 + 48) )
          sub_10029660(v11, (int)"Follow: No mark set\n");
      }
    }
    if ( *(_BYTE *)(this + 148) && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 144) > -0.001 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v12 = sub_1007DB30(100002);
      sub_10023CB0(*(char **)(this + 4), v12);
      *(_BYTE *)(this + 148) = 0;
    }
    v13 = *(_DWORD *)(this + 20);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    if ( sub_10050E90((float *)(this + 92), v14) )
    {
      v15 = *(_DWORD **)(this + 4);
      if ( v15 && *(_DWORD *)(dword_10692124 + 48) )
        sub_10029660(v15, (int)"Follow: Target moved\n");
      v16 = *(void (__thiscall **)(int))(*(_DWORD *)this + 52);
      *(float *)(this + 104) = -1.0;
      v16(this);
      v17 = sub_1007DB30(100000);
      sub_10023CB0(*(char **)(this + 4), v17);
      *(_BYTE *)(this + 108) = 0;
    }
    if ( -1.0 == *(float *)(this + 104) )
      *(_BYTE *)(this + 108) = 0;
    v18 = *(_DWORD **)(this + 4);
    *(_DWORD *)(this + 188) = 0;
    if ( v18[722] == -1
      || off_1061BE18[4 * (v18[722] & 0xFFF) + 2] != v18[722] >> 12
      || !off_1061BE18[4 * (v18[722] & 0xFFF) + 1] )
    {
      if ( *(_DWORD *)(dword_1069216C + 48) )
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*v18 + 368))(v18)
          && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 168) > -0.001 )
        {
          if ( sub_1001ED60((float *)(this + 180)) )
          {
            sub_10050BA0((float *)(this + 180), -1.0);
            v19 = sub_10051220(this);
            *(_DWORD *)(this + 188) = v19;
            if ( v19 )
              sub_1004C1E0((char **)this, 100001);
          }
        }
      }
    }
    if ( 0.0 == *(float *)(this + 80) || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 80) > 2.0 )
      sub_10053910(this);
    if ( sub_10051CA0(this, 1.0) )
    {
      v20 = *(_DWORD **)(this + 4);
      *(float *)(this + 116) = 3.4028235e38;
      *(_DWORD *)(this + 112) = 0;
      if ( v20 && *(_DWORD *)(dword_10692124 + 48) )
        sub_10029660(v20, (int)"Follow: NoteSuccessfulFollow()\n");
    }
    else if ( sub_10043EC0(*(_DWORD **)(this + 4))
           && !sub_10051440((_DWORD *)this)
           && (!*(_BYTE *)(this + 148) || sub_1001ED80((float *)(this + 144))) )
    {
      switch ( *(_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4)) )
      {
        case 2:
        case 4:
        case 5:
        case 0x7A:
        case 0x7B:
          *(float *)(this + 104) = -1.0;
          if ( !sub_1004C220((_DWORD **)this, 100007) )
            sub_1004C1E0((char **)this, 100000);
          break;
        default:
          break;
      }
    }
    v21 = *(_DWORD *)(this + 20);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 320))(v22)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    {
      v23 = *(_DWORD *)(this + 20);
      if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v23 >> 12 )
        v24 = 0;
      else
        v24 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
      if ( (unsigned __int8)sub_102EBE50(*(_DWORD *)(this + 4), v24) )
      {
        sub_1004C1E0((char **)this, 100006);
        sub_1004C260((char **)this, 100007);
      }
      else
      {
        sub_1004C1E0((char **)this, 100007);
        sub_1004C260((char **)this, 100006);
      }
    }
    v25 = *(_DWORD *)(this + 20);
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 320))(v26)
      && sub_10023D10(*(_DWORD **)(this + 4), 32)
      || ((v27 = *(_DWORD *)(this + 20), v27 == -1)
       || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v27 >> 12
        ? (v28 = 0)
        : (v28 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1]),
          (*(unsigned __int8 (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 4) + 548))(
            *(_DWORD *)(this + 4),
            v28,
            16449,
            0)) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v29 = sub_1007DB30(100003);
      sub_10023CB0(*(char **)(this + 4), v29);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v30 = sub_1007DB30(100004);
      sub_10023E00(*(char **)(this + 4), v30);
      *(float *)(this + 88) = *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v31 = sub_1007DB30(100003);
      sub_10023E00(*(char **)(this + 4), v31);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v32 = sub_1007DB30(100004);
      sub_10023CB0(*(char **)(this + 4), v32);
    }
    if ( !sub_10052150((_DWORD *)this)
      || 0.0 == *(float *)(this + 88)
      || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 88) <= 5.0 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v33 = sub_1007DB30(100005);
      return sub_10023E00(*(char **)(this + 4), v33);
    }
    else
    {
      return sub_1004C1E0((char **)this, 100005);
    }
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v3 = sub_1007DB30(100006);
    sub_10023E00(*(char **)(this + 4), v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v4 = sub_1007DB30(100007);
    sub_10023E00(*(char **)(this + 4), v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v5 = sub_1007DB30(100003);
    sub_10023E00(*(char **)(this + 4), v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v6 = sub_1007DB30(100004);
    sub_10023E00(*(char **)(this + 4), v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v7 = sub_1007DB30(100002);
    sub_10023E00(*(char **)(this + 4), v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v8 = sub_1007DB30(100000);
    sub_10023E00(*(char **)(this + 4), v8);
    sub_100521C0((_DWORD *)this);
    v9 = *(_DWORD *)(this + 4);
    *(float *)(this + 88) = 0.0;
    *(_DWORD *)(this + 188) = 0;
    *(_BYTE *)(this + 108) = 0;
    result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1364))(v9);
    if ( result == (char *)this )
      return (char *)sub_10044510(*(_DWORD *)(this + 4), (int)"Follow target gone");
  }
  return result;
}
