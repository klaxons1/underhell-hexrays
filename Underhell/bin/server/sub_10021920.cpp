int __thiscall sub_10021920(_DWORD *this, int a2, char a3, int a4, int a5, char a6, int a7, int a8)
{
  int v10; // esi
  int *v11; // ebx
  int v12; // edx
  double v13; // st7
  int v14[3]; // [esp+18h] [ebp-18h] BYREF
  int v15[2]; // [esp+24h] [ebp-Ch] BYREF
  float v16; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    v10 = sub_100E3960(a2, &a3, &a6, this);
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, v10) )
      {
        v11 = *(int **)(v10 + 424);
        if ( v11 )
        {
          sub_1001F010((float *)v15, -64.0, 64.0);
          sub_1001F010((float *)v14, -300.0, 300.0);
          v12 = *v11;
          v16 = 0.0;
          (*(void (__thiscall **)(int *, int *, int *))(v12 + 208))(v11, v15, v14);
          return v10;
        }
        else
        {
          if ( (this[63] & 0x1000) != 0 )
            sub_100DAFD0(this);
          sub_100EA150(this + 119);
          v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.0,
                  100.0);
          *(float *)v15 = 0.0;
          v16 = 0.0;
          *(float *)&v15[1] = v13;
          sub_100EA200(v15);
          return v10;
        }
      }
      else
      {
        sub_1025FAC0(v10);
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
