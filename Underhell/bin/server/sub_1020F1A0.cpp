_DWORD *__thiscall sub_1020F1A0(int *this, int *a2)
{
  float *v4; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // eax
  _DWORD *result; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  float v14; // [esp+Ch] [ebp-C4h]
  float v15; // [esp+Ch] [ebp-C4h]
  float v16; // [esp+10h] [ebp-C0h]
  float v17; // [esp+14h] [ebp-BCh]
  int v18[20]; // [esp+74h] [ebp-5Ch] BYREF
  int v19[3]; // [esp+C4h] [ebp-Ch] BYREF
  int v20; // [esp+D8h] [ebp+8h]

  if ( (this[62] & 0x10) != 0 )
  {
    v4 = (float *)(*(int (__thiscall **)(int *, int *))(*a2 + 536))(a2, v19);
    v17 = v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2];
    v5 = off_10689708(v17) * 0.01;
    *(float *)&v20 = v5;
    if ( (double)this[55] <= v5 )
    {
      if ( *((_BYTE *)this + 225) != 2 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 480))(this, (int)this + 225);
        v5 = *(float *)&v20;
        *((_BYTE *)this + 225) = 2;
      }
      v6 = *this;
      v14 = v5;
      v7 = sub_10248110((int)a2, (int)a2, v14, 1, 0);
      (*(void (__thiscall **)(int *, int))(v6 + 256))(this, v7);
      v15 = *(float *)&v20 * 0.25;
      sub_10248110((int)a2, (int)a2, v15, 4, 0);
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (a2[63] & 0x800) != 0 )
        sub_100DAE60((int)a2);
      *(float *)v19 = *((float *)a2 + 145) - *((float *)this + 145);
      *(float *)&v19[1] = *((float *)a2 + 146) - *((float *)this + 146);
      *(float *)&v19[2] = *((float *)a2 + 147) - *((float *)this + 147);
      sub_10248690((int)v18, (int)v19, (int)(this + 145), 1.0);
      sub_100D9E70(a2, (int)this, v18);
    }
  }
  if ( (this[62] & 0x20) != 0 && (int *)sub_101C5260(a2) == this )
  {
    this[307] = a2 ? *(_DWORD *)(*(int (__thiscall **)(int *))(*a2 + 8))(a2) : -1;
    if ( (int (__thiscall *)(_DWORD *))this[2] != sub_1020D610 )
    {
      sub_100EC3F0(this, (int)sub_1020D610, 0.0, 0);
      v16 = *((float *)this + 306) + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0(this, v16, 0);
    }
  }
  result = (_DWORD *)this[358];
  if ( result != (_DWORD *)-1 && off_1061BE18[4 * (this[358] & 0xFFF) + 2] == (unsigned int)this[358] >> 12 )
  {
    if ( off_1061BE18[4 * (this[358] & 0xFFF) + 1] )
    {
      result = (_DWORD *)sub_10415A10(this[358]);
      if ( !(_BYTE)result )
      {
        result = (_DWORD *)sub_100D7680((int)a2);
        v9 = result;
        if ( result )
        {
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 1516))(result);
          if ( (_BYTE)result )
          {
            result = (_DWORD *)(v9[64] >> 27);
            if ( (v9[64] & 0x8000000) == 0 )
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD, _DWORD))(*v9 + 808))(v9, 25.0, 1, 0.0, 0);
              v10 = sub_1026A890(this + 358);
              sub_104167C0((int)this, v10, 5.0);
              result = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                                   dword_106B31F8,
                                   "flare_ignite_npc",
                                   0);
              v11 = (int)result;
              if ( result )
              {
                v12 = *result;
                v13 = sub_1001F3C0(v9);
                (*(void (__thiscall **)(int, const char *, int))(v12 + 40))(v11, "entindex", v13);
                return (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(
                                   dword_106B31F8,
                                   v11,
                                   0);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
