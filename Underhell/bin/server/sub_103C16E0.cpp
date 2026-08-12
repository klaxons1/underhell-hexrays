char __thiscall sub_103C16E0(int this)
{
  char result; // al
  double v3; // st7
  float v4; // ecx
  float v5; // edx
  void (__thiscall *v6)(int, int); // edx
  float v7; // [esp+8h] [ebp-60h]
  float v8[3]; // [esp+14h] [ebp-54h] BYREF
  int v9; // [esp+20h] [ebp-48h] BYREF
  float v10; // [esp+24h] [ebp-44h]
  float v11; // [esp+28h] [ebp-40h]
  int v12; // [esp+2Ch] [ebp-3Ch] BYREF
  float v13; // [esp+30h] [ebp-38h]
  float v14; // [esp+34h] [ebp-34h]
  float v15[3]; // [esp+38h] [ebp-30h] BYREF
  float v16; // [esp+44h] [ebp-24h]
  float v17; // [esp+48h] [ebp-20h]
  float v18; // [esp+4Ch] [ebp-1Ch]
  int v19[3]; // [esp+50h] [ebp-18h] BYREF
  int v20[3]; // [esp+5Ch] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 2260))(this, 3);
  if ( !result )
  {
    v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2256))(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      if ( *(float *)(this + 3748) >= (double)*(float *)(dword_106B31C8 + 12) )
      {
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 504))(this, v19);
        v4 = *(float *)(this + 3828);
        v5 = *(float *)(this + 3832);
        v20[0] = *(_DWORD *)(this + 3824);
        *(float *)&v20[1] = v4;
        *(float *)&v20[2] = v5;
        v16 = *(float *)v20 - *(float *)v19;
        v17 = v4 - *(float *)&v19[1];
        v18 = v5 - *(float *)&v19[2];
        v15[2] = v18;
        v15[0] = v16;
        v15[1] = v17;
        off_10689714();
        sub_10422540(v15, v8);
        if ( *(_DWORD *)(dword_106EBC9C + 48) )
        {
          *(float *)&v12 = 2.0;
          v13 = 2.0;
          v14 = 2.0;
          *(float *)&v9 = -2.0;
          v10 = -2.0;
          v11 = -2.0;
          sub_1011C000((float *)v19, (float *)&v9, (float *)&v12, 0, 255, 0, 0, 0.050000001);
          *(float *)&v9 = 2.0;
          v10 = 2.0;
          v11 = 2.0;
          *(float *)&v12 = -2.0;
          v13 = -2.0;
          v14 = -2.0;
          sub_1011C000((float *)v20, (float *)&v12, (float *)&v9, 0, 255, 0, 0, 0.050000001);
          sub_1011BC50((float *)v19, (float *)v20, 0, 255, 0, 0, 0.050000001);
        }
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3744)
          && sub_1001F080((float *)(this + 3824), &flt_10689730) )
        {
          sub_103BFAD0((_DWORD *)this);
          sub_10421CE0(this + 3676, 0, &v12);
          sub_10421CE0(this + 3676, 3, &v9);
          if ( v13 * v17 + v16 * *(float *)&v12 + v14 * v18 >= 0.9848 )
          {
            if ( (*(_DWORD *)(this + 248) & 0x100) != 0 )
            {
              sub_103BF7A0(this);
            }
            else
            {
              v6 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
              *(_DWORD *)(this + 2372) = 0;
              v6(this, dword_106EBC68);
              (*(void (__thiscall **)(int, int *, int *, _DWORD))(*(_DWORD *)this + 2264))(this, &v9, &v12, 0);
            }
          }
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBC70);
        }
        *(float *)(this + 3788) = v8[1];
        *(float *)(this + 3784) = v8[0];
        return sub_103C1260((int *)this);
      }
      else
      {
        sub_10021880((void *)this);
        sub_100285C0((_DWORD *)this, 0, 1);
        result = sub_100EC3F0((_DWORD *)this, (int)sub_103BFBE0, 0.0, 0);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          result = sub_100DAE60(this);
        *(float *)(this + 3784) = *(float *)(this + 704);
        *(float *)(this + 3788) = *(float *)(this + 708);
        *(float *)(this + 3792) = *(float *)(this + 712);
        if ( *(char *)(this + 248) >= 0 )
        {
          v3 = *(float *)(dword_106B31C8 + 12) + 5.0;
        }
        else
        {
          result = dword_106B31C8;
          v3 = *(float *)(dword_106B31C8 + 12) + 2.0;
        }
        *(float *)(this + 3748) = v3;
      }
    }
    else
    {
      return sub_100EC3F0((_DWORD *)this, (int)sub_103BFBB0, 0.0, 0);
    }
  }
  return result;
}
