void __thiscall sub_101E2300(float *this)
{
  int i; // ebx
  int v3; // edi
  char v4; // al
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  char v13; // cl
  float v14; // [esp+8h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-4h]
  int v17; // [esp+20h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 64))(
         dword_106B3CDC,
         *((_DWORD *)this + 866))
    && fabs(*(float *)(dword_106B31C8 + 12) - this[879]) >= 2.0 )
  {
    this[879] = *(float *)(dword_106B31C8 + 12);
    for ( i = 0; i < 8; ++i )
    {
      v3 = 0x8000 << i;
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 64))(dword_106B3CDC, 0x8000 << i)
        && (v3 & (_DWORD)this[866]) != 0 )
      {
        switch ( i )
        {
          case 0:
          case 1:
          case 3:
          case 5:
          case 6:
          case 7:
            v4 = 2;
            break;
          case 2:
            v9 = *((_DWORD *)this + 882);
            v10 = *((_DWORD *)this + 883);
            if ( v9 > v10 )
            {
              v11 = v9 - v10;
              if ( v11 >= 10 )
              {
                v12 = 10;
                v17 = 10;
              }
              else
              {
                v12 = v11;
                v17 = v11;
              }
              v15 = (float)v17;
              (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 260))(this, LODWORD(v15), 0);
              *((_DWORD *)this + 883) += v12;
              v3 = 0x8000 << i;
            }
            v4 = 9;
            break;
          case 4:
            v5 = *((_DWORD *)this + 880);
            v6 = *((_DWORD *)this + 881);
            if ( v5 > v6 )
            {
              v7 = v5 - v6;
              if ( v7 >= 10 )
              {
                v8 = 10;
                v16 = 10;
              }
              else
              {
                v8 = v7;
                v16 = v7;
              }
              v14 = (float)v16;
              (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 260))(this, LODWORD(v14), 0);
              *((_DWORD *)this + 881) += v8;
              v3 = 0x8000 << i;
            }
            v4 = 4;
            break;
          default:
            v4 = 0;
            break;
        }
        v13 = *((_BYTE *)this + i + 3536);
        if ( v13 )
        {
          *((_BYTE *)this + i + 3536) = v13 - 1;
          if ( v13 == 1 )
          {
            *((_BYTE *)this + i + 3536) = 0;
            *((_DWORD *)this + 866) &= ~v3;
          }
        }
        else
        {
          *((_BYTE *)this + i + 3536) = v4;
        }
      }
    }
  }
}
