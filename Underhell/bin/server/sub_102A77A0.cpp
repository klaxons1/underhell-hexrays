void __thiscall sub_102A77A0(void *this)
{
  double v2; // st7
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // ecx
  double v7; // st7
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  float *v12; // eax
  _DWORD v13[20]; // [esp+2Ch] [ebp-5Ch] BYREF
  int v14; // [esp+7Ch] [ebp-Ch] BYREF
  float v15; // [esp+80h] [ebp-8h]
  float v16; // [esp+84h] [ebp-4h]

  sub_102A0B20((int)this);
  if ( *((_DWORD *)this + 4) == 2 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
    v2 = *((float *)this + 9) + *((float *)this + 8);
    if ( v2 >= -350.0 )
    {
      if ( v2 < -150.0 )
        sub_10039F40(*((int **)this + 1), dword_106DB7B4);
    }
    else
    {
      v3 = *((_DWORD *)this + 17);
      if ( v3 != -1 )
      {
        v4 = &off_1061BE18[4 * (*((_DWORD *)this + 17) & 0xFFF) + 1];
        v5 = v3 >> 12;
        if ( off_1061BE18[4 * (*((_DWORD *)this + 17) & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            if ( off_1061BE18[4 * (*((_DWORD *)this + 17) & 0xFFF) + 2] == v5 )
              v6 = *v4;
            else
              v6 = 0;
            (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 540))(v6, &v14, 0);
            off_10689714();
            v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   50000.0,
                   60000.0);
            v8 = *((_DWORD *)this + 17);
            v9 = *((_DWORD *)this + 1);
            *(float *)&v14 = *(float *)&v14 * v7;
            v15 = v15 * v7;
            v16 = v7 * v16;
            if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
            if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
              v11 = 0;
            else
              v11 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
            v12 = (float *)(*(int (**)(void))(*(_DWORD *)v9 + 576))();
            sub_102487B0((int)v13, v11, v10, (float *)&v14, v12, 200.0, 17, 0, 0);
            sub_100D9E70(*((int **)this + 1), (int)this, v13);
          }
        }
      }
    }
  }
}
