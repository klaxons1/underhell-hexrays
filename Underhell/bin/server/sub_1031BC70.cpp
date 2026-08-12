void __usercall sub_1031BC70(int a1@<ecx>, int a2@<edi>)
{
  float v3; // eax
  float v4; // edx
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // rtt
  double v10; // st5
  double v11; // st7
  double v12; // st4
  float v13; // [esp+Ch] [ebp-18h]
  float v14; // [esp+Ch] [ebp-18h]
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+10h] [ebp-14h]
  float v17; // [esp+14h] [ebp-10h]
  float v18; // [esp+14h] [ebp-10h]
  float v19; // [esp+18h] [ebp-Ch] BYREF
  float v20; // [esp+1Ch] [ebp-8h]
  float v21; // [esp+20h] [ebp-4h]

  if ( *(float *)(a1 + 4232) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(_BYTE *)(a1 + 4228) & 1) != 0 )
    {
      sub_1031B7D0(a1, a2, 0, 0, 1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a1);
      v3 = *(float *)(a1 + 480);
      v4 = *(float *)(a1 + 476);
      v21 = *(float *)(a1 + 484);
      v20 = v3;
      v5 = v21 * 0.0;
      v19 = v4;
      v13 = v3 - v5;
      v15 = v5 - v4;
      v17 = v4 * 0.0 - 0.0 * v3;
      off_10689714();
      v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             300.0,
             500.0);
      v7 = v13 * v6;
      v8 = v15 * v6;
      v16 = v8;
      v9 = v8;
      v10 = v6 * v17;
      v11 = v9;
      v12 = 0.0;
      if ( v21 <= 0.0 )
        v12 = v21;
      v19 = v7 + v19;
      v20 = v11 + v20;
      v21 = v10 + v12;
      sub_1031B7D0(a1, a2, 0, &v19, 1);
      v14 = v7;
      v19 = v19 - v14 * 2.0;
      v20 = v20 - v16 * 2.0;
      v18 = v10;
      v21 = v21 - 2.0 * v18;
      sub_1031B7D0(a1, a2, 0, &v19, 1);
    }
    *(_DWORD *)(a1 + 4228) = *(_DWORD *)(a1 + 4228) == 0;
    *(float *)(a1 + 4232) = *(float *)(dword_106B31C8 + 12) + 0.2;
  }
}
