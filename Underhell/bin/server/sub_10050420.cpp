void __thiscall sub_10050420(int this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  _DWORD v9[12]; // [esp+4h] [ebp-30h] BYREF

  if ( *a2 == 100000 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2152);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( *(_DWORD *)(this + 52) == -1
          || off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2] != *(_DWORD *)(this + 52) >> 12 )
        {
          v4 = 0;
        }
        else
        {
          v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 1];
        }
        if ( (v4[63] & 0x800) != 0 )
          sub_100DAE60(v4);
        v9[0] = 4;
        v9[1] = v4[145];
        v9[2] = v4[146];
        v5 = v4[147];
        *(float *)&v9[8] = -1.0;
        memset(&v9[4], 255, 16);
        *(float *)&v9[9] = -1.0;
        v6 = *(_DWORD *)(this + 4);
        v9[10] = 0;
        v9[11] = 0;
        v9[3] = v5;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v6 + 2588) + 20))(
               *(_DWORD *)(v6 + 2588),
               v9,
               0) )
        {
          v7 = sub_1026A890(this + 52);
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(v7);
          sub_1007DF50(v7 + 704);
        }
        else
        {
          *(_DWORD *)(this + 52) = -1;
        }
      }
    }
    else
    {
      sub_100502D0(this);
      v8 = sub_1004FD00((_DWORD *)this);
      if ( v8 )
      {
        sub_10043F10((_DWORD *)(this + 52), v8);
        ++*(_DWORD *)(*(_DWORD *)(this + 4) + 2152);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
          *(_DWORD *)(this + 4),
          "Fear: Couldn't find hint node\n");
        *(float *)(this + 28) = *(float *)(dword_106B31C8 + 12) + 3.0;
      }
    }
  }
  else if ( *a2 == 100001 )
  {
    if ( sub_10023D10(*(_DWORD **)(this + 4), 10) )
    {
      *(float *)(this + 20) = *(float *)(dword_106B31C8 + 12) + 5.0;
    }
    else if ( *(float *)(this + 20) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
  }
  else
  {
    sub_1004B450((_BYTE *)this, (int)a2);
  }
}
