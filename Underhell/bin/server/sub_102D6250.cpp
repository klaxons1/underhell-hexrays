void __thiscall sub_102D6250(int this)
{
  int v2; // edi
  int v3; // eax
  void (__noreturn ***v4)(); // eax
  float v5; // [esp+8h] [ebp-20h]
  float v6; // [esp+Ch] [ebp-1Ch]
  float v7; // [esp+18h] [ebp-10h]
  float v8; // [esp+1Ch] [ebp-Ch]
  float v9; // [esp+20h] [ebp-8h]
  float v10; // [esp+24h] [ebp-4h]
  int v11; // [esp+24h] [ebp-4h]

  sub_102D61C0(this);
  if ( *(_DWORD *)(this + 2148) )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v2 = sub_10261B20();
      if ( v2 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
          sub_100DAE60(v2);
        v7 = *(float *)(v2 + 580) - *(float *)(this + 580);
        v8 = *(float *)(v2 + 584) - *(float *)(this + 584);
        v9 = *(float *)(v2 + 588) - *(float *)(this + 588);
        off_10689714();
        if ( (*(_DWORD *)(v2 + 252) & 0x1000) != 0 )
          sub_100DAFD0(v2);
        v10 = *(float *)(v2 + 480) * v8 + *(float *)(v2 + 476) * v7 + *(float *)(v2 + 484) * v9;
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        v3 = (int)((1.0 - v10 * 0.000076634227)
                 / (0.000076634227
                  * -(*(float *)(this + 480) * v8 + *(float *)(this + 476) * v7 + *(float *)(this + 484) * v9)
                  + 1.0)
                 * 100.0);
        v11 = v3;
        if ( v3 <= 250 )
        {
          if ( v3 < 50 )
            v11 = 50;
        }
        else
        {
          v11 = 250;
        }
        v4 = sub_1023DBA0();
        v5 = (float)v11;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[11])(
          v4,
          *(_DWORD *)(this + 2148),
          LODWORD(v5),
          0.1);
      }
    }
    v6 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v6, 0);
  }
}
