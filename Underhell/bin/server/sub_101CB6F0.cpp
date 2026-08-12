char *__thiscall sub_101CB6F0(int this, int a2, float a3, int a4, int a5, float a6, int a7, int a8, int a9, int a10)
{
  char *v12; // esi
  int *v13; // ebx
  int v14; // edx
  double v15; // st7
  int v16[3]; // [esp+18h] [ebp-18h] BYREF
  int v17[2]; // [esp+24h] [ebp-Ch] BYREF
  float v18; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    v12 = sub_100E3960(a2, &a3, &a6, this);
    if ( v12 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, v12) )
      {
        v13 = (int *)*((_DWORD *)v12 + 106);
        if ( v13 )
        {
          sub_1001F010((float *)v17, -64.0, 64.0);
          sub_1001F010((float *)v16, -300.0, 300.0);
          v14 = *v13;
          v18 = 0.0;
          (*(void (__thiscall **)(int *, int *, int *))(v14 + 208))(v13, v17, v16);
        }
        else
        {
          if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
            sub_100DAFD0(this);
          sub_100EA150((int)v12, (float *)(this + 476));
          v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.0,
                  100.0);
          *(float *)v17 = 0.0;
          v18 = 0.0;
          *(float *)&v17[1] = v15;
          sub_100EA200((int)v12, (float *)v17);
        }
        sub_100C1600((int)v12, a9, a10);
        return v12;
      }
      else
      {
        sub_1025FAC0(v12);
        return 0;
      }
    }
    else
    {
      DevMsg("DropItem() - Didn't create!\n");
      return 0;
    }
  }
  else
  {
    DevMsg("DropItem() - No item name!\n");
    return 0;
  }
}
