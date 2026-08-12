void __thiscall sub_10267C40(unsigned int *this, int a2)
{
  char *v3; // ebx
  _BYTE *v4; // ecx
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // ecx
  int (__thiscall *v10)(int); // eax
  float *v11; // eax
  __int64 v12; // [esp+0h] [ebp-30h]
  float v13[3]; // [esp+18h] [ebp-18h] BYREF
  float v14; // [esp+24h] [ebp-Ch]
  float v15; // [esp+28h] [ebp-8h]
  float v16; // [esp+2Ch] [ebp-4h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( this[39] != -1
      && off_1061BE18[4 * (this[39] & 0xFFF) + 2] == this[39] >> 12
      && off_1061BE18[4 * (this[39] & 0xFFF) + 1] )
    {
      (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 44))(this, 0);
    }
    sub_102674B0(this + 39, a2);
    v3 = (char *)(this - 371);
    HIDWORD(v12) = this - 371;
    LODWORD(v12) = a2;
    sub_1010DD80(this + 3, v12, 0.0);
    if ( !*((_BYTE *)this + 228) )
    {
      v4 = v3 + 1124;
      if ( v3[1704] )
        sub_10144FA0(v4, 1);
      else
        sub_10144F50((int)v4);
    }
    sub_100EC4A0((int *)this - 371, *(float *)(dword_106B31C8 + 12), 0);
    v5 = (float *)this[2];
    v6 = v5[31];
    v7 = v5[32];
    v8 = v5[33];
    v14 = v6;
    v9 = *(_DWORD *)(a2 + 252) >> 11;
    v15 = v7;
    v16 = v8;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(a2);
    v10 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 508);
    v13[0] = *(float *)(a2 + 580) + v14;
    v13[1] = *(float *)(a2 + 584) + v15;
    v13[2] = *(float *)(a2 + 588) + v16;
    v11 = (float *)v10(a2);
    sub_10266840(this[2], v13, v11);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this - 81) + 44))(*(this - 81));
  }
}
