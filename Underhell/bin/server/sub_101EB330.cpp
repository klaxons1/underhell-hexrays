void __thiscall sub_101EB330(float *this)
{
  _DWORD *v2; // eax
  unsigned int *v3; // edi
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edi
  char *v11; // eax
  char *v12; // eax
  char *v13; // [esp+4h] [ebp-18h]
  float v14; // [esp+18h] [ebp-4h]

  if ( !byte_106B4F38 && !*((_DWORD *)this + 1005) )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1568))(this) )
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 1568))(this);
      sub_1016BBE0(v2);
    }
    sub_100F5F50((int)this);
    sub_101E43B0((int)this);
    if ( dword_106B3CDC && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 188))(dword_106B3CDC) )
    {
      v3 = (unsigned int *)(this + 563);
      v4 = (_DWORD)this[563] & 0xFFFFFFFD;
    }
    else
    {
      v3 = (unsigned int *)(this + 563);
      v4 = *((_DWORD *)this + 563) | 2;
    }
    if ( *v3 != v4 )
    {
      (*(void (__thiscall **)(unsigned int *, unsigned int *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v4;
    }
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1248))(this);
    sub_101E2300(this);
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1488))(this);
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1332))(this) > 2 )
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1360))(this);
    if ( *((char *)this + 224) < 1 )
    {
      sub_101E8C50((int)this);
      if ( ((_BYTE)this[823] & 2) != 0 )
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1184))(this);
      if ( ((_BYTE)this[823] & 4) != 0 || ((_BYTE)this[64] & 2) != 0 || ((_BYTE)this[854] & 2) != 0 )
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1188))(this);
      if ( ((_BYTE)this[64] & 1) == 0 )
      {
        if ( ((_DWORD)this[63] & 0x1000) != 0 )
          sub_100DAFD0((int)this);
        v14 = -this[121];
        if ( *((_DWORD *)this + 573) != LODWORD(v14) )
        {
          (**((void (__thiscall ***)(_DWORD *, _DWORD *))this + 548))((_DWORD *)this + 548, (_DWORD *)this + 573);
          this[573] = v14;
        }
      }
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v5 = sub_1019E380(dword_106B8370, this + 145, 120.0);
      if ( v5 )
      {
        v6 = *((_DWORD *)this + 1101);
        if ( v5 != v6 )
        {
          if ( v6 )
          {
            v7 = sub_100D8840(this) % 2;
            --*(_BYTE *)(v7 + v8 + 489);
          }
          v9 = sub_100D8840(this) % 2;
          ++*(_BYTE *)(v9 + v5 + 489);
          *((_DWORD *)this + 1101) = v5;
          v10 = *(_DWORD *)(v5 + 44);
          if ( v10 )
          {
            v11 = (char *)sub_1019D450((_DWORD *)dword_106B8370, v10);
            if ( v11 )
            {
              if ( *v11 )
              {
                v13 = v11;
                v12 = (char *)sub_101E9540((_DWORD *)this + 1102);
                sub_104299C0(v12, v13, 0x12u);
              }
            }
          }
        }
      }
    }
  }
}
