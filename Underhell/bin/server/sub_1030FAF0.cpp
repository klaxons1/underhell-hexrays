void __thiscall sub_1030FAF0(_DWORD *this, char a2, float a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax
  float *v7; // edi
  double v8; // st7
  float *v9; // eax
  int v10; // eax
  float *v11; // eax
  _DWORD v12[6]; // [esp+4h] [ebp-20h] BYREF
  char v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
    && (this[929] == -1
     || off_1061BE18[4 * (this[929] & 0xFFF) + 2] != this[929] >> 12
     || !off_1061BE18[4 * (this[929] & 0xFFF) + 1])
    && *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 914) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v5 = *this;
    v12[0] = v4;
    v6 = (*(int (__thiscall **)(_DWORD *))(v5 + 368))(this);
    v7 = (float *)v6;
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    *(float *)&v12[1] = v7[145];
    *(float *)&v12[2] = v7[146];
    v8 = v7[147];
    v13 = a2;
    *(float *)&v12[3] = v8;
    *(float *)&v12[4] = a3;
    *(float *)&v12[5] = 0.70710677;
    v14 = 240.0;
    v9 = sub_1030D4C0((int)this, (int)v12);
    if ( v9 )
      this[929] = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v9 + 8))(v9);
    else
      this[929] = -1;
    if ( (unsigned __int8)sub_103E0CF0(0) )
    {
      sub_10023CB0((char *)this, 73);
      v10 = sub_1026A890(this + 929);
      v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
      *((float *)this + 919) = *v11;
      *((float *)this + 920) = v11[1];
      *((float *)this + 921) = v11[2];
    }
    *((float *)this + 914) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
