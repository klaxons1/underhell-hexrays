void __thiscall sub_1032F530(int *this, float *a2, int a3)
{
  int *v4; // edi
  int v5; // ebx
  unsigned int v6; // edx
  float v7; // eax
  float v8; // ecx
  int v9; // eax
  unsigned __int16 *v10; // eax
  int v11; // [esp+24h] [ebp-18h] BYREF
  float v12; // [esp+28h] [ebp-14h]
  float v13; // [esp+2Ch] [ebp-10h]
  float v14[2]; // [esp+30h] [ebp-Ch] BYREF
  float v15; // [esp+38h] [ebp-4h]
  float v16; // [esp+44h] [ebp+8h]

  if ( *((_BYTE *)this + 3776) )
  {
    DevMsg("*** Zombie is already a torso!\n");
  }
  else
  {
    if ( (this[64] & 0x8000000) != 0 )
    {
      (*(void (__thiscall **)(int *))(*this + 824))(this);
      (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, _DWORD))(*this + 808))(this, 30.0, 1, 0.0, 0);
    }
    if ( !*((_BYTE *)this + 3777) )
    {
      v4 = this + 54;
      v5 = (int)((double)this[54] * 0.5);
      if ( this[54] != v5 )
      {
        (*(void (__thiscall **)(int *, int *))(*this + 456))(this, this + 54);
        *v4 = v5;
      }
      if ( this[55] != *v4 )
      {
        (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
        this[55] = *v4;
      }
      sub_10020480(this, 3072);
      sub_10044510((int)this, (int)"Becoming torso");
      sub_10081C10(this[647]);
      this[949] = -1;
      sub_100457E0(this, 78);
      v6 = (unsigned int)this[63] >> 11;
      *((_BYTE *)this + 3776) = 1;
      if ( (v6 & 1) != 0 )
        sub_100DAE60((int)this);
      v7 = *((float *)this + 145);
      v8 = *((float *)this + 146);
      v15 = *((float *)this + 147);
      v14[0] = v7;
      v14[1] = v8;
      v15 = v15 + 40.0;
      sub_100E0D20((int)this, v14);
      sub_101C73D0((unsigned int *)this, 0);
      *(float *)&v11 = *a2 * 0.0099999998;
      v12 = a2[1] * 0.0099999998;
      v13 = 0.0099999998 * a2[2];
      sub_100EA150((int)this, (float *)&v11);
    }
    v16 = 0.0;
    if ( (this[62] & 0x200) != 0 )
      v16 = 5.0;
    if ( *((_BYTE *)this + 3776) == 1 )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v11 = this[145];
      v12 = *((float *)this + 146);
      v13 = *((float *)this + 147) - 40.0;
      v9 = (*(int (__thiscall **)(int *))(*this + 2336))(this);
      v10 = sub_10166A90(v9, (int)&v11, (float *)this + 176, a3, v16, 0);
      if ( v10 )
        (*(void (__thiscall **)(unsigned __int16 *, int *))(*(_DWORD *)v10 + 76))(v10, this);
    }
    (*(void (__thiscall **)(int *))(*this + 2268))(this);
  }
}
