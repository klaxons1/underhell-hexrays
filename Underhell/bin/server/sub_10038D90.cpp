void __thiscall sub_10038D90(char *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // ebx
  unsigned __int8 (__thiscall *v5)(char *, int); // edx
  char v6; // al
  int v7; // edi
  unsigned int v8; // eax
  double v9; // st7
  float v10[3]; // [esp+18h] [ebp-1Ch] BYREF
  float v11[3]; // [esp+24h] [ebp-10h] BYREF
  char v12; // [esp+33h] [ebp-1h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  if ( *((_DWORD *)this + 630) != -1 )
  {
    v2 = *((_DWORD *)this + 621);
    if ( v2 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 621) & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*((_DWORD *)this + 621) & 0xFFF) + 1];
    v4 = sub_100D7680(v3);
    v5 = *(unsigned __int8 (__thiscall **)(char *, int))(*(_DWORD *)this + 1584);
    v12 = 0;
    if ( v5(this, 1) && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 1584))(v4, 1) )
    {
      v6 = v12;
    }
    else
    {
      if ( *((_DWORD *)this + 629) != 3 )
        return;
      v6 = 1;
    }
    v7 = *((_DWORD *)this + 631) + 164 * *((_DWORD *)this + 630);
    if ( v6 )
      goto LABEL_15;
    if ( sub_10030930((int)this, (int)&savedregs, v4, v7, v10, v11) )
    {
      sub_100385D0(
        this,
        v4,
        v7,
        SLOBYTE(v10[0]),
        SLODWORD(v10[1]),
        SLODWORD(v10[2]),
        SLOBYTE(v11[0]),
        SLODWORD(v11[1]),
        SLODWORD(v11[2]));
      sub_1010DD80((int)this, (int)this, 0.0);
      return;
    }
    if ( *((float *)this + 625) < (double)*(float *)(dword_106B31C8 + 12) && *((_DWORD *)this + 629) == 3 )
    {
LABEL_15:
      v8 = *((_DWORD *)this + 621);
      v9 = 0.0;
      if ( v8 != -1 && off_1061BE18[4 * (*((_DWORD *)this + 621) & 0xFFF) + 2] == v8 >> 12 )
      {
        if ( off_1061BE18[4 * (*((_DWORD *)this + 621) & 0xFFF) + 1] )
        {
          sub_1010DD80((int)this, (int)this, 0.0);
          v9 = 0.0;
        }
      }
      *((_DWORD *)this + 621) = -1;
      *((float *)this + 625) = v9;
      *((_DWORD *)this + 630) = -1;
      *((_DWORD *)this + 629) = 0;
      *(_DWORD *)(v4 + 2484) = -1;
      *(float *)(v4 + 2500) = v9;
      *(_DWORD *)(v4 + 2520) = -1;
      *(_DWORD *)(v4 + 2516) = 0;
    }
  }
}
