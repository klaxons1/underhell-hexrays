void __thiscall sub_103137C0(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned __int16 *v5; // eax
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  float v7; // [esp+10h] [ebp-8h]
  float v8; // [esp+14h] [ebp-4h]
  float v9; // [esp+20h] [ebp+8h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 4072) )
  {
    v3 = 250;
    if ( (double)a2 <= 250.0 )
      v3 = a2;
    *(float *)(this + 4072) = *(float *)(dword_106B31C8 + 12) + 3.0;
    v9 = (float)(300 * v3);
    sub_1001F010((float *)&v6, -1.0, 1.0);
    v4 = *(_DWORD *)(this + 252) >> 11;
    *(float *)&v6 = *(float *)&v6 * v9;
    v7 = v7 * v9;
    v8 = v9 * 0.5;
    if ( (v4 & 1) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = sub_10166A90((int)"models/combine_soldier.mdl", this + 580, (float *)(this + 704), (int)&v6, 0.0, 0);
    if ( v5 )
      (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v5 + 76))(v5, this);
  }
}
