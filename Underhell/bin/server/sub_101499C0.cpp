void __thiscall sub_101499C0(int *this, int *a2)
{
  float *v4; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // eax
  double v8; // st7
  float v9; // [esp+Ch] [ebp-C4h]
  float v10; // [esp+Ch] [ebp-C4h]
  float v11; // [esp+14h] [ebp-BCh]
  float v12; // [esp+18h] [ebp-B8h]
  int v13[20]; // [esp+74h] [ebp-5Ch] BYREF
  int v14[3]; // [esp+C4h] [ebp-Ch] BYREF
  int v15; // [esp+D8h] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2) && this[203] != 7 )
  {
    if ( (this[62] & 2) != 0 )
    {
      v4 = (float *)(*(int (__thiscall **)(int *, int *))(*a2 + 536))(a2, v14);
      v12 = v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2];
      v5 = off_10689708(v12) * 0.01;
      *(float *)&v15 = v5;
      if ( (double)this[55] <= v5 )
      {
        if ( *((_BYTE *)this + 225) != 2 )
        {
          (*(void (__thiscall **)(int *, int))(*this + 480))(this, (int)this + 225);
          v5 = *(float *)&v15;
          *((_BYTE *)this + 225) = 2;
        }
        v6 = *this;
        v9 = v5;
        this[49] = 0;
        v7 = sub_10248110((int)a2, (int)a2, v9, 1, 0);
        (*(void (__thiscall **)(int *, int))(v6 + 256))(this, v7);
        v10 = *(float *)&v15 * 0.25;
        sub_10248110((int)a2, (int)a2, v10, 4, 0);
        if ( (this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        if ( (this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        if ( (a2[63] & 0x800) != 0 )
          sub_100DAE60((int)a2);
        *(float *)v14 = *((float *)a2 + 145) - *((float *)this + 145);
        *(float *)&v14[1] = *((float *)a2 + 146) - *((float *)this + 146);
        *(float *)&v14[2] = *((float *)a2 + 147) - *((float *)this + 147);
        sub_10248690((int)v13, (int)v14, (int)(this + 145), 1.0);
        sub_100D9E70(a2, (int)this, v13);
      }
    }
    if ( (this[62] & 4) != 0 && (int *)sub_101C5260(a2) == this )
    {
      sub_10149810(this);
      sub_10019680(this + 204, (int)a2);
      sub_100EC3F0(this, (int)sub_1029D7A0, 0.0, 0);
      v8 = *((float *)this + 212);
      this[49] = 0;
      v11 = v8 + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0(this, v11, 0);
    }
  }
}
